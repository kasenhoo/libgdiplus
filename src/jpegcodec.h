/*
 * jpegcodec.h : Contains function declarations for encoding decoding jpeg images
 *
 * Authors:
 *  	Sanjay Gupta (gsanjay@novell.com)
 *      Vladimir Vukicevic (vladimir@pobox.com)
 *
 * Copyright (C) Novell, Inc. 2003-2004.
 */

#ifndef _JPEGCODEC_H
#define _JPEGCODEC_H
#include "gdip.h"
#include "gdip_win32.h"

GpStatus 
gdip_load_jpeg_image_from_file (FILE *fp, GpImage **image);

GpStatus
gdip_load_jpeg_image_from_stream_delegate (GetBytesDelegate getBytesFunc,
                                           SeekDelegate seeknFunc,
                                           GpImage **image);

GpStatus 
gdip_save_jpeg_image_to_file (FILE *fp, GpImage *image, GDIPCONST EncoderParameters *params);

GpStatus
gdip_save_jpeg_image_to_stream_delegate (PutBytesDelegate putBytesFunc,
                                         GpImage *image,
                                         GDIPCONST EncoderParameters *params);

ImageCodecInfo *
gdip_getcodecinfo_jpeg ();


#endif /* _PNGCODEC_H */
