/*
 * pngcodec.h : Contains function declarations for encoding decoding png images
 *
 * Authors:
 *  	Sanjay Gupta (gsanjay@novell.com)
 *	Vladimir Vukicevic (vladimir@pobox.com)
 *
 * Copyright (C) 2003-2004, 2007 Novell, Inc (http://www.novell.com)
 */

#ifndef _PNGCODEC_H
#define _PNGCODEC_H

#include "gdip.h"
#include "gdipImage.h"

GpStatus gdip_load_png_image_from_file (FILE *fp, GpImage **image) GDIP_INTERNAL;

GpStatus gdip_load_png_image_from_stream_delegate (GetBytesDelegate getBytesFunc, SeekDelegate seeknFunc, 
	GpImage **image) GDIP_INTERNAL;

GpStatus gdip_save_png_image_to_file (FILE *fp, GpImage *image, GDIPCONST EncoderParameters *params) GDIP_INTERNAL;

GpStatus gdip_save_png_image_to_stream_delegate (PutBytesDelegate putBytesFunc, GpImage *image,
	GDIPCONST EncoderParameters *params) GDIP_INTERNAL;

ImageCodecInfo *gdip_getcodecinfo_png () GDIP_INTERNAL;

#endif /* _PNGCODEC_H */
