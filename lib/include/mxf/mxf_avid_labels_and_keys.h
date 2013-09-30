/*
 * $Id: mxf_avid_labels_and_keys.h,v 1.10 2011/01/10 17:05:15 john_f Exp $
 *
 * Avid labels, keys, etc.
 *
 * Copyright (C) 2006  Philip de Nier <philipn@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __MXF_AVID_LABELS_AND_KEYS_H__
#define __MXF_AVID_LABELS_AND_KEYS_H__


#ifdef __cplusplus
extern "C"
{
#endif



/*
 *
 * Picture/Sound coding labels
 *
 */


/* Avid MJPEG labels observed in files created by Media Composer 2.1.x */
static const mxfUL MXF_CMDEF_L(AvidMJPEG1110B_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x01, 0x03, 0x01, 0x00};

static const mxfUL MXF_CMDEF_L(AvidMJPEG21_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x08};
static const mxfUL MXF_CMDEF_L(AvidMJPEG21_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x07};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x06};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x05};
static const mxfUL MXF_CMDEF_L(AvidMJPEG101_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x04};
static const mxfUL MXF_CMDEF_L(AvidMJPEG101_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x03};
static const mxfUL MXF_CMDEF_L(AvidMJPEG201_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x02};
static const mxfUL MXF_CMDEF_L(AvidMJPEG201_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x01, 0x01};
static const mxfUL MXF_CMDEF_L(AvidMJPEG41m_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x04, 0x04};
static const mxfUL MXF_CMDEF_L(AvidMJPEG41m_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x04, 0x03};
static const mxfUL MXF_CMDEF_L(AvidMJPEG101m_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x04, 0x02};
static const mxfUL MXF_CMDEF_L(AvidMJPEG101m_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x04, 0x01};
static const mxfUL MXF_CMDEF_L(AvidMJPEG21s_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x06};
static const mxfUL MXF_CMDEF_L(AvidMJPEG21s_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x05};
static const mxfUL MXF_CMDEF_L(AvidMJPEG41s_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x04};
static const mxfUL MXF_CMDEF_L(AvidMJPEG41s_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x03};
static const mxfUL MXF_CMDEF_L(AvidMJPEG151s_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x02};
static const mxfUL MXF_CMDEF_L(AvidMJPEG151s_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01};

static const mxfUL MXF_CMDEF_L(AvidMJPEG351p_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x02};
static const mxfUL MXF_CMDEF_L(AvidMJPEG351p_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x01};
static const mxfUL MXF_CMDEF_L(AvidMJPEG281p_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x04};
static const mxfUL MXF_CMDEF_L(AvidMJPEG281p_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x03};
static const mxfUL MXF_CMDEF_L(AvidMJPEG141p_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x08};
static const mxfUL MXF_CMDEF_L(AvidMJPEG141p_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x07};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31p_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x0c};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31p_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x0b};
static const mxfUL MXF_CMDEF_L(AvidMJPEG21p_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x0e};
static const mxfUL MXF_CMDEF_L(AvidMJPEG21p_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x03, 0x0d};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31m_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x05, 0x04};
static const mxfUL MXF_CMDEF_L(AvidMJPEG31m_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x05, 0x03};
static const mxfUL MXF_CMDEF_L(AvidMJPEG81m_PAL) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x05, 0x02};
static const mxfUL MXF_CMDEF_L(AvidMJPEG81m_NTSC) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x02, 0x01, 0x02, 0x01, 0x05, 0x01};



/*
 *
 * Essence container labels
 *
 */

static const mxfUL MXF_EC_L(AvidDV25ClipWrappedEssenceContainer) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x01, 0x00, 0x00};

static const mxfUL MXF_EC_L(AvidMJPEGClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x01, 0x00, 0x00};

static const mxfUL MXF_EC_L(AvidAAFKLVEssenceContainer) =
    {0x06, 0x0e, 0x2b, 0x34, 0x01, 0x01, 0x01, 0xff, 0x4b, 0x46, 0x41, 0x41, 0x00, 0x0d, 0x4d, 0x4f};

