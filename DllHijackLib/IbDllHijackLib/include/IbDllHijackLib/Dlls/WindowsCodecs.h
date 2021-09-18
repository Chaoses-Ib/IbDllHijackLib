﻿#pragma once
#ifndef IB_HIJACK_EXPORT
#include "../Default.h"
#endif

#define IB_HIJACK_DLL "WindowsCodecs.dll"
#define IB_HIJACK_DLL_NOEXT "WindowsCodecs"
#define IB_HIJACK_DLL_DIR "C:\\Windows\\System32"
#define IB_HIJACK_DLL_DESC "Microsoft Windows Codecs Library"

IB_HIJACK_EXPORT(1, DllGetClassObject)
IB_HIJACK_EXPORT(2, IEnumString_Next_WIC_Proxy)
IB_HIJACK_EXPORT(3, IEnumString_Reset_WIC_Proxy)
IB_HIJACK_EXPORT(4, IPropertyBag2_Write_Proxy)
IB_HIJACK_EXPORT(5, IWICBitmapClipper_Initialize_Proxy)
IB_HIJACK_EXPORT(6, IWICBitmapCodecInfo_DoesSupportAnimation_Proxy)
IB_HIJACK_EXPORT(7, IWICBitmapCodecInfo_DoesSupportLossless_Proxy)
IB_HIJACK_EXPORT(8, IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy)
IB_HIJACK_EXPORT(9, IWICBitmapCodecInfo_GetContainerFormat_Proxy)
IB_HIJACK_EXPORT(10, IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy)
IB_HIJACK_EXPORT(11, IWICBitmapCodecInfo_GetDeviceModels_Proxy)
IB_HIJACK_EXPORT(12, IWICBitmapCodecInfo_GetFileExtensions_Proxy)
IB_HIJACK_EXPORT(13, IWICBitmapCodecInfo_GetMimeTypes_Proxy)
IB_HIJACK_EXPORT(14, IWICBitmapDecoder_CopyPalette_Proxy)
IB_HIJACK_EXPORT(15, IWICBitmapDecoder_GetColorContexts_Proxy)
IB_HIJACK_EXPORT(16, IWICBitmapDecoder_GetDecoderInfo_Proxy)
IB_HIJACK_EXPORT(17, IWICBitmapDecoder_GetFrameCount_Proxy)
IB_HIJACK_EXPORT(18, IWICBitmapDecoder_GetFrame_Proxy)
IB_HIJACK_EXPORT(19, IWICBitmapDecoder_GetMetadataQueryReader_Proxy)
IB_HIJACK_EXPORT(20, IWICBitmapDecoder_GetPreview_Proxy)
IB_HIJACK_EXPORT(21, IWICBitmapDecoder_GetThumbnail_Proxy)
IB_HIJACK_EXPORT(22, IWICBitmapEncoder_Commit_Proxy)
IB_HIJACK_EXPORT(23, IWICBitmapEncoder_CreateNewFrame_Proxy)
IB_HIJACK_EXPORT(24, IWICBitmapEncoder_GetEncoderInfo_Proxy)
IB_HIJACK_EXPORT(25, IWICBitmapEncoder_GetMetadataQueryWriter_Proxy)
IB_HIJACK_EXPORT(26, IWICBitmapEncoder_Initialize_Proxy)
IB_HIJACK_EXPORT(27, IWICBitmapEncoder_SetPalette_Proxy)
IB_HIJACK_EXPORT(28, IWICBitmapEncoder_SetThumbnail_Proxy)
IB_HIJACK_EXPORT(29, IWICBitmapFlipRotator_Initialize_Proxy)
IB_HIJACK_EXPORT(30, IWICBitmapFrameDecode_GetColorContexts_Proxy)
IB_HIJACK_EXPORT(31, IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy)
IB_HIJACK_EXPORT(32, IWICBitmapFrameDecode_GetThumbnail_Proxy)
IB_HIJACK_EXPORT(33, IWICBitmapFrameEncode_Commit_Proxy)
IB_HIJACK_EXPORT(34, IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy)
IB_HIJACK_EXPORT(35, IWICBitmapFrameEncode_Initialize_Proxy)
IB_HIJACK_EXPORT(36, IWICBitmapFrameEncode_SetColorContexts_Proxy)
IB_HIJACK_EXPORT(37, IWICBitmapFrameEncode_SetResolution_Proxy)
IB_HIJACK_EXPORT(38, IWICBitmapFrameEncode_SetSize_Proxy)
IB_HIJACK_EXPORT(39, IWICBitmapFrameEncode_SetThumbnail_Proxy)
IB_HIJACK_EXPORT(40, IWICBitmapFrameEncode_WriteSource_Proxy)
IB_HIJACK_EXPORT(41, IWICBitmapLock_GetDataPointer_STA_Proxy)
IB_HIJACK_EXPORT(42, IWICBitmapLock_GetStride_Proxy)
IB_HIJACK_EXPORT(43, IWICBitmapScaler_Initialize_Proxy)
IB_HIJACK_EXPORT(44, IWICBitmapSource_CopyPalette_Proxy)
IB_HIJACK_EXPORT(45, IWICBitmapSource_CopyPixels_Proxy)
IB_HIJACK_EXPORT(46, IWICBitmapSource_GetPixelFormat_Proxy)
IB_HIJACK_EXPORT(47, IWICBitmapSource_GetResolution_Proxy)
IB_HIJACK_EXPORT(48, IWICBitmapSource_GetSize_Proxy)
IB_HIJACK_EXPORT(49, IWICBitmap_Lock_Proxy)
IB_HIJACK_EXPORT(50, IWICBitmap_SetPalette_Proxy)
IB_HIJACK_EXPORT(51, IWICBitmap_SetResolution_Proxy)
IB_HIJACK_EXPORT(52, IWICColorContext_InitializeFromMemory_Proxy)
IB_HIJACK_EXPORT(53, IWICComponentFactory_CreateMetadataWriterFromReader_Proxy)
IB_HIJACK_EXPORT(54, IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy)
IB_HIJACK_EXPORT(55, IWICComponentInfo_GetAuthor_Proxy)
IB_HIJACK_EXPORT(56, IWICComponentInfo_GetCLSID_Proxy)
IB_HIJACK_EXPORT(57, IWICComponentInfo_GetFriendlyName_Proxy)
IB_HIJACK_EXPORT(58, IWICComponentInfo_GetSpecVersion_Proxy)
IB_HIJACK_EXPORT(59, IWICComponentInfo_GetVersion_Proxy)
IB_HIJACK_EXPORT(60, IWICFastMetadataEncoder_Commit_Proxy)
IB_HIJACK_EXPORT(61, IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy)
IB_HIJACK_EXPORT(62, IWICFormatConverter_Initialize_Proxy)
IB_HIJACK_EXPORT(63, IWICImagingFactory_CreateBitmapClipper_Proxy)
IB_HIJACK_EXPORT(64, IWICImagingFactory_CreateBitmapFlipRotator_Proxy)
IB_HIJACK_EXPORT(65, IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy)
IB_HIJACK_EXPORT(66, IWICImagingFactory_CreateBitmapFromHICON_Proxy)
IB_HIJACK_EXPORT(67, IWICImagingFactory_CreateBitmapFromMemory_Proxy)
IB_HIJACK_EXPORT(68, IWICImagingFactory_CreateBitmapFromSource_Proxy)
IB_HIJACK_EXPORT(69, IWICImagingFactory_CreateBitmapScaler_Proxy)
IB_HIJACK_EXPORT(70, IWICImagingFactory_CreateBitmap_Proxy)
IB_HIJACK_EXPORT(71, IWICImagingFactory_CreateComponentInfo_Proxy)
IB_HIJACK_EXPORT(72, IWICImagingFactory_CreateDecoderFromFileHandle_Proxy)
IB_HIJACK_EXPORT(73, IWICImagingFactory_CreateDecoderFromFilename_Proxy)
IB_HIJACK_EXPORT(74, IWICImagingFactory_CreateDecoderFromStream_Proxy)
IB_HIJACK_EXPORT(75, IWICImagingFactory_CreateEncoder_Proxy)
IB_HIJACK_EXPORT(76, IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy)
IB_HIJACK_EXPORT(77, IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy)
IB_HIJACK_EXPORT(78, IWICImagingFactory_CreateFormatConverter_Proxy)
IB_HIJACK_EXPORT(79, IWICImagingFactory_CreatePalette_Proxy)
IB_HIJACK_EXPORT(80, IWICImagingFactory_CreateQueryWriterFromReader_Proxy)
IB_HIJACK_EXPORT(81, IWICImagingFactory_CreateQueryWriter_Proxy)
IB_HIJACK_EXPORT(82, IWICImagingFactory_CreateStream_Proxy)
IB_HIJACK_EXPORT(83, IWICMetadataBlockReader_GetCount_Proxy)
IB_HIJACK_EXPORT(84, IWICMetadataBlockReader_GetReaderByIndex_Proxy)
IB_HIJACK_EXPORT(85, IWICMetadataQueryReader_GetContainerFormat_Proxy)
IB_HIJACK_EXPORT(86, IWICMetadataQueryReader_GetEnumerator_Proxy)
IB_HIJACK_EXPORT(87, IWICMetadataQueryReader_GetLocation_Proxy)
IB_HIJACK_EXPORT(88, IWICMetadataQueryReader_GetMetadataByName_Proxy)
IB_HIJACK_EXPORT(89, IWICMetadataQueryWriter_RemoveMetadataByName_Proxy)
IB_HIJACK_EXPORT(90, IWICMetadataQueryWriter_SetMetadataByName_Proxy)
IB_HIJACK_EXPORT(91, IWICPalette_GetColorCount_Proxy)
IB_HIJACK_EXPORT(92, IWICPalette_GetColors_Proxy)
IB_HIJACK_EXPORT(93, IWICPalette_GetType_Proxy)
IB_HIJACK_EXPORT(94, IWICPalette_HasAlpha_Proxy)
IB_HIJACK_EXPORT(95, IWICPalette_InitializeCustom_Proxy)
IB_HIJACK_EXPORT(96, IWICPalette_InitializeFromBitmap_Proxy)
IB_HIJACK_EXPORT(97, IWICPalette_InitializeFromPalette_Proxy)
IB_HIJACK_EXPORT(98, IWICPalette_InitializePredefined_Proxy)
IB_HIJACK_EXPORT(99, IWICPixelFormatInfo_GetBitsPerPixel_Proxy)
IB_HIJACK_EXPORT(100, IWICPixelFormatInfo_GetChannelCount_Proxy)
IB_HIJACK_EXPORT(101, IWICPixelFormatInfo_GetChannelMask_Proxy)
IB_HIJACK_EXPORT(102, IWICStream_InitializeFromIStream_Proxy)
IB_HIJACK_EXPORT(103, IWICStream_InitializeFromMemory_Proxy)
IB_HIJACK_EXPORT(104, WICConvertBitmapSource)
IB_HIJACK_EXPORT(105, WICCreateBitmapFromSection)
IB_HIJACK_EXPORT(106, WICCreateBitmapFromSectionEx)
IB_HIJACK_EXPORT(107, WICCreateColorContext_Proxy)
IB_HIJACK_EXPORT(108, WICCreateImagingFactory_Proxy)
IB_HIJACK_EXPORT(109, WICGetMetadataContentSize)
IB_HIJACK_EXPORT(110, WICMapGuidToShortName)
IB_HIJACK_EXPORT(111, WICMapSchemaToName)
IB_HIJACK_EXPORT(112, WICMapShortNameToGuid)
IB_HIJACK_EXPORT(113, WICMatchMetadataContent)
IB_HIJACK_EXPORT(114, WICSerializeMetadataContent)
IB_HIJACK_EXPORT(115, WICSetEncoderFormat_Proxy)