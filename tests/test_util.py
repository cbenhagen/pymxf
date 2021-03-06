import unittest

from mxf import util


class TestUtil(unittest.TestCase):
    
    def test_test(self):
        print 'essence_containers'
        for name, key in util.iter_labels_and_keys('essence_containers'):
            print '  ', name, '=', key
        print ''
        print 'essence_coding_labels'
        for name, key in util.iter_labels_and_keys('essence_coding_labels'):
            print '  ', name, '=', key
        
        print 'essence_element_keys'
        for name, key in util.iter_labels_and_keys('essence_element_keys'):
            print '  ', name, '=', key
if __name__ == '__main__':
    unittest.main()