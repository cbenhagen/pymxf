CYTHON_SRC = $(shell find mxf -name "*.pyx")
C_SRC = $(CYTHON_SRC:%.pyx=build/cython/%.c)
MOD_SOS = $(CYTHON_SRC:%.pyx=%.so)

TEST_MOV = sandbox/640x360.mp4

.PHONY: default build cythonize clean clean-all info test docs

default: build

info:
	@ echo Cython sources: $(CYTHON_SRC)

cythonize: $(C_SRC)

build/cython/%.c: %.pyx
	@ mkdir -p $(shell dirname $@)
	cython -I. -Iheaders -o $@ $<

build: cythonize
	python setup.py build_ext --inplace --debug

test: build
	python -m examples.decode $(TEST_MOV)
test-fail: build
	python -m examples.decode dne-$(TEST_MOV)

debug: build
	gdb python --args python -m examples.tutorial $(TEST_MOV)

docs: build
	make -C docs html
	
clean:
	- rm -rf build
	- find mxf -name '*.so' -delete

clean-all: clean
	- rm configure config.py