/* To be identical to the Avid don't use MXF_EC_L(D10_50_625_50_picture_only)
 etc since they use regver=2 while Avid uses regver=1 */
static const mxfUL MXF_EC_L(AvidIMX50_625_50) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x01, 0x7f};
static const mxfUL MXF_EC_L(AvidIMX50_525_60) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x02, 0x7f};
static const mxfUL MXF_EC_L(AvidIMX40_625_50) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x03, 0x7f};
static const mxfUL MXF_EC_L(AvidIMX40_525_60) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x04, 0x7f};
static const mxfUL MXF_EC_L(AvidIMX30_625_50) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x7f};
static const mxfUL MXF_EC_L(AvidIMX30_525_60) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0d, 0x01, 0x03, 0x01, 0x02, 0x01, 0x06, 0x7f};

/* Label found in Avid file containing XDCAM proxy (MPEG-4) material */
static const mxfUL MXF_EC_L(AvidMPEG4) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x03, 0x00, 0x00};

/* Label observed in XDCAM HD422 files produced by Media Composer 3.0 */
static const mxfUL MXF_EC_L(AvidMPEGClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x03, 0x00, 0x00};


/* DNxHD */

/* DNxHD EssenceContainer labels observed in files created by Media Composer Software 2.7.2 */
static const mxfUL MXF_EC_L(DNxHD720p120ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x03, 0x03};
static const mxfUL MXF_EC_L(DNxHD720p185ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x03, 0x02};
static const mxfUL MXF_EC_L(DNxHD1080p185XClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x01, 0x01};
static const mxfUL MXF_EC_L(DNxHD1080p120ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x01, 0x02};
static const mxfUL MXF_EC_L(DNxHD1080p185ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x01, 0x03};
static const mxfUL MXF_EC_L(DNxHD1080p36ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x01, 0x04};
/* DNxHD EssenceContainer labels observed in files created by Media Composer Adrenaline 2.2.9 */
static const mxfUL MXF_EC_L(DNxHD1080i185XClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x02, 0x01};
static const mxfUL MXF_EC_L(DNxHD1080i120ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x02, 0x02};
static const mxfUL MXF_EC_L(DNxHD1080i185ClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x04, 0x01, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x02, 0x06, 0x02, 0x03};



/*
 *
 * Essence element keys
 *
 */

static const mxfKey MXF_EE_K(AvidMJPEGClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x01, 0x02, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x15, 0x01, 0x01, 0x01};

#define MXF_AVID_MJPEG_PICT_TRACK_NUM   MXF_TRACK_NUM(0x15, 0x01, 0x01, 0x01)


/* Label observed in XDCAM HD422 files produced by Media Composer 3.0 */
static const mxfKey MXF_EE_K(AvidMPEGClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x01, 0x02, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x15, 0x01, 0x03, 0x01};

#define MXF_AVID_MPEG_PICT_TRACK_NUM  MXF_TRACK_NUM(0x15, 0x01, 0x03, 0x01)


static const mxfKey MXF_EE_K(DNxHD) =
    {0x06, 0x0e, 0x2b, 0x34, 0x01, 0x02, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x15, 0x01, 0x06, 0x01};

#define MXF_DNXHD_PICT_TRACK_NUM  MXF_TRACK_NUM(0x15, 0x01, 0x06, 0x01)


static const mxfKey MXF_EE_K(DVClipWrapped) = MXF_DV_EE_K(0x01, MXF_DV_CLIP_WRAPPED_EE_TYPE, 0x01);

static const mxfKey MXF_EE_K(BWFClipWrapped) = MXF_AES3BWF_EE_K(0x01, MXF_BWF_CLIP_WRAPPED_EE_TYPE, 0x01);

static const mxfKey MXF_EE_K(AES3ClipWrapped) = MXF_AES3BWF_EE_K(0x01, MXF_AES3_CLIP_WRAPPED_EE_TYPE, 0x01);

static const mxfKey MXF_EE_K(UncClipWrapped) = MXF_UNC_EE_K(0x01, MXF_UNC_CLIP_WRAPPED_EE_TYPE, 0x01);

static const mxfKey MXF_EE_K(IMX) = MXF_D10_PICTURE_EE_K(0x01);


/* Label observed in file produced by media Composer 3.0 */
static const mxfKey MXF_EE_K(AvidUnc10BitClipWrapped) =
    {0x06, 0x0e, 0x2b, 0x34, 0x01, 0x02, 0x01, 0x01, 0x0e, 0x04, 0x03, 0x01, 0x15, 0x01, 0x07, 0x01};

#define MXF_AVID_UNC_10BIT_PICT_TRACK_NUM  MXF_TRACK_NUM(0x15, 0x01, 0x07, 0x01)



/*
 *
 * Avid CDCIDescriptor::ResolutionID
 *
 */

static const uint32_t g_AvidMJPEG1110B_NTSC_ResolutionID = 0x7e5;    /* 2021 */
static const uint32_t g_AvidMJPEG118B_NTSC_ResolutionID = 0xaa;    /* 170 */

static const uint32_t g_AvidMJPEG21_ResolutionID = 0x4c;    /* 76 */
static const uint32_t g_AvidMJPEG31_ResolutionID = 0x4d;    /* 77 */
static const uint32_t g_AvidMJPEG101_ResolutionID = 0x4b;   /* 75 */
static const uint32_t g_AvidMJPEG41m_ResolutionID = 0x6f;  /* 111 */
static const uint32_t g_AvidMJPEG101m_ResolutionID = 0x6e;  /* 110 */
static const uint32_t g_AvidMJPEG21s_ResolutionID = 0x50;  /* 80 */
static const uint32_t g_AvidMJPEG41s_ResolutionID = 0x4f;  /* 79 */
static const uint32_t g_AvidMJPEG151s_ResolutionID = 0x4e;  /* 78 */
static const uint32_t g_AvidMJPEG201_ResolutionID = 0x52;   /* 82 */

static const uint32_t g_AvidMJPEG351p_ResolutionID = 0x66;   /* 102 */
static const uint32_t g_AvidMJPEG281p_ResolutionID = 0x68;   /* 104 */
static const uint32_t g_AvidMJPEG141p_ResolutionID = 0x67;   /* 103 */
static const uint32_t g_AvidMJPEG31p_ResolutionID = 0x61;   /* 97 */
static const uint32_t g_AvidMJPEG21p_ResolutionID = 0x62;   /* 98 */
static const uint32_t g_AvidMJPEG31m_ResolutionID = 0x71;  /* 113 */
static const uint32_t g_AvidMJPEG81m_ResolutionID = 0x70;  /* 112 */

static const uint32_t g_AvidMPEG4_ResolutionID = 0x05df; /* 1503 */

static const uint32_t g_AvidMPEG_PAL_ResolutionID   = 0x0fea; /* 4074 */
static const uint32_t g_AvidMPEG_NTSC_ResolutionID  = 0x0fe9; /* 4073 */



/*
 *
 * Avid extensions metadata keys
 *
 */

static const mxfKey g_AvidObjectDirectory_key =
    {0x96, 0x13, 0xb3, 0x8a, 0x87, 0x34, 0x87, 0x46, 0xf1, 0x02, 0x96, 0xf0, 0x56, 0xe0, 0x4d, 0x2a};

static const mxfKey g_AvidMetadataRoot_key =
    {0x80, 0x53, 0x08, 0x00, 0x36, 0x21, 0x08, 0x04, 0xb3, 0xb3, 0x98, 0xa5, 0x1c, 0x90, 0x11, 0xd4};



#ifdef __cplusplus
}
#endif


#endif

