#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class HydraLibraryDrawableResource, HydraAddToCartButtonState, HydraBottomSectionBottomPriceUIModel, HydraBottomSectionUnitPriceUIModel, HydraCampaignCardBottomSectionTopPriceUIModel, HydraCampaignCardBottomSectionBottomPriceUIModel, HydraBottomSectionTopPriceUIModel, HydraBottomSectionDiscountPriceUIModel, HydraCampaignCardBottomSectionLabelUIModel, HydraCampaignCardBottomSectionPriceInfoUIModel, HydraCampaignCardBottomSectionAddToCartButtonUIModel, HydraCampaignCardState, HydraDataCampaignType, HydraCampaignCardUIData, HydraCampaignCardInfoSectionWinnerLabelUIModel, HydraCampaignCardInfoSectionProductNameUIModel, HydraCampaignCardInfoSectionRatingUIModel, HydraCampaignCardInfoSectionAffordabilityLabelUIModel, HydraCampaignCardInfoSectionCampaignLabelUIModel, HydraDataCampaignDetail, HydraDataBrand, HydraDataReviewsInfo, HydraDataStockInfo, HydraDataPriceInfo, HydraDataVariantProperties, HydraDataCampaignCardLabels, HydraDataPriceArea, HydraDataAffordabilityDetail, HydraKotlinEnumCompanion, HydraKotlinEnum<E>, HydraKotlinArray<T>, HydraCampaignCardStateCompanion, HydraListingCardInfoSectionButtonUIModel, HydraListingCardUISizeModel, HydraListingCardImageUIModel, HydraListingCardTitleUIModel, HydraListingCardDiscountUIModel, HydraListingCardAffordabilityUIModel, HydraListingCardInfoSectionBottomFieldUIModel, HydraListingCardState, HydraListingCardStateCompanion, HydraHydraClick, HydraHydraClickBack, HydraHydraState, HydraHydraStateCountDownRefresh, HydraHydraTheme, HydraDataHydraEvent, HydraHydraUIModel, HydraDataUIType, HydraDataBaseUIModel, HydraDataComponentUIModel, HydraDataComponentUIModelCompanion, HydraDataNoResultCustomUIDataModelCompanion, HydraDataNoResultCustomUIDataModel, HydraNoResultUIModel, HydraUi_textAnnotatedString, HydraUi_textSpanStyle, UIViewController, HydraLibraryResource, HydraLibraryResourceItem, HydraDataCampaignTypeCompanion, HydraDataCampaignDetailCompanion, HydraDataBrandCompanion, HydraDataReviewsInfoCompanion, HydraDataStockInfoCompanion, HydraDataPriceInfoCompanion, HydraDataVariantPropertiesCompanion, HydraDataCampaignBadge, HydraDataTagLabel, HydraDataProductLabel, HydraDataCampaignLabels, HydraDataWinnerLabels, HydraDataAffordabilityLabels, HydraDataCampaignCardLabelsCompanion, HydraDataPriceLabelInfo, HydraDataPriceInfoNew, HydraDataPrimaryActionInfo, HydraDataPriceAreaCompanion, HydraDataAffordabilityDetailCompanion, HydraDataHydraEventType, HydraDataHydraEventCompanion, HydraDataUITypeCompanion, HydraDataSizeUIModel, HydraDataMarginUIModel, HydraDataPaddingUIModel, HydraDataBorderUIModel, HydraDataShadowUIModel, HydraDataTapActionsUIModel, HydraDataHydraOptimizedEvent, HydraDataBaseUIModelCompanion, HydraUiHorizontalAlignmentLine, HydraUi_textAnnotatedStringRange<T>, HydraUi_textParagraphStyle, HydraUi_textAnnotatedStringCompanion, HydraUi_textLinkAnnotation, HydraUi_textTtsAnnotation, HydraUi_textUrlAnnotation, HydraUi_textFontWeight, HydraUi_textFontFamily, HydraUi_textTextGeometricTransform, HydraUi_textLocaleList, HydraUi_textTextDecoration, HydraUi_graphicsShadow, HydraUi_textPlatformSpanStyle, HydraUi_graphicsDrawStyle, HydraUi_graphicsBrush, HydraDataCampaignBadgeCompanion, HydraDataTagLabelCompanion, HydraDataProductLabelCompanion, HydraDataCampaignLabelsCompanion, HydraDataWinnerLabelsCompanion, HydraDataAffordabilityLabelsCompanion, HydraDataPriceLabelInfoTitle, HydraDataPriceLabelInfoCompanion, HydraDataPriceInfoNewTopPrice, HydraDataPriceInfoNewBottomPrice, HydraDataDiscount, HydraDataPriceInfoNewCompanion, HydraDataPrimaryActionInfoCompanion, HydraDataHydraEventTypeCompanion, HydraDataSizeUIModelCompanion, HydraDataMarginUIModelCompanion, HydraDataPaddingUIModelCompanion, HydraDataCornerRadiusUIModel, HydraDataBorderUIModelCompanion, HydraDataShadowUIModelCompanion, HydraDataActionType, HydraDataTapActionsUIModelCompanion, HydraDataHydraOptimizedEventCompanion, HydraUiAlignmentLineCompanion, HydraUiAlignmentLine, HydraUi_textTextIndent, HydraUi_textPlatformParagraphStyle, HydraUi_textLineHeightStyle, HydraUi_textTextMotion, HydraUi_textTextLinkStyles, HydraUi_textFontWeightCompanion, HydraUi_textFontFamilyCompanion, HydraUi_textTextGeometricTransformCompanion, HydraUi_textLocale, HydraUi_textLocaleListCompanion, HydraUi_textTextDecorationCompanion, HydraUi_graphicsShadowCompanion, HydraUi_textPlatformSpanStyleCompanion, HydraUi_graphicsBrushCompanion, HydraDataPriceLabelInfoTitleCompanion, HydraDataPriceInfoNewTopPriceTitle, HydraDataPriceInfoNewTopPriceCompanion, HydraDataPriceInfoNewBottomPriceTitle, HydraDataPriceInfoNewBottomPriceCompanion, HydraDataDiscountTitle, HydraDataDiscountCompanion, HydraDataCornerRadiusUIModelCompanion, HydraDataActionTypeCompanion, HydraKotlinx_serialization_coreSerializersModule, HydraKotlinx_serialization_coreSerialKind, HydraKotlinNothing, HydraUi_textTextIndentCompanion, HydraUi_textFontRasterizationSettings, HydraUi_textPlatformParagraphStyleCompanion, HydraUi_textLineHeightStyleCompanion, HydraUi_textTextMotionCompanion, HydraUi_textGenericFontFamily, HydraUi_textSystemFontFamily, HydraUi_textLocaleCompanion, NSLocale, HydraKotlinPair<__covariant A, __covariant B>, HydraSkikoPaint, HydraUi_graphicsColorFilter, HydraSkikoShader, HydraDataPriceInfoNewTopPriceTitleCompanion, HydraDataPriceInfoNewBottomPriceTitleCompanion, HydraDataDiscountTitleCompanion, HydraUi_textFontSmoothing, HydraUi_textFontHinting, HydraUi_textFontRasterizationSettingsCompanion, HydraSkikoNativeCompanion, HydraSkikoNative, HydraSkikoManaged, HydraSkikoPaintCompanion, HydraSkikoColor4f, HydraSkikoColorSpace, HydraSkikoBlendMode, HydraSkikoColorFilter, HydraSkikoImageFilter, HydraSkikoMaskFilter, HydraSkikoPaintMode, HydraSkikoPathEffect, HydraSkikoPaintStrokeCap, HydraSkikoPaintStrokeJoin, HydraUi_graphicsColorFilterCompanion, HydraSkikoRefCnt, HydraSkikoShaderCompanion, HydraKotlinFloatArray, HydraSkikoColor4fCompanion, HydraSkikoColorSpaceCompanion, HydraSkikoColorFilterCompanion, HydraSkikoImageFilterCompanion, HydraSkikoMaskFilterCompanion, HydraSkikoPathEffectCompanion, HydraSkikoISize, HydraSkikoPoint, HydraKotlinIntArray, HydraSkikoGradientStyle, HydraKotlinFloatIterator, HydraSkikoColorMatrix, HydraSkikoInversionMode, HydraKotlinByteArray, HydraSkikoIRect, HydraSkikoFilterTileMode, HydraSkikoColorChannel, HydraSkikoImage, HydraSkikoRect, HydraSkikoMatrix33, HydraSkikoRuntimeShaderBuilder, HydraSkikoFilterBlurMode, HydraSkikoPath, HydraSkikoPathEffectStyle, HydraSkikoISizeCompanion, HydraSkikoPointCompanion, HydraKotlinIntIterator, HydraSkikoGradientStyleCompanion, HydraKotlinByteIterator, HydraSkikoIRectCompanion, HydraSkikoIPoint, HydraSkikoColorAlphaType, HydraSkikoColorInfo, HydraSkikoColorType, HydraSkikoImageInfo, HydraSkikoImageCompanion, HydraSkikoData, HydraSkikoEncodedImageFormat, HydraSkikoPixmap, HydraSkikoBitmap, HydraSkikoDirectContext, HydraSkikoRectCompanion, HydraSkikoMatrix33Companion, HydraSkikoMatrix44, HydraSkikoRuntimeEffect, HydraSkikoRuntimeShaderBuilderCompanion, HydraSkikoMatrix22, HydraSkikoPathCompanion, HydraSkikoPathDirection, HydraSkikoRRect, HydraSkikoPathEllipseArc, HydraSkikoPathVerb, HydraSkikoPathSegmentIterator, HydraSkikoPathFillMode, HydraSkikoIPointCompanion, HydraSkikoColorInfoCompanion, HydraSkikoColorTypeCompanion, HydraSkikoImageInfoCompanion, HydraSkikoDataCompanion, HydraSkikoPixmapCompanion, HydraSkikoBitmapCompanion, HydraSkikoPixelRef, HydraSkikoDirectContextCompanion, HydraSkikoSurface, HydraSkikoGLBackendState, HydraSkikoMatrix44Companion, HydraSkikoRuntimeEffectCompanion, HydraSkikoMatrix22Companion, HydraSkikoPathOp, HydraSkikoRRectCompanion, HydraSkikoPathSegmentIteratorCompanion, HydraSkikoPathSegment, HydraSkikoPixelRefCompanion, HydraSkikoSurfaceCompanion, HydraSkikoCanvas, HydraSkikoContentChangeMode, HydraSkikoBackendRenderTarget, HydraSkikoSurfaceOrigin, HydraSkikoSurfaceColorFormat, HydraSkikoSurfaceProps, HydraSkikoCanvasCompanion, HydraSkikoClipMode, HydraSkikoRegion, HydraSkikoDrawable, HydraSkikoFilterMode, HydraSkikoPicture, HydraSkikoFont, HydraSkikoTextBlob, HydraSkikoTextLine, HydraKotlinShortArray, HydraSkikoVertexMode, HydraSkikoCanvasSaveLayerRec, HydraSkikoBackendRenderTargetCompanion, HydraSkikoPixelGeometry, HydraSkikoRegionCompanion, HydraSkikoRegionOp, HydraSkikoDrawableCompanion, HydraSkikoPictureCompanion, HydraSkikoTypeface, HydraSkikoFontCompanion, HydraSkikoFontEdging, HydraSkikoFontHinting, HydraSkikoFontMetrics, HydraSkikoTextBlobCompanion, HydraSkikoTextLineCompanion, HydraKotlinShortIterator, HydraSkikoCanvasSaveLayerFlags, HydraSkikoRegionOpCompanion, HydraSkikoTypefaceCompanion, HydraSkikoFontVariation, HydraSkikoFontFamilyName, HydraSkikoFontStyle, HydraSkikoFontVariationAxis, HydraSkikoFontMetricsCompanion, HydraSkikoRSXform, HydraSkikoShapingOptions, HydraSkikoCanvasSaveLayerFlagsSet, HydraSkikoFontVariationCompanion, HydraSkikoFontSlant, HydraSkikoFontStyleCompanion, HydraSkikoRSXformCompanion, HydraSkikoFontMgr, HydraSkikoFontFeature, HydraSkikoShapingOptionsCompanion, HydraSkikoFontMgrCompanion, HydraSkikoFontStyleSet, HydraSkikoFontFeatureCompanion, HydraSkikoFontStyleSetCompanion, HydraSkikoPattern, HydraSkikoMatcher, HydraKotlinRegex, HydraKotlinRegexOption, HydraKotlinRegexCompanion, HydraKotlinMatchResultDestructured, HydraKotlinIntRange, HydraKotlinMatchGroup, HydraKotlinIntProgressionCompanion, HydraKotlinIntProgression, HydraKotlinIntRangeCompanion;

@protocol HydraKotlinComparable, HydraComponentState, HydraUIModifier, HydraUiModifier, HydraRuntimeMutableState, HydraDataHydraData, HydraDataHydraCustom, HydraFoundation_layoutRowScope, HydraKotlinIterator, HydraUiModifierElement, HydraRuntimeState, HydraKotlinx_serialization_coreKSerializer, HydraUiAlignmentVertical, HydraUiMeasured, HydraKotlinCharSequence, HydraLibraryQualifier, HydraKotlinx_serialization_coreEncoder, HydraKotlinx_serialization_coreSerialDescriptor, HydraKotlinx_serialization_coreSerializationStrategy, HydraKotlinx_serialization_coreDecoder, HydraKotlinx_serialization_coreDeserializationStrategy, HydraRuntime_saveableSaver, HydraUi_textLinkInteractionListener, HydraKotlinIterable, HydraKotlinCollection, HydraUi_graphicsPaint, HydraKotlinx_serialization_coreCompositeEncoder, HydraKotlinAnnotation, HydraKotlinx_serialization_coreCompositeDecoder, HydraRuntime_saveableSaverScope, HydraUi_graphicsPathEffect, HydraKotlinx_serialization_coreSerializersModuleCollector, HydraKotlinKClass, HydraKotlinKDeclarationContainer, HydraKotlinKAnnotatedElement, HydraKotlinKClassifier, HydraSkikoSamplingMode, HydraSkikoIHasImageInfo, HydraKotlinMutableIterator, HydraKotlinMatchResult, HydraKotlinSequence, HydraKotlinMatchGroupCollection, HydraKotlinClosedRange, HydraKotlinOpenEndRange;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface HydraBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface HydraBase (HydraBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface HydraMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface HydraMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorHydraKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface HydraNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface HydraByte : HydraNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface HydraUByte : HydraNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface HydraShort : HydraNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface HydraUShort : HydraNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface HydraInt : HydraNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface HydraUInt : HydraNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface HydraLong : HydraNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface HydraULong : HydraNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface HydraFloat : HydraNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface HydraDouble : HydraNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface HydraBoolean : HydraNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BottomSectionBottomPriceUIModel")))
@interface HydraBottomSectionBottomPriceUIModel : HydraBase
- (instancetype)initWithBottomPriceText:(NSString *)bottomPriceText bottomPriceTextColor:(uint64_t)bottomPriceTextColor __attribute__((swift_name("init(bottomPriceText:bottomPriceTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bottomPriceText __attribute__((swift_name("bottomPriceText")));
@property (readonly) uint64_t bottomPriceTextColor __attribute__((swift_name("bottomPriceTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BottomSectionDiscountPriceUIModel")))
@interface HydraBottomSectionDiscountPriceUIModel : HydraBase
- (instancetype)initWithIsDiscountValueVisible:(BOOL)isDiscountValueVisible discountPriceText:(NSString *)discountPriceText discountPriceTextColor:(uint64_t)discountPriceTextColor __attribute__((swift_name("init(isDiscountValueVisible:discountPriceText:discountPriceTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *discountPriceText __attribute__((swift_name("discountPriceText")));
@property (readonly) uint64_t discountPriceTextColor __attribute__((swift_name("discountPriceTextColor")));
@property (readonly) BOOL isDiscountValueVisible __attribute__((swift_name("isDiscountValueVisible")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BottomSectionTopPriceUIModel")))
@interface HydraBottomSectionTopPriceUIModel : HydraBase
- (instancetype)initWithIsTopPriceValueVisible:(BOOL)isTopPriceValueVisible topPriceText:(NSString *)topPriceText topPriceTextColor:(uint64_t)topPriceTextColor __attribute__((swift_name("init(isTopPriceValueVisible:topPriceText:topPriceTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isTopPriceValueVisible __attribute__((swift_name("isTopPriceValueVisible")));
@property (readonly) NSString *topPriceText __attribute__((swift_name("topPriceText")));
@property (readonly) uint64_t topPriceTextColor __attribute__((swift_name("topPriceTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BottomSectionUnitPriceUIModel")))
@interface HydraBottomSectionUnitPriceUIModel : HydraBase
- (instancetype)initWithUnitPriceText:(NSString *)unitPriceText unitPriceTextColor:(uint64_t)unitPriceTextColor __attribute__((swift_name("init(unitPriceText:unitPriceTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *unitPriceText __attribute__((swift_name("unitPriceText")));
@property (readonly) uint64_t unitPriceTextColor __attribute__((swift_name("unitPriceTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionAddToCartAnimatedButtonUIModel")))
@interface HydraCampaignCardBottomSectionAddToCartAnimatedButtonUIModel : HydraBase
- (instancetype)initWithPrimaryIcon:(HydraLibraryDrawableResource * _Nullable)primaryIcon animationFiles:(NSString * _Nullable)animationFiles animationColorFilter:(NSString * _Nullable)animationColorFilter backgroundColor:(id _Nullable)backgroundColor isIterateForever:(HydraBoolean * _Nullable)isIterateForever __attribute__((swift_name("init(primaryIcon:animationFiles:animationColorFilter:backgroundColor:isIterateForever:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable animationColorFilter __attribute__((swift_name("animationColorFilter")));
@property (readonly) NSString * _Nullable animationFiles __attribute__((swift_name("animationFiles")));
@property (readonly) id _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) HydraBoolean * _Nullable isIterateForever __attribute__((swift_name("isIterateForever")));
@property (readonly) HydraLibraryDrawableResource * _Nullable primaryIcon __attribute__((swift_name("primaryIcon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionAddToCartButtonUIModel")))
@interface HydraCampaignCardBottomSectionAddToCartButtonUIModel : HydraBase
- (instancetype)initWithAddToCartButtonState:(HydraAddToCartButtonState *)addToCartButtonState iconColor:(NSString *)iconColor clickAddToCart:(void (^)(void))clickAddToCart __attribute__((swift_name("init(addToCartButtonState:iconColor:clickAddToCart:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraAddToCartButtonState *addToCartButtonState __attribute__((swift_name("addToCartButtonState")));
@property (readonly) void (^clickAddToCart)(void) __attribute__((swift_name("clickAddToCart")));
@property (readonly) NSString *iconColor __attribute__((swift_name("iconColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionBottomPriceUIModel")))
@interface HydraCampaignCardBottomSectionBottomPriceUIModel : HydraBase
- (instancetype)initWithBottomSectionBottomPriceUIModel:(HydraBottomSectionBottomPriceUIModel *)bottomSectionBottomPriceUIModel bottomSectionUnitPriceUIModel:(HydraBottomSectionUnitPriceUIModel *)bottomSectionUnitPriceUIModel __attribute__((swift_name("init(bottomSectionBottomPriceUIModel:bottomSectionUnitPriceUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraBottomSectionBottomPriceUIModel *bottomSectionBottomPriceUIModel __attribute__((swift_name("bottomSectionBottomPriceUIModel")));
@property (readonly) HydraBottomSectionUnitPriceUIModel *bottomSectionUnitPriceUIModel __attribute__((swift_name("bottomSectionUnitPriceUIModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionLabelUIModel")))
@interface HydraCampaignCardBottomSectionLabelUIModel : HydraBase
- (instancetype)initWithBackgroundColor:(NSString *)backgroundColor text:(NSString *)text textColor:(NSString *)textColor __attribute__((swift_name("init(backgroundColor:text:textColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionPriceInfoUIModel")))
@interface HydraCampaignCardBottomSectionPriceInfoUIModel : HydraBase
- (instancetype)initWithCampaignCardBottomSectionTopPriceUIModel:(HydraCampaignCardBottomSectionTopPriceUIModel *)campaignCardBottomSectionTopPriceUIModel campaignCardBottomSectionBottomPriceUIModel:(HydraCampaignCardBottomSectionBottomPriceUIModel *)campaignCardBottomSectionBottomPriceUIModel __attribute__((swift_name("init(campaignCardBottomSectionTopPriceUIModel:campaignCardBottomSectionBottomPriceUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraCampaignCardBottomSectionBottomPriceUIModel *campaignCardBottomSectionBottomPriceUIModel __attribute__((swift_name("campaignCardBottomSectionBottomPriceUIModel")));
@property (readonly) HydraCampaignCardBottomSectionTopPriceUIModel *campaignCardBottomSectionTopPriceUIModel __attribute__((swift_name("campaignCardBottomSectionTopPriceUIModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionTopPriceUIModel")))
@interface HydraCampaignCardBottomSectionTopPriceUIModel : HydraBase
- (instancetype)initWithBottomSectionTopPriceUIModel:(HydraBottomSectionTopPriceUIModel *)bottomSectionTopPriceUIModel bottomSectionDiscountPriceUIModel:(HydraBottomSectionDiscountPriceUIModel *)bottomSectionDiscountPriceUIModel __attribute__((swift_name("init(bottomSectionTopPriceUIModel:bottomSectionDiscountPriceUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraBottomSectionDiscountPriceUIModel *bottomSectionDiscountPriceUIModel __attribute__((swift_name("bottomSectionDiscountPriceUIModel")));
@property (readonly) HydraBottomSectionTopPriceUIModel *bottomSectionTopPriceUIModel __attribute__((swift_name("bottomSectionTopPriceUIModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardBottomSectionUIModel")))
@interface HydraCampaignCardBottomSectionUIModel : HydraBase
- (instancetype)initWithIsAddToCartButtonVisible:(BOOL)isAddToCartButtonVisible isActiveAddToCart:(BOOL)isActiveAddToCart isLabelUIVisible:(BOOL)isLabelUIVisible isPriceLabelVisible:(BOOL)isPriceLabelVisible clickedAddToCart:(void (^)(void))clickedAddToCart campaignCardBottomSectionLabelUIModel:(HydraCampaignCardBottomSectionLabelUIModel *)campaignCardBottomSectionLabelUIModel addToCartButtonState:(HydraAddToCartButtonState *)addToCartButtonState priceInfoBackgroundColor:(uint64_t)priceInfoBackgroundColor campaignCardBottomSectionPriceInfoUIModel:(HydraCampaignCardBottomSectionPriceInfoUIModel *)campaignCardBottomSectionPriceInfoUIModel campaignCardBottomSectionAddToCartButtonUIModel:(HydraCampaignCardBottomSectionAddToCartButtonUIModel *)campaignCardBottomSectionAddToCartButtonUIModel __attribute__((swift_name("init(isAddToCartButtonVisible:isActiveAddToCart:isLabelUIVisible:isPriceLabelVisible:clickedAddToCart:campaignCardBottomSectionLabelUIModel:addToCartButtonState:priceInfoBackgroundColor:campaignCardBottomSectionPriceInfoUIModel:campaignCardBottomSectionAddToCartButtonUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraAddToCartButtonState *addToCartButtonState __attribute__((swift_name("addToCartButtonState")));
@property (readonly) HydraCampaignCardBottomSectionAddToCartButtonUIModel *campaignCardBottomSectionAddToCartButtonUIModel __attribute__((swift_name("campaignCardBottomSectionAddToCartButtonUIModel")));
@property (readonly) HydraCampaignCardBottomSectionLabelUIModel *campaignCardBottomSectionLabelUIModel __attribute__((swift_name("campaignCardBottomSectionLabelUIModel")));
@property (readonly) HydraCampaignCardBottomSectionPriceInfoUIModel *campaignCardBottomSectionPriceInfoUIModel __attribute__((swift_name("campaignCardBottomSectionPriceInfoUIModel")));
@property (readonly) void (^clickedAddToCart)(void) __attribute__((swift_name("clickedAddToCart")));
@property (readonly) BOOL isActiveAddToCart __attribute__((swift_name("isActiveAddToCart")));
@property (readonly) BOOL isAddToCartButtonVisible __attribute__((swift_name("isAddToCartButtonVisible")));
@property (readonly) BOOL isLabelUIVisible __attribute__((swift_name("isLabelUIVisible")));
@property (readonly) BOOL isPriceLabelVisible __attribute__((swift_name("isPriceLabelVisible")));
@property (readonly) uint64_t priceInfoBackgroundColor __attribute__((swift_name("priceInfoBackgroundColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardButtonData")))
@interface HydraCampaignCardButtonData : HydraBase
- (instancetype)initWithButtonText:(NSString *)buttonText state:(HydraCampaignCardState *)state addToCartButtonState:(HydraAddToCartButtonState *)addToCartButtonState campaignType:(HydraDataCampaignType * _Nullable)campaignType link:(NSString * _Nullable)link campaignCardUIData:(HydraCampaignCardUIData *)campaignCardUIData __attribute__((swift_name("init(buttonText:state:addToCartButtonState:campaignType:link:campaignCardUIData:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraAddToCartButtonState *addToCartButtonState __attribute__((swift_name("addToCartButtonState")));
@property (readonly) NSString *buttonText __attribute__((swift_name("buttonText")));
@property (readonly) HydraCampaignCardUIData *campaignCardUIData __attribute__((swift_name("campaignCardUIData")));
@property (readonly) HydraDataCampaignType * _Nullable campaignType __attribute__((swift_name("campaignType")));
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));
@property (readonly) HydraCampaignCardState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardImageSectionUIModel")))
@interface HydraCampaignCardImageSectionUIModel : HydraBase
- (instancetype)initWithProductImageUrl:(NSString *)productImageUrl badgeImageUrl:(NSString *)badgeImageUrl badgeSize:(int64_t)badgeSize stockCount:(NSString * _Nullable)stockCount __attribute__((swift_name("init(productImageUrl:badgeImageUrl:badgeSize:stockCount:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *badgeImageUrl __attribute__((swift_name("badgeImageUrl")));
@property (readonly) int64_t badgeSize __attribute__((swift_name("badgeSize")));
@property (readonly) NSString *productImageUrl __attribute__((swift_name("productImageUrl")));
@property (readonly) NSString * _Nullable stockCount __attribute__((swift_name("stockCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionAffordabilityLabelUIModel")))
@interface HydraCampaignCardInfoSectionAffordabilityLabelUIModel : HydraBase
- (instancetype)initWithText:(NSString *)text backgroundColor:(NSString *)backgroundColor textColor:(NSString *)textColor tagNameId:(NSString *)tagNameId isAffordabilityLabelUIVisible:(BOOL)isAffordabilityLabelUIVisible type:(NSString * _Nullable)type typeGroup:(NSString *)typeGroup __attribute__((swift_name("init(text:backgroundColor:textColor:tagNameId:isAffordabilityLabelUIVisible:type:typeGroup:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) BOOL isAffordabilityLabelUIVisible __attribute__((swift_name("isAffordabilityLabelUIVisible")));
@property (readonly) NSString *tagNameId __attribute__((swift_name("tagNameId")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString *typeGroup __attribute__((swift_name("typeGroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionCampaignLabelUIModel")))
@interface HydraCampaignCardInfoSectionCampaignLabelUIModel : HydraBase
- (instancetype)initWithText:(NSString *)text textColor:(NSString *)textColor isCampaignLabelUIVisible:(BOOL)isCampaignLabelUIVisible __attribute__((swift_name("init(text:textColor:isCampaignLabelUIVisible:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isCampaignLabelUIVisible __attribute__((swift_name("isCampaignLabelUIVisible")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionProductNameUIModel")))
@interface HydraCampaignCardInfoSectionProductNameUIModel : HydraBase
- (instancetype)initWithName:(NSString *)name brandName:(NSString *)brandName __attribute__((swift_name("init(name:brandName:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *brandName __attribute__((swift_name("brandName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionRatingUIModel")))
@interface HydraCampaignCardInfoSectionRatingUIModel : HydraBase
- (instancetype)initWithRating:(float)rating count:(NSString *)count __attribute__((swift_name("init(rating:count:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *count __attribute__((swift_name("count")));
@property (readonly) float rating __attribute__((swift_name("rating")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionUIModel")))
@interface HydraCampaignCardInfoSectionUIModel : HydraBase
- (instancetype)initWithCampaignCardInfoSectionWinnerLabelUIModel:(HydraCampaignCardInfoSectionWinnerLabelUIModel *)campaignCardInfoSectionWinnerLabelUIModel campaignCardInfoSectionProductNameUIModel:(HydraCampaignCardInfoSectionProductNameUIModel *)campaignCardInfoSectionProductNameUIModel campaignCardInfoSectionRatingUIModel:(HydraCampaignCardInfoSectionRatingUIModel *)campaignCardInfoSectionRatingUIModel campaignCardInfoSectionAffordabilityLabelUIModel:(HydraCampaignCardInfoSectionAffordabilityLabelUIModel *)campaignCardInfoSectionAffordabilityLabelUIModel campaignCardInfoSectionCampaignLabelUIModel:(HydraCampaignCardInfoSectionCampaignLabelUIModel *)campaignCardInfoSectionCampaignLabelUIModel __attribute__((swift_name("init(campaignCardInfoSectionWinnerLabelUIModel:campaignCardInfoSectionProductNameUIModel:campaignCardInfoSectionRatingUIModel:campaignCardInfoSectionAffordabilityLabelUIModel:campaignCardInfoSectionCampaignLabelUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraCampaignCardInfoSectionAffordabilityLabelUIModel *campaignCardInfoSectionAffordabilityLabelUIModel __attribute__((swift_name("campaignCardInfoSectionAffordabilityLabelUIModel")));
@property (readonly) HydraCampaignCardInfoSectionCampaignLabelUIModel *campaignCardInfoSectionCampaignLabelUIModel __attribute__((swift_name("campaignCardInfoSectionCampaignLabelUIModel")));
@property (readonly) HydraCampaignCardInfoSectionProductNameUIModel *campaignCardInfoSectionProductNameUIModel __attribute__((swift_name("campaignCardInfoSectionProductNameUIModel")));
@property (readonly) HydraCampaignCardInfoSectionRatingUIModel *campaignCardInfoSectionRatingUIModel __attribute__((swift_name("campaignCardInfoSectionRatingUIModel")));
@property (readonly) HydraCampaignCardInfoSectionWinnerLabelUIModel *campaignCardInfoSectionWinnerLabelUIModel __attribute__((swift_name("campaignCardInfoSectionWinnerLabelUIModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardInfoSectionWinnerLabelUIModel")))
@interface HydraCampaignCardInfoSectionWinnerLabelUIModel : HydraBase
- (instancetype)initWithText:(NSString *)text backgroundColor:(NSString *)backgroundColor textColor:(NSString *)textColor tagNameId:(NSString *)tagNameId isWinnerLabelVisible:(BOOL)isWinnerLabelVisible type:(NSString * _Nullable)type typeGroup:(NSString *)typeGroup __attribute__((swift_name("init(text:backgroundColor:textColor:tagNameId:isWinnerLabelVisible:type:typeGroup:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) BOOL isWinnerLabelVisible __attribute__((swift_name("isWinnerLabelVisible")));
@property (readonly) NSString *tagNameId __attribute__((swift_name("tagNameId")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString *typeGroup __attribute__((swift_name("typeGroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardUIData")))
@interface HydraCampaignCardUIData : HydraBase
- (instancetype)initWithCampaignType:(HydraDataCampaignType * _Nullable)campaignType campaignDetail:(HydraDataCampaignDetail * _Nullable)campaignDetail campaignButtonText:(NSString * _Nullable)campaignButtonText productId:(NSString * _Nullable)productId name:(NSString * _Nullable)name sku:(NSString * _Nullable)sku link:(NSString * _Nullable)link listingId:(NSString * _Nullable)listingId brand:(HydraDataBrand * _Nullable)brand state:(HydraInt * _Nullable)state imageUrls:(NSArray<NSString *> * _Nullable)imageUrls reviewsInfo:(HydraDataReviewsInfo * _Nullable)reviewsInfo stockInfo:(HydraDataStockInfo * _Nullable)stockInfo priceInfo:(HydraDataPriceInfo * _Nullable)priceInfo variantProperties:(HydraDataVariantProperties * _Nullable)variantProperties labels:(HydraDataCampaignCardLabels * _Nullable)labels altText:(NSString * _Nullable)altText relatedPages:(NSArray<NSString *> * _Nullable)relatedPages priceArea:(HydraDataPriceArea * _Nullable)priceArea affordabilityDetail:(HydraDataAffordabilityDetail * _Nullable)affordabilityDetail campaignCardAddToCartState:(HydraAddToCartButtonState *)campaignCardAddToCartState __attribute__((swift_name("init(campaignType:campaignDetail:campaignButtonText:productId:name:sku:link:listingId:brand:state:imageUrls:reviewsInfo:stockInfo:priceInfo:variantProperties:labels:altText:relatedPages:priceArea:affordabilityDetail:campaignCardAddToCartState:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraDataAffordabilityDetail * _Nullable affordabilityDetail __attribute__((swift_name("affordabilityDetail")));
@property (readonly) NSString * _Nullable altText __attribute__((swift_name("altText")));
@property (readonly) HydraDataBrand * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable campaignButtonText __attribute__((swift_name("campaignButtonText")));
@property (readonly) HydraAddToCartButtonState *campaignCardAddToCartState __attribute__((swift_name("campaignCardAddToCartState")));
@property (readonly) HydraDataCampaignDetail * _Nullable campaignDetail __attribute__((swift_name("campaignDetail")));
@property (readonly) HydraDataCampaignType * _Nullable campaignType __attribute__((swift_name("campaignType")));
@property (readonly) NSArray<NSString *> * _Nullable imageUrls __attribute__((swift_name("imageUrls")));
@property (readonly) HydraDataCampaignCardLabels * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSString * _Nullable listingId __attribute__((swift_name("listingId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) HydraDataPriceArea * _Nullable priceArea __attribute__((swift_name("priceArea")));
@property (readonly) HydraDataPriceInfo * _Nullable priceInfo __attribute__((swift_name("priceInfo")));
@property (readonly) NSString * _Nullable productId __attribute__((swift_name("productId")));
@property (readonly) NSArray<NSString *> * _Nullable relatedPages __attribute__((swift_name("relatedPages")));
@property (readonly) HydraDataReviewsInfo * _Nullable reviewsInfo __attribute__((swift_name("reviewsInfo")));
@property (readonly) NSString * _Nullable sku __attribute__((swift_name("sku")));
@property (readonly) HydraInt * _Nullable state __attribute__((swift_name("state")));
@property (readonly) HydraDataStockInfo * _Nullable stockInfo __attribute__((swift_name("stockInfo")));
@property (readonly) HydraDataVariantProperties * _Nullable variantProperties __attribute__((swift_name("variantProperties")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol HydraKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface HydraKotlinEnum<E> : HydraBase <HydraKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((swift_name("ComponentState")))
@protocol HydraComponentState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddToCartButtonState")))
@interface HydraAddToCartButtonState : HydraKotlinEnum<HydraAddToCartButtonState *> <HydraComponentState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraAddToCartButtonState *idle __attribute__((swift_name("idle")));
@property (class, readonly) HydraAddToCartButtonState *idleWithDelay __attribute__((swift_name("idleWithDelay")));
@property (class, readonly) HydraAddToCartButtonState *loading __attribute__((swift_name("loading")));
@property (class, readonly) HydraAddToCartButtonState *error __attribute__((swift_name("error")));
@property (class, readonly) HydraAddToCartButtonState *success __attribute__((swift_name("success")));
+ (HydraKotlinArray<HydraAddToCartButtonState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraAddToCartButtonState *> *entries __attribute__((swift_name("entries")));
- (BOOL)isIdleOrLoading __attribute__((swift_name("isIdleOrLoading()")));
- (BOOL)isSuccessOrError __attribute__((swift_name("isSuccessOrError()")));
@property NSString *sku __attribute__((swift_name("sku")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardState")))
@interface HydraCampaignCardState : HydraKotlinEnum<HydraCampaignCardState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraCampaignCardStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraCampaignCardState *active __attribute__((swift_name("active")));
@property (class, readonly) HydraCampaignCardState *coming __attribute__((swift_name("coming")));
@property (class, readonly) HydraCampaignCardState *expired __attribute__((swift_name("expired")));
@property (class, readonly) HydraCampaignCardState *outOfStock __attribute__((swift_name("outOfStock")));
+ (HydraKotlinArray<HydraCampaignCardState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraCampaignCardState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CampaignCardState.Companion")))
@interface HydraCampaignCardStateCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraCampaignCardStateCompanion *shared __attribute__((swift_name("shared")));
- (HydraCampaignCardState *)fromValue:(int32_t)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardAffordabilityUIModel")))
@interface HydraListingCardAffordabilityUIModel : HydraBase
- (instancetype)initWithListingCardAffordabilityText:(NSString * _Nullable)listingCardAffordabilityText listingCardAffordabilityTextColor:(NSString * _Nullable)listingCardAffordabilityTextColor __attribute__((swift_name("init(listingCardAffordabilityText:listingCardAffordabilityTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable listingCardAffordabilityText __attribute__((swift_name("listingCardAffordabilityText")));
@property (readonly) NSString * _Nullable listingCardAffordabilityTextColor __attribute__((swift_name("listingCardAffordabilityTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardDiscountUIModel")))
@interface HydraListingCardDiscountUIModel : HydraBase
- (instancetype)initWithListingCardDiscountText:(NSString * _Nullable)listingCardDiscountText listingCardDiscountTextColor:(NSString * _Nullable)listingCardDiscountTextColor __attribute__((swift_name("init(listingCardDiscountText:listingCardDiscountTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable listingCardDiscountText __attribute__((swift_name("listingCardDiscountText")));
@property (readonly) NSString * _Nullable listingCardDiscountTextColor __attribute__((swift_name("listingCardDiscountTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardImageUIModel")))
@interface HydraListingCardImageUIModel : HydraBase
- (instancetype)initWithListingCardImageList:(NSArray<NSString *> *)listingCardImageList __attribute__((swift_name("init(listingCardImageList:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *listingCardImageList __attribute__((swift_name("listingCardImageList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardInfoSectionBottomFieldUIModel")))
@interface HydraListingCardInfoSectionBottomFieldUIModel : HydraBase
- (instancetype)initWithListingCardInfoSectionBottomText:(NSString * _Nullable)listingCardInfoSectionBottomText listingCardInfoSectionButtonUIModel:(HydraListingCardInfoSectionButtonUIModel * _Nullable)listingCardInfoSectionButtonUIModel __attribute__((swift_name("init(listingCardInfoSectionBottomText:listingCardInfoSectionButtonUIModel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable listingCardInfoSectionBottomText __attribute__((swift_name("listingCardInfoSectionBottomText")));
@property (readonly) HydraListingCardInfoSectionButtonUIModel * _Nullable listingCardInfoSectionButtonUIModel __attribute__((swift_name("listingCardInfoSectionButtonUIModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardInfoSectionButtonUIModel")))
@interface HydraListingCardInfoSectionButtonUIModel : HydraBase
- (instancetype)initWithListingCardButtonText:(NSString * _Nullable)listingCardButtonText listingCardButtonTextColor:(NSString * _Nullable)listingCardButtonTextColor listingCardButtonBackgroundColor:(NSString * _Nullable)listingCardButtonBackgroundColor __attribute__((swift_name("init(listingCardButtonText:listingCardButtonTextColor:listingCardButtonBackgroundColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable listingCardButtonBackgroundColor __attribute__((swift_name("listingCardButtonBackgroundColor")));
@property (readonly) NSString * _Nullable listingCardButtonText __attribute__((swift_name("listingCardButtonText")));
@property (readonly) NSString * _Nullable listingCardButtonTextColor __attribute__((swift_name("listingCardButtonTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardTitleUIModel")))
@interface HydraListingCardTitleUIModel : HydraBase
- (instancetype)initWithListingCardTitleText:(NSString * _Nullable)listingCardTitleText listingCardTitleTextColor:(NSString * _Nullable)listingCardTitleTextColor __attribute__((swift_name("init(listingCardTitleText:listingCardTitleTextColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable listingCardTitleText __attribute__((swift_name("listingCardTitleText")));
@property (readonly) NSString * _Nullable listingCardTitleTextColor __attribute__((swift_name("listingCardTitleTextColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardUIModel")))
@interface HydraListingCardUIModel : HydraBase
- (instancetype)initWithListingCardUISizeModel:(HydraListingCardUISizeModel *)listingCardUISizeModel listingCardImageUIModel:(HydraListingCardImageUIModel * _Nullable)listingCardImageUIModel listingCardTitleUIModel:(HydraListingCardTitleUIModel * _Nullable)listingCardTitleUIModel listingCardDiscountUIModel:(HydraListingCardDiscountUIModel * _Nullable)listingCardDiscountUIModel listingCardAffordabilityUIModel:(HydraListingCardAffordabilityUIModel * _Nullable)listingCardAffordabilityUIModel listingCardInfoSectionBottomFieldUIModel:(HydraListingCardInfoSectionBottomFieldUIModel * _Nullable)listingCardInfoSectionBottomFieldUIModel listingCardState:(HydraListingCardState *)listingCardState __attribute__((swift_name("init(listingCardUISizeModel:listingCardImageUIModel:listingCardTitleUIModel:listingCardDiscountUIModel:listingCardAffordabilityUIModel:listingCardInfoSectionBottomFieldUIModel:listingCardState:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraListingCardAffordabilityUIModel * _Nullable listingCardAffordabilityUIModel __attribute__((swift_name("listingCardAffordabilityUIModel")));
@property (readonly) HydraListingCardDiscountUIModel * _Nullable listingCardDiscountUIModel __attribute__((swift_name("listingCardDiscountUIModel")));
@property (readonly) HydraListingCardImageUIModel * _Nullable listingCardImageUIModel __attribute__((swift_name("listingCardImageUIModel")));
@property (readonly) HydraListingCardInfoSectionBottomFieldUIModel * _Nullable listingCardInfoSectionBottomFieldUIModel __attribute__((swift_name("listingCardInfoSectionBottomFieldUIModel")));
@property (readonly) HydraListingCardState *listingCardState __attribute__((swift_name("listingCardState")));
@property (readonly) HydraListingCardTitleUIModel * _Nullable listingCardTitleUIModel __attribute__((swift_name("listingCardTitleUIModel")));
@property (readonly) HydraListingCardUISizeModel *listingCardUISizeModel __attribute__((swift_name("listingCardUISizeModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardUISizeModel")))
@interface HydraListingCardUISizeModel : HydraBase
- (instancetype)initWithListingCardHeight:(int32_t)listingCardHeight __attribute__((swift_name("init(listingCardHeight:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t listingCardHeight __attribute__((swift_name("listingCardHeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardState")))
@interface HydraListingCardState : HydraKotlinEnum<HydraListingCardState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraListingCardStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraListingCardState *active __attribute__((swift_name("active")));
@property (class, readonly) HydraListingCardState *coming __attribute__((swift_name("coming")));
@property (class, readonly) HydraListingCardState *expired __attribute__((swift_name("expired")));
@property (class, readonly) HydraListingCardState *outOfStock __attribute__((swift_name("outOfStock")));
+ (HydraKotlinArray<HydraListingCardState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraListingCardState *> *entries __attribute__((swift_name("entries")));
- (BOOL)isActive __attribute__((swift_name("isActive()")));
- (BOOL)isExpired __attribute__((swift_name("isExpired()")));
- (BOOL)isExpiredOrOutOfStock __attribute__((swift_name("isExpiredOrOutOfStock()")));
- (BOOL)isOutOfStock __attribute__((swift_name("isOutOfStock()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListingCardState.Companion")))
@interface HydraListingCardStateCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraListingCardStateCompanion *shared __attribute__((swift_name("shared")));
- (HydraListingCardState *)fromValue:(HydraInt * _Nullable)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoResultUIModel")))
@interface HydraNoResultUIModel : HydraBase
- (instancetype)initWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message iconUrl:(NSString * _Nullable)iconUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(title:message:iconUrl:backgroundColor:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("UIModifier")))
@protocol HydraUIModifier
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIModifierAsync")))
@interface HydraUIModifierAsync : HydraBase <HydraUIModifier>
- (instancetype)initWithModifier:(id<HydraUiModifier>)modifier __attribute__((swift_name("init(modifier:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIModifierSync")))
@interface HydraUIModifierSync : HydraBase <HydraUIModifier>
@end

__attribute__((swift_name("HydraClick")))
@interface HydraHydraClick : HydraBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraClick.AddOrRemoveFavorites")))
@interface HydraHydraClickAddOrRemoveFavorites : HydraHydraClick
- (instancetype)initWithState:(id<HydraRuntimeMutableState>)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<HydraRuntimeMutableState> state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraClick.AddToCart")))
@interface HydraHydraClickAddToCart : HydraHydraClick
- (instancetype)initWithState:(HydraCampaignCardUIData *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraCampaignCardUIData *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraClick.Back")))
@interface HydraHydraClickBack : HydraHydraClick
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraHydraClickBack *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraClick.Deeplink")))
@interface HydraHydraClickDeeplink : HydraHydraClick
- (instancetype)initWithDeeplink:(NSString *)deeplink __attribute__((swift_name("init(deeplink:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deeplink __attribute__((swift_name("deeplink")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraClick.Share")))
@interface HydraHydraClickShare : HydraHydraClick
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("HydraState")))
@interface HydraHydraState : HydraBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraState.CountDownRefresh")))
@interface HydraHydraStateCountDownRefresh : HydraHydraState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)countDownRefresh __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraHydraStateCountDownRefresh *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraTheme")))
@interface HydraHydraTheme : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hydraTheme __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraHydraTheme *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("LocalActions")))
@protocol HydraLocalActions
@required
- (void)clickHydraClick:(HydraHydraClick *)hydraClick __attribute__((swift_name("click(hydraClick:)")));
- (void)eventHydraEvent:(HydraDataHydraEvent *)hydraEvent __attribute__((swift_name("event(hydraEvent:)")));
- (void)refreshHydraState:(HydraHydraState *)hydraState __attribute__((swift_name("refresh(hydraState:)")));
@end

__attribute__((swift_name("HydraUIModel")))
@interface HydraHydraUIModel : HydraBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<HydraHydraUIModel *> *children __attribute__((swift_name("children")));
@property (readonly) NSArray<id<HydraUIModifier>> *modifier __attribute__((swift_name("modifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WindowSize")))
@interface HydraWindowSize : HydraBase
- (instancetype)initWithWidth:(float)width height:(float)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/hepsiburada/data/hydra/serializer/ComponentUIModelSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataComponentUIModel")))
@interface HydraDataComponentUIModel : HydraBase
- (instancetype)initWithType:(HydraDataUIType * _Nullable)type base:(HydraDataBaseUIModel * _Nullable)base data:(id<HydraDataHydraData> _Nullable)data custom:(id<HydraDataHydraCustom> _Nullable)custom items:(NSArray<HydraDataComponentUIModel *> * _Nullable)items __attribute__((swift_name("init(type:base:data:custom:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataComponentUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataComponentUIModel *)doCopyType:(HydraDataUIType * _Nullable)type base:(HydraDataBaseUIModel * _Nullable)base data:(id<HydraDataHydraData> _Nullable)data custom:(id<HydraDataHydraCustom> _Nullable)custom items:(NSArray<HydraDataComponentUIModel *> * _Nullable)items __attribute__((swift_name("doCopy(type:base:data:custom:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="base")
*/
@property (readonly) HydraDataBaseUIModel * _Nullable base __attribute__((swift_name("base")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="custom")
*/
@property (readonly) id<HydraDataHydraCustom> _Nullable custom __attribute__((swift_name("custom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) id<HydraDataHydraData> _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="items")
*/
@property (readonly) NSArray<HydraDataComponentUIModel *> * _Nullable items __attribute__((swift_name("items")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) HydraDataUIType * _Nullable type __attribute__((swift_name("type")));
@end

@interface HydraDataComponentUIModel (Extensions)
- (HydraDataComponentUIModel * _Nullable)searchSearchKeyword:(NSString *)searchKeyword __attribute__((swift_name("search(searchKeyword:)")));
- (HydraHydraUIModel * _Nullable)toCampaignCardUIModel __attribute__((swift_name("toCampaignCardUIModel()")));
- (HydraHydraUIModel * _Nullable)toCountdownUIModel __attribute__((swift_name("toCountdownUIModel()")));
- (HydraHydraUIModel *)toHorizontalListUIModel __attribute__((swift_name("toHorizontalListUIModel()")));
- (HydraHydraUIModel * _Nullable)toImageUIModel __attribute__((swift_name("toImageUIModel()")));
- (HydraHydraUIModel *)toPageUIModel __attribute__((swift_name("toPageUIModel()")));
- (HydraHydraUIModel * _Nullable)toPagerUIModel __attribute__((swift_name("toPagerUIModel()")));
- (HydraHydraUIModel * _Nullable)toPosterBoxUIModel __attribute__((swift_name("toPosterBoxUIModel()")));
- (HydraHydraUIModel * _Nullable)toTextUIModel __attribute__((swift_name("toTextUIModel()")));
- (HydraHydraUIModel * _Nullable)toUIModel __attribute__((swift_name("toUIModel()")));
- (NSArray<id<HydraUIModifier>> *)toUIModifier __attribute__((swift_name("toUIModifier()")));
- (HydraHydraUIModel *)toVerticalGridListUIModel __attribute__((swift_name("toVerticalGridListUIModel()")));
- (HydraHydraUIModel *)toVerticalListUIModel __attribute__((swift_name("toVerticalListUIModel()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataNoResultCustomUIDataModel")))
@interface HydraDataNoResultCustomUIDataModel : HydraBase
- (instancetype)initWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message iconUrl:(NSString * _Nullable)iconUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(title:message:iconUrl:backgroundColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataNoResultCustomUIDataModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataNoResultCustomUIDataModel *)doCopyTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message iconUrl:(NSString * _Nullable)iconUrl backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(title:message:iconUrl:backgroundColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iconUrl")
*/
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

@interface HydraDataNoResultCustomUIDataModel (Extensions)
- (HydraNoResultUIModel *)toNoResultUIModel __attribute__((swift_name("toNoResultUIModel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonExtKt")))
@interface HydraCommonExtKt : HydraBase
+ (id<HydraUiModifier>)fillMaxWeight:(id<HydraFoundation_layoutRowScope>)receiver __attribute__((swift_name("fillMaxWeight(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HydraUIModelMapperKt")))
@interface HydraHydraUIModelMapperKt : HydraBase
@property (class, readonly) id<HydraRuntimeMutableState> searchState __attribute__((swift_name("searchState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExtensionKt")))
@interface HydraStringExtensionKt : HydraBase
+ (HydraUi_textAnnotatedString *)buildBoldAnnotatedText:(NSString *)receiver textSpanStyle:(HydraUi_textSpanStyle *)textSpanStyle boldTextSpanStyle:(HydraUi_textSpanStyle *)boldTextSpanStyle __attribute__((swift_name("buildBoldAnnotatedText(_:textSpanStyle:boldTextSpanStyle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface HydraUtilsKt : HydraBase
+ (NSString *)padZeroValue:(int64_t)value __attribute__((swift_name("padZero(value:)")));
@property (class, readonly) NSString *DEFAULT_SPACER_TEXT __attribute__((swift_name("DEFAULT_SPACER_TEXT")));
@property (class, readonly) NSString *FINISH_COUNTER_NUMBER __attribute__((swift_name("FINISH_COUNTER_NUMBER")));
@property (class, readonly) int32_t MAX_HOUR __attribute__((swift_name("MAX_HOUR")));
@property (class, readonly) int32_t MAX_MINUTE __attribute__((swift_name("MAX_MINUTE")));
@property (class, readonly) int32_t MAX_SECOND __attribute__((swift_name("MAX_SECOND")));
@property (class, readonly) int64_t ONE_DAY_MILLISECOND __attribute__((swift_name("ONE_DAY_MILLISECOND")));
@property (class, readonly) int64_t ONE_HOUR_MILLISECOND __attribute__((swift_name("ONE_HOUR_MILLISECOND")));
@property (class, readonly) int64_t ONE_MINUTE_MILLISECOND __attribute__((swift_name("ONE_MINUTE_MILLISECOND")));
@property (class, readonly) int64_t ONE_SECOND_MILLISECOND __attribute__((swift_name("ONE_SECOND_MILLISECOND")));
@property (class, readonly) int64_t ZERO_TIME_DIFFERENCE __attribute__((swift_name("ZERO_TIME_DIFFERENCE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main_iosKt")))
@interface HydraMain_iosKt : HydraBase
+ (UIViewController *)HydraUIViewControllerJson:(NSString * _Nullable)json click:(void (^)(HydraHydraClick *))click event:(void (^)(HydraDataHydraEvent *))event state:(void (^)(HydraHydraState *))state __attribute__((swift_name("HydraUIViewController(json:click:event:state:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("LibraryResource")))
@interface HydraLibraryResource : HydraBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryDrawableResource")))
@interface HydraLibraryDrawableResource : HydraLibraryResource
- (instancetype)initWithId:(NSString *)id items:(NSSet<HydraLibraryResourceItem *> *)items __attribute__((swift_name("init(id:items:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignType")))
@interface HydraDataCampaignType : HydraKotlinEnum<HydraDataCampaignType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraDataCampaignTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraDataCampaignType *product __attribute__((swift_name("product")));
@property (class, readonly) HydraDataCampaignType *listing __attribute__((swift_name("listing")));
+ (HydraKotlinArray<HydraDataCampaignType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraDataCampaignType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignDetail")))
@interface HydraDataCampaignDetail : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("init(text:color:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataCampaignDetailCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataCampaignDetail *)doCopyText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(text:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBrand")))
@interface HydraDataBrand : HydraBase
- (instancetype)initWithName:(NSString * _Nullable)name link:(NSString * _Nullable)link __attribute__((swift_name("init(name:link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataBrandCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataBrand *)doCopyName:(NSString * _Nullable)name link:(NSString * _Nullable)link __attribute__((swift_name("doCopy(name:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="link")
*/
@property (readonly) NSString * _Nullable link __attribute__((swift_name("link")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataReviewsInfo")))
@interface HydraDataReviewsInfo : HydraBase
- (instancetype)initWithRating:(HydraFloat * _Nullable)rating count:(NSString * _Nullable)count __attribute__((swift_name("init(rating:count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataReviewsInfoCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataReviewsInfo *)doCopyRating:(HydraFloat * _Nullable)rating count:(NSString * _Nullable)count __attribute__((swift_name("doCopy(rating:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property (readonly) NSString * _Nullable count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rating")
*/
@property (readonly) HydraFloat * _Nullable rating __attribute__((swift_name("rating")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataStockInfo")))
@interface HydraDataStockInfo : HydraBase
- (instancetype)initWithCount:(NSString * _Nullable)count __attribute__((swift_name("init(count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataStockInfoCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataStockInfo *)doCopyCount:(NSString * _Nullable)count __attribute__((swift_name("doCopy(count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property (readonly) NSString * _Nullable count __attribute__((swift_name("count")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfo")))
@interface HydraDataPriceInfo : HydraBase
- (instancetype)initWithOriginalPrice:(HydraDouble * _Nullable)originalPrice onSalePrice:(HydraDouble * _Nullable)onSalePrice premiumPrice:(HydraDouble * _Nullable)premiumPrice __attribute__((swift_name("init(originalPrice:onSalePrice:premiumPrice:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfo *)doCopyOriginalPrice:(HydraDouble * _Nullable)originalPrice onSalePrice:(HydraDouble * _Nullable)onSalePrice premiumPrice:(HydraDouble * _Nullable)premiumPrice __attribute__((swift_name("doCopy(originalPrice:onSalePrice:premiumPrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="onSalePrice")
*/
@property (readonly) HydraDouble * _Nullable onSalePrice __attribute__((swift_name("onSalePrice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="originalPrice")
*/
@property (readonly) HydraDouble * _Nullable originalPrice __attribute__((swift_name("originalPrice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="premiumPrice")
*/
@property (readonly) HydraDouble * _Nullable premiumPrice __attribute__((swift_name("premiumPrice")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataVariantProperties")))
@interface HydraDataVariantProperties : HydraBase
- (instancetype)initWithHasVariant:(HydraBoolean * _Nullable)hasVariant __attribute__((swift_name("init(hasVariant:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataVariantPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataVariantProperties *)doCopyHasVariant:(HydraBoolean * _Nullable)hasVariant __attribute__((swift_name("doCopy(hasVariant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hasVariant")
*/
@property (readonly) HydraBoolean * _Nullable hasVariant __attribute__((swift_name("hasVariant")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignCardLabels")))
@interface HydraDataCampaignCardLabels : HydraBase
- (instancetype)initWithBadges:(NSArray<HydraDataCampaignBadge *> * _Nullable)badges tagLabels:(NSArray<HydraDataTagLabel *> * _Nullable)tagLabels productLabels:(NSArray<HydraDataProductLabel *> * _Nullable)productLabels campaignLabels:(NSArray<HydraDataCampaignLabels *> * _Nullable)campaignLabels winnerLabels:(NSArray<HydraDataWinnerLabels *> * _Nullable)winnerLabels affordabilityLabels:(NSArray<HydraDataAffordabilityLabels *> * _Nullable)affordabilityLabels __attribute__((swift_name("init(badges:tagLabels:productLabels:campaignLabels:winnerLabels:affordabilityLabels:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataCampaignCardLabelsCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataCampaignCardLabels *)doCopyBadges:(NSArray<HydraDataCampaignBadge *> * _Nullable)badges tagLabels:(NSArray<HydraDataTagLabel *> * _Nullable)tagLabels productLabels:(NSArray<HydraDataProductLabel *> * _Nullable)productLabels campaignLabels:(NSArray<HydraDataCampaignLabels *> * _Nullable)campaignLabels winnerLabels:(NSArray<HydraDataWinnerLabels *> * _Nullable)winnerLabels affordabilityLabels:(NSArray<HydraDataAffordabilityLabels *> * _Nullable)affordabilityLabels __attribute__((swift_name("doCopy(badges:tagLabels:productLabels:campaignLabels:winnerLabels:affordabilityLabels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="affordabilityLabels")
*/
@property (readonly) NSArray<HydraDataAffordabilityLabels *> * _Nullable affordabilityLabels __attribute__((swift_name("affordabilityLabels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="badges")
*/
@property (readonly) NSArray<HydraDataCampaignBadge *> * _Nullable badges __attribute__((swift_name("badges")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="campaignLabels")
*/
@property (readonly) NSArray<HydraDataCampaignLabels *> * _Nullable campaignLabels __attribute__((swift_name("campaignLabels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="productLabels")
*/
@property (readonly) NSArray<HydraDataProductLabel *> * _Nullable productLabels __attribute__((swift_name("productLabels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagLabels")
*/
@property (readonly) NSArray<HydraDataTagLabel *> * _Nullable tagLabels __attribute__((swift_name("tagLabels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="winnerLabels")
*/
@property (readonly) NSArray<HydraDataWinnerLabels *> * _Nullable winnerLabels __attribute__((swift_name("winnerLabels")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceArea")))
@interface HydraDataPriceArea : HydraBase
- (instancetype)initWithPriceLabelInfo:(HydraDataPriceLabelInfo * _Nullable)priceLabelInfo priceInfo:(HydraDataPriceInfoNew * _Nullable)priceInfo primaryActionInfo:(HydraDataPrimaryActionInfo * _Nullable)primaryActionInfo __attribute__((swift_name("init(priceLabelInfo:priceInfo:primaryActionInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceAreaCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceArea *)doCopyPriceLabelInfo:(HydraDataPriceLabelInfo * _Nullable)priceLabelInfo priceInfo:(HydraDataPriceInfoNew * _Nullable)priceInfo primaryActionInfo:(HydraDataPrimaryActionInfo * _Nullable)primaryActionInfo __attribute__((swift_name("doCopy(priceLabelInfo:priceInfo:primaryActionInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="priceInfo")
*/
@property (readonly) HydraDataPriceInfoNew * _Nullable priceInfo __attribute__((swift_name("priceInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="priceLabelInfo")
*/
@property (readonly) HydraDataPriceLabelInfo * _Nullable priceLabelInfo __attribute__((swift_name("priceLabelInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primaryActionInfo")
*/
@property (readonly) HydraDataPrimaryActionInfo * _Nullable primaryActionInfo __attribute__((swift_name("primaryActionInfo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataAffordabilityDetail")))
@interface HydraDataAffordabilityDetail : HydraBase
- (instancetype)initWithColor:(NSString * _Nullable)color text:(NSString * _Nullable)text __attribute__((swift_name("init(color:text:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataAffordabilityDetailCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataAffordabilityDetail *)doCopyColor:(NSString * _Nullable)color text:(NSString * _Nullable)text __attribute__((swift_name("doCopy(color:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface HydraKotlinEnumCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface HydraKotlinArray<T> : HydraBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(HydraInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<HydraKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((swift_name("UiModifier")))
@protocol HydraUiModifier
@required
- (BOOL)allPredicate:(HydraBoolean *(^)(id<HydraUiModifierElement>))predicate __attribute__((swift_name("all(predicate:)")));
- (BOOL)anyPredicate:(HydraBoolean *(^)(id<HydraUiModifierElement>))predicate __attribute__((swift_name("any(predicate:)")));
- (id _Nullable)foldInInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<HydraUiModifierElement>))operation __attribute__((swift_name("foldIn(initial:operation:)")));
- (id _Nullable)foldOutInitial:(id _Nullable)initial operation:(id _Nullable (^)(id<HydraUiModifierElement>, id _Nullable))operation __attribute__((swift_name("foldOut(initial:operation:)")));
- (id<HydraUiModifier>)thenOther:(id<HydraUiModifier>)other __attribute__((swift_name("then(other:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((swift_name("RuntimeState")))
@protocol HydraRuntimeState
@required
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((swift_name("RuntimeMutableState")))
@protocol HydraRuntimeMutableState <HydraRuntimeState>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (void (^)(id _Nullable))component2 __attribute__((swift_name("component2()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraEvent")))
@interface HydraDataHydraEvent : HydraBase
- (instancetype)initWithType:(HydraDataHydraEventType * _Nullable)type name:(NSString * _Nullable)name data:(NSString * _Nullable)data __attribute__((swift_name("init(type:name:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataHydraEventCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataHydraEvent *)doCopyType:(HydraDataHydraEventType * _Nullable)type name:(NSString * _Nullable)name data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(type:name:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) HydraDataHydraEventType * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataUIType")))
@interface HydraDataUIType : HydraKotlinEnum<HydraDataUIType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraDataUITypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraDataUIType *verticallist __attribute__((swift_name("verticallist")));
@property (class, readonly) HydraDataUIType *horizontallist __attribute__((swift_name("horizontallist")));
@property (class, readonly) HydraDataUIType *gridlist __attribute__((swift_name("gridlist")));
@property (class, readonly) HydraDataUIType *label __attribute__((swift_name("label")));
@property (class, readonly) HydraDataUIType *image __attribute__((swift_name("image")));
@property (class, readonly) HydraDataUIType *posterbox __attribute__((swift_name("posterbox")));
@property (class, readonly) HydraDataUIType *countdown __attribute__((swift_name("countdown")));
@property (class, readonly) HydraDataUIType *campaigncard __attribute__((swift_name("campaigncard")));
@property (class, readonly) HydraDataUIType *page __attribute__((swift_name("page")));
@property (class, readonly) HydraDataUIType *pager __attribute__((swift_name("pager")));
+ (HydraKotlinArray<HydraDataUIType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraDataUIType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBaseUIModel")))
@interface HydraDataBaseUIModel : HydraBase
- (instancetype)initWithSize:(HydraDataSizeUIModel * _Nullable)size margin:(HydraDataMarginUIModel * _Nullable)margin padding:(HydraDataPaddingUIModel * _Nullable)padding border:(HydraDataBorderUIModel * _Nullable)border shadow:(HydraDataShadowUIModel * _Nullable)shadow tapActions:(HydraDataTapActionsUIModel * _Nullable)tapActions backgroundColor:(NSString * _Nullable)backgroundColor events:(NSArray<HydraDataHydraEvent *> * _Nullable)events optimizedEvents:(NSArray<HydraDataHydraOptimizedEvent *> * _Nullable)optimizedEvents __attribute__((swift_name("init(size:margin:padding:border:shadow:tapActions:backgroundColor:events:optimizedEvents:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataBaseUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataBaseUIModel *)doCopySize:(HydraDataSizeUIModel * _Nullable)size margin:(HydraDataMarginUIModel * _Nullable)margin padding:(HydraDataPaddingUIModel * _Nullable)padding border:(HydraDataBorderUIModel * _Nullable)border shadow:(HydraDataShadowUIModel * _Nullable)shadow tapActions:(HydraDataTapActionsUIModel * _Nullable)tapActions backgroundColor:(NSString * _Nullable)backgroundColor events:(NSArray<HydraDataHydraEvent *> * _Nullable)events optimizedEvents:(NSArray<HydraDataHydraOptimizedEvent *> * _Nullable)optimizedEvents __attribute__((swift_name("doCopy(size:margin:padding:border:shadow:tapActions:backgroundColor:events:optimizedEvents:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="border")
*/
@property (readonly) HydraDataBorderUIModel * _Nullable border __attribute__((swift_name("border")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property (readonly) NSArray<HydraDataHydraEvent *> * _Nullable events __attribute__((swift_name("events")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="margin")
*/
@property (readonly) HydraDataMarginUIModel * _Nullable margin __attribute__((swift_name("margin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="optimizedEvents")
*/
@property (readonly) NSArray<HydraDataHydraOptimizedEvent *> * _Nullable optimizedEvents __attribute__((swift_name("optimizedEvents")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="padding")
*/
@property (readonly) HydraDataPaddingUIModel * _Nullable padding __attribute__((swift_name("padding")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="shadow")
*/
@property (readonly) HydraDataShadowUIModel * _Nullable shadow __attribute__((swift_name("shadow")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="size")
*/
@property (readonly) HydraDataSizeUIModel * _Nullable size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tapAction")
*/
@property (readonly) HydraDataTapActionsUIModel * _Nullable tapActions __attribute__((swift_name("tapActions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("DataHydraData")))
@protocol HydraDataHydraData
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("DataHydraCustom")))
@protocol HydraDataHydraCustom
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataComponentUIModel.Companion")))
@interface HydraDataComponentUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataComponentUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataNoResultCustomUIDataModel.Companion")))
@interface HydraDataNoResultCustomUIDataModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataNoResultCustomUIDataModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Foundation_layoutRowScope")))
@protocol HydraFoundation_layoutRowScope
@required

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (id<HydraUiModifier>)align:(id<HydraUiModifier>)receiver alignment:(id<HydraUiAlignmentVertical>)alignment __attribute__((swift_name("align(_:alignment:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (id<HydraUiModifier>)alignBy:(id<HydraUiModifier>)receiver alignmentLine:(HydraUiHorizontalAlignmentLine *)alignmentLine __attribute__((swift_name("alignBy(_:alignmentLine:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (id<HydraUiModifier>)alignBy:(id<HydraUiModifier>)receiver alignmentLineBlock:(HydraInt *(^)(id<HydraUiMeasured>))alignmentLineBlock __attribute__((swift_name("alignBy(_:alignmentLineBlock:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (id<HydraUiModifier>)alignByBaseline:(id<HydraUiModifier>)receiver __attribute__((swift_name("alignByBaseline(_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
 * @param weight annotations androidx.annotation.FloatRange(from=0.0.toDouble(), fromInclusive=false)
*/
- (id<HydraUiModifier>)weight:(id<HydraUiModifier>)receiver weight:(float)weight fill:(BOOL)fill __attribute__((swift_name("weight(_:weight:fill:)")));
@end

__attribute__((swift_name("KotlinCharSequence")))
@protocol HydraKotlinCharSequence
@required
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textAnnotatedString")))
@interface HydraUi_textAnnotatedString : HydraBase <HydraKotlinCharSequence>
- (instancetype)initWithText:(NSString *)text spanStyles:(NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textSpanStyle *> *> *)spanStyles paragraphStyles:(NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textParagraphStyle *> *> *)paragraphStyles __attribute__((swift_name("init(text:spanStyles:paragraphStyles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textAnnotatedStringCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textLinkAnnotation *> *> *)getLinkAnnotationsStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("getLinkAnnotations(start:end:)")));
- (NSArray<HydraUi_textAnnotatedStringRange<NSString *> *> *)getStringAnnotationsStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("getStringAnnotations(start:end:)")));
- (NSArray<HydraUi_textAnnotatedStringRange<NSString *> *> *)getStringAnnotationsTag:(NSString *)tag start:(int32_t)start end:(int32_t)end __attribute__((swift_name("getStringAnnotations(tag:start:end:)")));
- (NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textTtsAnnotation *> *> *)getTtsAnnotationsStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("getTtsAnnotations(start:end:)")));
- (NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textUrlAnnotation *> *> *)getUrlAnnotationsStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("getUrlAnnotations(start:end:)"))) __attribute__((deprecated("Use LinkAnnotation API instead")));
- (BOOL)hasEqualAnnotationsOther:(HydraUi_textAnnotatedString *)other __attribute__((swift_name("hasEqualAnnotations(other:)")));
- (BOOL)hasLinkAnnotationsStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("hasLinkAnnotations(start:end:)")));
- (BOOL)hasStringAnnotationsTag:(NSString *)tag start:(int32_t)start end:(int32_t)end __attribute__((swift_name("hasStringAnnotations(tag:start:end:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_textAnnotatedString *)plusOther:(HydraUi_textAnnotatedString *)other __attribute__((swift_name("plus(other:)")));
- (HydraUi_textAnnotatedString *)subSequenceRange:(int64_t)range __attribute__((swift_name("subSequence(range:)")));
- (HydraUi_textAnnotatedString *)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@property (readonly) NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textParagraphStyle *> *> *paragraphStyles __attribute__((swift_name("paragraphStyles")));
@property (readonly) NSArray<HydraUi_textAnnotatedStringRange<HydraUi_textSpanStyle *> *> *spanStyles __attribute__((swift_name("spanStyles")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textSpanStyle")))
@interface HydraUi_textSpanStyle : HydraBase
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(HydraUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(HydraUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(HydraUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(HydraUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(HydraUi_textTextDecoration * _Nullable)textDecoration shadow:(HydraUi_graphicsShadow * _Nullable)shadow platformStyle:(HydraUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(HydraUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBrush:(HydraUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(HydraUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(HydraUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(HydraUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(HydraUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(HydraUi_textTextDecoration * _Nullable)textDecoration shadow:(HydraUi_graphicsShadow * _Nullable)shadow platformStyle:(HydraUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(HydraUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));
- (HydraUi_textSpanStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(HydraUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(HydraUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(HydraUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(HydraUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(HydraUi_textTextDecoration * _Nullable)textDecoration shadow:(HydraUi_graphicsShadow * _Nullable)shadow platformStyle:(HydraUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(HydraUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (HydraUi_textSpanStyle *)doCopyBrush:(HydraUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(HydraUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(HydraUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(HydraUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(HydraUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(HydraUi_textTextDecoration * _Nullable)textDecoration shadow:(HydraUi_graphicsShadow * _Nullable)shadow platformStyle:(HydraUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(HydraUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_textSpanStyle *)mergeOther:(HydraUi_textSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_textSpanStyle *)plusOther:(HydraUi_textSpanStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) uint64_t background __attribute__((swift_name("background")));
@property (readonly) id _Nullable baselineShift __attribute__((swift_name("baselineShift")));
@property (readonly) HydraUi_graphicsBrush * _Nullable brush __attribute__((swift_name("brush")));
@property (readonly) uint64_t color __attribute__((swift_name("color")));
@property (readonly) HydraUi_graphicsDrawStyle * _Nullable drawStyle __attribute__((swift_name("drawStyle")));
@property (readonly) HydraUi_textFontFamily * _Nullable fontFamily __attribute__((swift_name("fontFamily")));
@property (readonly) NSString * _Nullable fontFeatureSettings __attribute__((swift_name("fontFeatureSettings")));
@property (readonly) int64_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) id _Nullable fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) id _Nullable fontSynthesis __attribute__((swift_name("fontSynthesis")));
@property (readonly) HydraUi_textFontWeight * _Nullable fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) int64_t letterSpacing __attribute__((swift_name("letterSpacing")));
@property (readonly) HydraUi_textLocaleList * _Nullable localeList __attribute__((swift_name("localeList")));
@property (readonly) HydraUi_textPlatformSpanStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) HydraUi_graphicsShadow * _Nullable shadow __attribute__((swift_name("shadow")));
@property (readonly) HydraUi_textTextDecoration * _Nullable textDecoration __attribute__((swift_name("textDecoration")));
@property (readonly) HydraUi_textTextGeometricTransform * _Nullable textGeometricTransform __attribute__((swift_name("textGeometricTransform")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryResourceItem")))
@interface HydraLibraryResourceItem : HydraBase
- (instancetype)initWithQualifiers:(NSSet<id<HydraLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("init(qualifiers:path:offset:size:)"))) __attribute__((objc_designated_initializer));
- (HydraLibraryResourceItem *)doCopyQualifiers:(NSSet<id<HydraLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("doCopy(qualifiers:path:offset:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignType.Companion")))
@interface HydraDataCampaignTypeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCampaignTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(HydraKotlinArray<id<HydraKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignDetail.Companion")))
@interface HydraDataCampaignDetailCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCampaignDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBrand.Companion")))
@interface HydraDataBrandCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataBrandCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataReviewsInfo.Companion")))
@interface HydraDataReviewsInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataReviewsInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataStockInfo.Companion")))
@interface HydraDataStockInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataStockInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfo.Companion")))
@interface HydraDataPriceInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataVariantProperties.Companion")))
@interface HydraDataVariantPropertiesCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataVariantPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignBadge")))
@interface HydraDataCampaignBadge : HydraBase
- (instancetype)initWithUrl:(NSString * _Nullable)url tagName:(NSString * _Nullable)tagName __attribute__((swift_name("init(url:tagName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataCampaignBadgeCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataCampaignBadge *)doCopyUrl:(NSString * _Nullable)url tagName:(NSString * _Nullable)tagName __attribute__((swift_name("doCopy(url:tagName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTagLabel")))
@interface HydraDataTagLabel : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor __attribute__((swift_name("init(text:backgroundColor:tagName:textColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataTagLabelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataTagLabel *)doCopyText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor __attribute__((swift_name("doCopy(text:backgroundColor:tagName:textColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textColor")
*/
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataProductLabel")))
@interface HydraDataProductLabel : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text textColor:(NSString * _Nullable)textColor tagName:(NSString * _Nullable)tagName __attribute__((swift_name("init(text:textColor:tagName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataProductLabelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataProductLabel *)doCopyText:(NSString * _Nullable)text textColor:(NSString * _Nullable)textColor tagName:(NSString * _Nullable)tagName __attribute__((swift_name("doCopy(text:textColor:tagName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textColor")
*/
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignLabels")))
@interface HydraDataCampaignLabels : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("init(text:tagName:textColor:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataCampaignLabelsCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataCampaignLabels *)doCopyText:(NSString * _Nullable)text tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(text:tagName:textColor:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textColor")
*/
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataWinnerLabels")))
@interface HydraDataWinnerLabels : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor typeGroup:(NSString * _Nullable)typeGroup tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("init(text:backgroundColor:typeGroup:tagName:textColor:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataWinnerLabelsCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataWinnerLabels *)doCopyText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor typeGroup:(NSString * _Nullable)typeGroup tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(text:backgroundColor:typeGroup:tagName:textColor:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textColor")
*/
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="typeGroup")
*/
@property (readonly) NSString * _Nullable typeGroup __attribute__((swift_name("typeGroup")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataAffordabilityLabels")))
@interface HydraDataAffordabilityLabels : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor typeGroup:(NSString * _Nullable)typeGroup tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("init(text:backgroundColor:typeGroup:tagName:textColor:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataAffordabilityLabelsCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataAffordabilityLabels *)doCopyText:(NSString * _Nullable)text backgroundColor:(NSString * _Nullable)backgroundColor typeGroup:(NSString * _Nullable)typeGroup tagName:(NSString * _Nullable)tagName textColor:(NSString * _Nullable)textColor type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(text:backgroundColor:typeGroup:tagName:textColor:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tagName")
*/
@property (readonly) NSString * _Nullable tagName __attribute__((swift_name("tagName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="textColor")
*/
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="typeGroup")
*/
@property (readonly) NSString * _Nullable typeGroup __attribute__((swift_name("typeGroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignCardLabels.Companion")))
@interface HydraDataCampaignCardLabelsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCampaignCardLabelsCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceLabelInfo")))
@interface HydraDataPriceLabelInfo : HydraBase
- (instancetype)initWithTitle:(HydraDataPriceLabelInfoTitle * _Nullable)title backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("init(title:backgroundColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceLabelInfoCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceLabelInfo *)doCopyTitle:(HydraDataPriceLabelInfoTitle * _Nullable)title backgroundColor:(NSString * _Nullable)backgroundColor __attribute__((swift_name("doCopy(title:backgroundColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) HydraDataPriceLabelInfoTitle * _Nullable title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNew")))
@interface HydraDataPriceInfoNew : HydraBase
- (instancetype)initWithBackgroundColor:(NSString * _Nullable)backgroundColor topPrice:(HydraDataPriceInfoNewTopPrice * _Nullable)topPrice bottomPrice:(HydraDataPriceInfoNewBottomPrice * _Nullable)bottomPrice discount:(HydraDataDiscount * _Nullable)discount __attribute__((swift_name("init(backgroundColor:topPrice:bottomPrice:discount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoNewCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfoNew *)doCopyBackgroundColor:(NSString * _Nullable)backgroundColor topPrice:(HydraDataPriceInfoNewTopPrice * _Nullable)topPrice bottomPrice:(HydraDataPriceInfoNewBottomPrice * _Nullable)bottomPrice discount:(HydraDataDiscount * _Nullable)discount __attribute__((swift_name("doCopy(backgroundColor:topPrice:bottomPrice:discount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="backgroundColor")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bottomPrice")
*/
@property (readonly) HydraDataPriceInfoNewBottomPrice * _Nullable bottomPrice __attribute__((swift_name("bottomPrice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discount")
*/
@property (readonly) HydraDataDiscount * _Nullable discount __attribute__((swift_name("discount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="topPrice")
*/
@property (readonly) HydraDataPriceInfoNewTopPrice * _Nullable topPrice __attribute__((swift_name("topPrice")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPrimaryActionInfo")))
@interface HydraDataPrimaryActionInfo : HydraBase
- (instancetype)initWithIconColor:(NSString * _Nullable)iconColor __attribute__((swift_name("init(iconColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPrimaryActionInfoCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPrimaryActionInfo *)doCopyIconColor:(NSString * _Nullable)iconColor __attribute__((swift_name("doCopy(iconColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iconColor")
*/
@property (readonly) NSString * _Nullable iconColor __attribute__((swift_name("iconColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceArea.Companion")))
@interface HydraDataPriceAreaCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceAreaCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataAffordabilityDetail.Companion")))
@interface HydraDataAffordabilityDetailCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataAffordabilityDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol HydraKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("UiModifierElement")))
@protocol HydraUiModifierElement <HydraUiModifier>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraEventType")))
@interface HydraDataHydraEventType : HydraKotlinEnum<HydraDataHydraEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraDataHydraEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraDataHydraEventType *view __attribute__((swift_name("view")));
@property (class, readonly) HydraDataHydraEventType *click __attribute__((swift_name("click")));
@property (class, readonly) HydraDataHydraEventType *addtocartclick __attribute__((swift_name("addtocartclick")));
@property (class, readonly) HydraDataHydraEventType *listingopportunitybuttonclick __attribute__((swift_name("listingopportunitybuttonclick")));
@property (class, readonly) HydraDataHydraEventType *pagerclicked __attribute__((swift_name("pagerclicked")));
@property (class, readonly) HydraDataHydraEventType *pagerview __attribute__((swift_name("pagerview")));
@property (class, readonly) HydraDataHydraEventType *screenload __attribute__((swift_name("screenload")));
@property (class, readonly) HydraDataHydraEventType *search __attribute__((swift_name("search")));
+ (HydraKotlinArray<HydraDataHydraEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraDataHydraEventType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraEvent.Companion")))
@interface HydraDataHydraEventCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataHydraEventCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataUIType.Companion")))
@interface HydraDataUITypeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataUITypeCompanion *shared __attribute__((swift_name("shared")));
- (HydraDataUIType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(HydraKotlinArray<id<HydraKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataSizeUIModel")))
@interface HydraDataSizeUIModel : HydraBase
- (instancetype)initWithWidth:(HydraInt * _Nullable)width height:(HydraInt * _Nullable)height aspect:(HydraFloat * _Nullable)aspect weight:(HydraFloat * _Nullable)weight __attribute__((swift_name("init(width:height:aspect:weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataSizeUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataSizeUIModel *)doCopyWidth:(HydraInt * _Nullable)width height:(HydraInt * _Nullable)height aspect:(HydraFloat * _Nullable)aspect weight:(HydraFloat * _Nullable)weight __attribute__((swift_name("doCopy(width:height:aspect:weight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="aspect")
*/
@property (readonly) HydraFloat * _Nullable aspect __attribute__((swift_name("aspect")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) HydraInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="weight")
*/
@property (readonly) HydraFloat * _Nullable weight __attribute__((swift_name("weight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) HydraInt * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataMarginUIModel")))
@interface HydraDataMarginUIModel : HydraBase
- (instancetype)initWithTop:(HydraInt * _Nullable)top bottom:(HydraInt * _Nullable)bottom left:(HydraInt * _Nullable)left right:(HydraInt * _Nullable)right __attribute__((swift_name("init(top:bottom:left:right:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataMarginUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataMarginUIModel *)doCopyTop:(HydraInt * _Nullable)top bottom:(HydraInt * _Nullable)bottom left:(HydraInt * _Nullable)left right:(HydraInt * _Nullable)right __attribute__((swift_name("doCopy(top:bottom:left:right:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bottom")
*/
@property (readonly) HydraInt * _Nullable bottom __attribute__((swift_name("bottom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="left")
*/
@property (readonly) HydraInt * _Nullable left __attribute__((swift_name("left")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="right")
*/
@property (readonly) HydraInt * _Nullable right __attribute__((swift_name("right")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="top")
*/
@property (readonly) HydraInt * _Nullable top __attribute__((swift_name("top")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPaddingUIModel")))
@interface HydraDataPaddingUIModel : HydraBase
- (instancetype)initWithTop:(HydraInt * _Nullable)top bottom:(HydraInt * _Nullable)bottom left:(HydraInt * _Nullable)left right:(HydraInt * _Nullable)right __attribute__((swift_name("init(top:bottom:left:right:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPaddingUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPaddingUIModel *)doCopyTop:(HydraInt * _Nullable)top bottom:(HydraInt * _Nullable)bottom left:(HydraInt * _Nullable)left right:(HydraInt * _Nullable)right __attribute__((swift_name("doCopy(top:bottom:left:right:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bottom")
*/
@property (readonly) HydraInt * _Nullable bottom __attribute__((swift_name("bottom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="left")
*/
@property (readonly) HydraInt * _Nullable left __attribute__((swift_name("left")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="right")
*/
@property (readonly) HydraInt * _Nullable right __attribute__((swift_name("right")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="top")
*/
@property (readonly) HydraInt * _Nullable top __attribute__((swift_name("top")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBorderUIModel")))
@interface HydraDataBorderUIModel : HydraBase
- (instancetype)initWithColor:(NSString * _Nullable)color width:(HydraInt * _Nullable)width cornerRadius:(HydraDataCornerRadiusUIModel * _Nullable)cornerRadius __attribute__((swift_name("init(color:width:cornerRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataBorderUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataBorderUIModel *)doCopyColor:(NSString * _Nullable)color width:(HydraInt * _Nullable)width cornerRadius:(HydraDataCornerRadiusUIModel * _Nullable)cornerRadius __attribute__((swift_name("doCopy(color:width:cornerRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cornerRadius")
*/
@property (readonly) HydraDataCornerRadiusUIModel * _Nullable cornerRadius __attribute__((swift_name("cornerRadius")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) HydraInt * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataShadowUIModel")))
@interface HydraDataShadowUIModel : HydraBase
- (instancetype)initWithColor:(NSString * _Nullable)color radius:(HydraInt * _Nullable)radius opacity:(HydraFloat * _Nullable)opacity __attribute__((swift_name("init(color:radius:opacity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataShadowUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataShadowUIModel *)doCopyColor:(NSString * _Nullable)color radius:(HydraInt * _Nullable)radius opacity:(HydraFloat * _Nullable)opacity __attribute__((swift_name("doCopy(color:radius:opacity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="opacity")
*/
@property (readonly) HydraFloat * _Nullable opacity __attribute__((swift_name("opacity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="radius")
*/
@property (readonly) HydraInt * _Nullable radius __attribute__((swift_name("radius")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTapActionsUIModel")))
@interface HydraDataTapActionsUIModel : HydraBase
- (instancetype)initWithActionType:(HydraDataActionType * _Nullable)actionType command:(NSString * _Nullable)command __attribute__((swift_name("init(actionType:command:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataTapActionsUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataTapActionsUIModel *)doCopyActionType:(HydraDataActionType * _Nullable)actionType command:(NSString * _Nullable)command __attribute__((swift_name("doCopy(actionType:command:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionType")
*/
@property (readonly) HydraDataActionType * _Nullable actionType __attribute__((swift_name("actionType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="command")
*/
@property (readonly) NSString * _Nullable command __attribute__((swift_name("command")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraOptimizedEvent")))
@interface HydraDataHydraOptimizedEvent : HydraBase
- (instancetype)initWithData:(NSString * _Nullable)data events:(NSArray<HydraDataHydraEvent *> * _Nullable)events __attribute__((swift_name("init(data:events:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataHydraOptimizedEventCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataHydraOptimizedEvent *)doCopyData:(NSString * _Nullable)data events:(NSArray<HydraDataHydraEvent *> * _Nullable)events __attribute__((swift_name("doCopy(data:events:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="eventList")
*/
@property (readonly) NSArray<HydraDataHydraEvent *> * _Nullable events __attribute__((swift_name("events")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBaseUIModel.Companion")))
@interface HydraDataBaseUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataBaseUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol HydraKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<HydraKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<HydraKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol HydraKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<HydraKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<HydraKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol HydraKotlinx_serialization_coreKSerializer <HydraKotlinx_serialization_coreSerializationStrategy, HydraKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((swift_name("UiAlignmentVertical")))
@protocol HydraUiAlignmentVertical
@required
- (int32_t)alignSize:(int32_t)size space:(int32_t)space __attribute__((swift_name("align(size:space:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("UiAlignmentLine")))
@interface HydraUiAlignmentLine : HydraBase
@property (class, readonly, getter=companion) HydraUiAlignmentLineCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UiHorizontalAlignmentLine")))
@interface HydraUiHorizontalAlignmentLine : HydraUiAlignmentLine
- (instancetype)initWithMerger:(HydraInt *(^)(HydraInt *, HydraInt *))merger __attribute__((swift_name("init(merger:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("UiMeasured")))
@protocol HydraUiMeasured
@required
- (int32_t)getAlignmentLine:(HydraUiAlignmentLine *)alignmentLine __attribute__((swift_name("get(alignmentLine:)")));
@property (readonly) int32_t measuredHeight __attribute__((swift_name("measuredHeight")));
@property (readonly) int32_t measuredWidth __attribute__((swift_name("measuredWidth")));
@property (readonly) id _Nullable parentData __attribute__((swift_name("parentData")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textAnnotatedStringRange")))
@interface HydraUi_textAnnotatedStringRange<T> : HydraBase
- (instancetype)initWithItem:(T _Nullable)item start:(int32_t)start end:(int32_t)end __attribute__((swift_name("init(item:start:end:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithItem:(T _Nullable)item start:(int32_t)start end:(int32_t)end tag:(NSString *)tag __attribute__((swift_name("init(item:start:end:tag:)"))) __attribute__((objc_designated_initializer));
- (HydraUi_textAnnotatedStringRange<T> *)doCopyItem:(T _Nullable)item start:(int32_t)start end:(int32_t)end tag:(NSString *)tag __attribute__((swift_name("doCopy(item:start:end:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t end __attribute__((swift_name("end")));
@property (readonly) T _Nullable item __attribute__((swift_name("item")));
@property (readonly) int32_t start __attribute__((swift_name("start")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textParagraphStyle")))
@interface HydraUi_textParagraphStyle : HydraBase
- (instancetype)initWithTextAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(HydraUi_textTextIndent * _Nullable)textIndent platformStyle:(HydraUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(HydraUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(HydraUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
- (HydraUi_textParagraphStyle *)doCopyTextAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(HydraUi_textTextIndent * _Nullable)textIndent platformStyle:(HydraUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(HydraUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(HydraUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_textParagraphStyle *)mergeOther:(HydraUi_textParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_textParagraphStyle *)plusOther:(HydraUi_textParagraphStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable deprecated_boxing_hyphens __attribute__((swift_name("deprecated_boxing_hyphens"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_lineBreak __attribute__((swift_name("deprecated_boxing_lineBreak"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textAlign __attribute__((swift_name("deprecated_boxing_textAlign"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textDirection __attribute__((swift_name("deprecated_boxing_textDirection"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) int32_t hyphens __attribute__((swift_name("hyphens")));
@property (readonly) int32_t lineBreak __attribute__((swift_name("lineBreak")));
@property (readonly) int64_t lineHeight __attribute__((swift_name("lineHeight")));
@property (readonly) HydraUi_textLineHeightStyle * _Nullable lineHeightStyle __attribute__((swift_name("lineHeightStyle")));
@property (readonly) HydraUi_textPlatformParagraphStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) int32_t textAlign __attribute__((swift_name("textAlign")));
@property (readonly) int32_t textDirection __attribute__((swift_name("textDirection")));
@property (readonly) HydraUi_textTextIndent * _Nullable textIndent __attribute__((swift_name("textIndent")));
@property (readonly) HydraUi_textTextMotion * _Nullable textMotion __attribute__((swift_name("textMotion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textAnnotatedString.Companion")))
@interface HydraUi_textAnnotatedStringCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textAnnotatedStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<HydraRuntime_saveableSaver> Saver __attribute__((swift_name("Saver")));
@end

__attribute__((swift_name("Ui_textLinkAnnotation")))
@interface HydraUi_textLinkAnnotation : HydraBase
@property (readonly) id<HydraUi_textLinkInteractionListener> _Nullable linkInteractionListener __attribute__((swift_name("linkInteractionListener")));
@property (readonly) HydraUi_textTextLinkStyles * _Nullable styles __attribute__((swift_name("styles")));
@end

__attribute__((swift_name("Ui_textTtsAnnotation")))
@interface HydraUi_textTtsAnnotation : HydraBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textUrlAnnotation")))
@interface HydraUi_textUrlAnnotation : HydraBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use LinkAnnotatation.Url(url) instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight")))
@interface HydraUi_textFontWeight : HydraBase <HydraKotlinComparable>
- (instancetype)initWithWeight:(int32_t)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textFontWeightCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(HydraUi_textFontWeight *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_textFontFamily")))
@interface HydraUi_textFontFamily : HydraBase
@property (class, readonly, getter=companion) HydraUi_textFontFamilyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canLoadSynchronously __attribute__((swift_name("canLoadSynchronously")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform")))
@interface HydraUi_textTextGeometricTransform : HydraBase
- (instancetype)initWithScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textTextGeometricTransformCompanion *companion __attribute__((swift_name("companion")));
- (HydraUi_textTextGeometricTransform *)doCopyScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("doCopy(scaleX:skewX:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float scaleX __attribute__((swift_name("scaleX")));
@property (readonly) float skewX __attribute__((swift_name("skewX")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol HydraKotlinIterable
@required
- (id<HydraKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol HydraKotlinCollection <HydraKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList")))
@interface HydraUi_textLocaleList : HydraBase <HydraKotlinCollection>
- (instancetype)initWithLocales:(HydraKotlinArray<HydraUi_textLocale *> *)locales __attribute__((swift_name("init(locales:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLanguageTags:(NSString *)languageTags __attribute__((swift_name("init(languageTags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLocaleList:(NSArray<HydraUi_textLocale *> *)localeList __attribute__((swift_name("init(localeList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textLocaleListCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(HydraUi_textLocale *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (HydraUi_textLocale *)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (id<HydraKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<HydraUi_textLocale *> *localeList __attribute__((swift_name("localeList")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration")))
@interface HydraUi_textTextDecoration : HydraBase
@property (class, readonly, getter=companion) HydraUi_textTextDecorationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsOther:(HydraUi_textTextDecoration *)other __attribute__((swift_name("contains(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraUi_textTextDecoration *)plusDecoration:(HydraUi_textTextDecoration *)decoration __attribute__((swift_name("plus(decoration:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow")))
@interface HydraUi_graphicsShadow : HydraBase
- (instancetype)initWithColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("init(color:offset:blurRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_graphicsShadowCompanion *companion __attribute__((swift_name("companion")));
- (HydraUi_graphicsShadow *)doCopyColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("doCopy(color:offset:blurRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float blurRadius __attribute__((swift_name("blurRadius")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) uint64_t color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) int64_t offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle")))
@interface HydraUi_textPlatformSpanStyle : HydraBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTextDecorationLineStyle:(id _Nullable)textDecorationLineStyle __attribute__((swift_name("init(textDecorationLineStyle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textPlatformSpanStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraUi_textPlatformSpanStyle *)mergeOther:(HydraUi_textPlatformSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@property (readonly) id _Nullable textDecorationLineStyle __attribute__((swift_name("textDecorationLineStyle")));
@end

__attribute__((swift_name("Ui_graphicsDrawStyle")))
@interface HydraUi_graphicsDrawStyle : HydraBase
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsBrush")))
@interface HydraUi_graphicsBrush : HydraBase
@property (class, readonly, getter=companion) HydraUi_graphicsBrushCompanion *companion __attribute__((swift_name("companion")));
- (void)applyToSize:(int64_t)size p:(id<HydraUi_graphicsPaint>)p alpha:(float)alpha __attribute__((swift_name("applyTo(size:p:alpha:)")));
@property (readonly) int64_t intrinsicSize __attribute__((swift_name("intrinsicSize")));
@end

__attribute__((swift_name("LibraryQualifier")))
@protocol HydraLibraryQualifier
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignBadge.Companion")))
@interface HydraDataCampaignBadgeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCampaignBadgeCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTagLabel.Companion")))
@interface HydraDataTagLabelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataTagLabelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataProductLabel.Companion")))
@interface HydraDataProductLabelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataProductLabelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCampaignLabels.Companion")))
@interface HydraDataCampaignLabelsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCampaignLabelsCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataWinnerLabels.Companion")))
@interface HydraDataWinnerLabelsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataWinnerLabelsCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataAffordabilityLabels.Companion")))
@interface HydraDataAffordabilityLabelsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataAffordabilityLabelsCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceLabelInfoTitle")))
@interface HydraDataPriceLabelInfoTitle : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("init(text:color:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceLabelInfoTitleCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceLabelInfoTitle *)doCopyText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(text:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceLabelInfo.Companion")))
@interface HydraDataPriceLabelInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceLabelInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewTopPrice")))
@interface HydraDataPriceInfoNewTopPrice : HydraBase
- (instancetype)initWithTitle:(HydraDataPriceInfoNewTopPriceTitle * _Nullable)title value:(HydraDouble * _Nullable)value __attribute__((swift_name("init(title:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoNewTopPriceCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfoNewTopPrice *)doCopyTitle:(HydraDataPriceInfoNewTopPriceTitle * _Nullable)title value:(HydraDouble * _Nullable)value __attribute__((swift_name("doCopy(title:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) HydraDataPriceInfoNewTopPriceTitle * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) HydraDouble * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewBottomPrice")))
@interface HydraDataPriceInfoNewBottomPrice : HydraBase
- (instancetype)initWithTitle:(HydraDataPriceInfoNewBottomPriceTitle * _Nullable)title value:(HydraDouble * _Nullable)value __attribute__((swift_name("init(title:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoNewBottomPriceCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfoNewBottomPrice *)doCopyTitle:(HydraDataPriceInfoNewBottomPriceTitle * _Nullable)title value:(HydraDouble * _Nullable)value __attribute__((swift_name("doCopy(title:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) HydraDataPriceInfoNewBottomPriceTitle * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) HydraDouble * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDiscount")))
@interface HydraDataDiscount : HydraBase
- (instancetype)initWithTitle:(HydraDataDiscountTitle * _Nullable)title value:(HydraInt * _Nullable)value __attribute__((swift_name("init(title:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataDiscountCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataDiscount *)doCopyTitle:(HydraDataDiscountTitle * _Nullable)title value:(HydraInt * _Nullable)value __attribute__((swift_name("doCopy(title:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) HydraDataDiscountTitle * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/
@property (readonly) HydraInt * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNew.Companion")))
@interface HydraDataPriceInfoNewCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoNewCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPrimaryActionInfo.Companion")))
@interface HydraDataPrimaryActionInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPrimaryActionInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraEventType.Companion")))
@interface HydraDataHydraEventTypeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataHydraEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(HydraKotlinArray<id<HydraKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataSizeUIModel.Companion")))
@interface HydraDataSizeUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataSizeUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataMarginUIModel.Companion")))
@interface HydraDataMarginUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataMarginUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPaddingUIModel.Companion")))
@interface HydraDataPaddingUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPaddingUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCornerRadiusUIModel")))
@interface HydraDataCornerRadiusUIModel : HydraBase
- (instancetype)initWithTopRight:(HydraInt * _Nullable)topRight topLeft:(HydraInt * _Nullable)topLeft bottomRight:(HydraInt * _Nullable)bottomRight bottomLeft:(HydraInt * _Nullable)bottomLeft __attribute__((swift_name("init(topRight:topLeft:bottomRight:bottomLeft:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataCornerRadiusUIModelCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataCornerRadiusUIModel *)doCopyTopRight:(HydraInt * _Nullable)topRight topLeft:(HydraInt * _Nullable)topLeft bottomRight:(HydraInt * _Nullable)bottomRight bottomLeft:(HydraInt * _Nullable)bottomLeft __attribute__((swift_name("doCopy(topRight:topLeft:bottomRight:bottomLeft:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bottomLeft")
*/
@property (readonly) HydraInt * _Nullable bottomLeft __attribute__((swift_name("bottomLeft")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bottomRight")
*/
@property (readonly) HydraInt * _Nullable bottomRight __attribute__((swift_name("bottomRight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="topLeft")
*/
@property (readonly) HydraInt * _Nullable topLeft __attribute__((swift_name("topLeft")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="topRight")
*/
@property (readonly) HydraInt * _Nullable topRight __attribute__((swift_name("topRight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBorderUIModel.Companion")))
@interface HydraDataBorderUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataBorderUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataShadowUIModel.Companion")))
@interface HydraDataShadowUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataShadowUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataActionType")))
@interface HydraDataActionType : HydraKotlinEnum<HydraDataActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraDataActionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraDataActionType *apicall __attribute__((swift_name("apicall")));
@property (class, readonly) HydraDataActionType *action __attribute__((swift_name("action")));
@property (class, readonly) HydraDataActionType *navigation __attribute__((swift_name("navigation")));
+ (HydraKotlinArray<HydraDataActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraDataActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTapActionsUIModel.Companion")))
@interface HydraDataTapActionsUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataTapActionsUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataHydraOptimizedEvent.Companion")))
@interface HydraDataHydraOptimizedEventCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataHydraOptimizedEventCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol HydraKotlinx_serialization_coreEncoder
@required
- (id<HydraKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<HydraKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<HydraKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<HydraKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<HydraKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) HydraKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol HydraKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<HydraKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HydraKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<HydraKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) HydraKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol HydraKotlinx_serialization_coreDecoder
@required
- (id<HydraKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<HydraKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (HydraKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<HydraKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<HydraKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) HydraKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UiAlignmentLine.Companion")))
@interface HydraUiAlignmentLineCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUiAlignmentLineCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t Unspecified __attribute__((swift_name("Unspecified")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent")))
@interface HydraUi_textTextIndent : HydraBase
- (instancetype)initWithFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("init(firstLine:restLine:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textTextIndentCompanion *companion __attribute__((swift_name("companion")));
- (HydraUi_textTextIndent *)doCopyFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("doCopy(firstLine:restLine:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t firstLine __attribute__((swift_name("firstLine")));
@property (readonly) int64_t restLine __attribute__((swift_name("restLine")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle")))
@interface HydraUi_textPlatformParagraphStyle : HydraBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontRasterizationSettings:(HydraUi_textFontRasterizationSettings *)fontRasterizationSettings __attribute__((swift_name("init(fontRasterizationSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textPlatformParagraphStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraUi_textPlatformParagraphStyle *)mergeOther:(HydraUi_textPlatformParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@property (readonly) HydraUi_textFontRasterizationSettings *fontRasterizationSettings __attribute__((swift_name("fontRasterizationSettings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle")))
@interface HydraUi_textLineHeightStyle : HydraBase
- (instancetype)initWithAlignment:(float)alignment trim:(int32_t)trim __attribute__((swift_name("init(alignment:trim:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textLineHeightStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alignment __attribute__((swift_name("alignment")));
@property (readonly) int32_t trim __attribute__((swift_name("trim")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion")))
@interface HydraUi_textTextMotion : HydraBase
@property (class, readonly, getter=companion) HydraUi_textTextMotionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Runtime_saveableSaver")))
@protocol HydraRuntime_saveableSaver
@required
- (id _Nullable)restoreValue:(id)value __attribute__((swift_name("restore(value:)")));
- (id _Nullable)save:(id<HydraRuntime_saveableSaverScope>)receiver value:(id _Nullable)value __attribute__((swift_name("save(_:value:)")));
@end

__attribute__((swift_name("Ui_textLinkInteractionListener")))
@protocol HydraUi_textLinkInteractionListener
@required
- (void)onClickLink:(HydraUi_textLinkAnnotation *)link __attribute__((swift_name("onClick(link:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextLinkStyles")))
@interface HydraUi_textTextLinkStyles : HydraBase
- (instancetype)initWithStyle:(HydraUi_textSpanStyle * _Nullable)style focusedStyle:(HydraUi_textSpanStyle * _Nullable)focusedStyle hoveredStyle:(HydraUi_textSpanStyle * _Nullable)hoveredStyle pressedStyle:(HydraUi_textSpanStyle * _Nullable)pressedStyle __attribute__((swift_name("init(style:focusedStyle:hoveredStyle:pressedStyle:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) HydraUi_textSpanStyle * _Nullable focusedStyle __attribute__((swift_name("focusedStyle")));
@property (readonly) HydraUi_textSpanStyle * _Nullable hoveredStyle __attribute__((swift_name("hoveredStyle")));
@property (readonly) HydraUi_textSpanStyle * _Nullable pressedStyle __attribute__((swift_name("pressedStyle")));
@property (readonly) HydraUi_textSpanStyle * _Nullable style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight.Companion")))
@interface HydraUi_textFontWeightCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textFontWeightCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Black __attribute__((swift_name("Black")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Bold __attribute__((swift_name("Bold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *ExtraBold __attribute__((swift_name("ExtraBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *ExtraLight __attribute__((swift_name("ExtraLight")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Light __attribute__((swift_name("Light")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Medium __attribute__((swift_name("Medium")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Normal __attribute__((swift_name("Normal")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *SemiBold __attribute__((swift_name("SemiBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *Thin __attribute__((swift_name("Thin")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W100 __attribute__((swift_name("W100")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W200 __attribute__((swift_name("W200")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W300 __attribute__((swift_name("W300")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W400 __attribute__((swift_name("W400")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W500 __attribute__((swift_name("W500")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W600 __attribute__((swift_name("W600")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W700 __attribute__((swift_name("W700")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W800 __attribute__((swift_name("W800")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textFontWeight *W900 __attribute__((swift_name("W900")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontFamily.Companion")))
@interface HydraUi_textFontFamilyCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textFontFamilyCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textGenericFontFamily *Cursive __attribute__((swift_name("Cursive")));
@property (readonly) HydraUi_textSystemFontFamily *Default __attribute__((swift_name("Default")));
@property (readonly) HydraUi_textGenericFontFamily *Monospace __attribute__((swift_name("Monospace")));
@property (readonly) HydraUi_textGenericFontFamily *SansSerif __attribute__((swift_name("SansSerif")));
@property (readonly) HydraUi_textGenericFontFamily *Serif __attribute__((swift_name("Serif")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform.Companion")))
@interface HydraUi_textTextGeometricTransformCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textTextGeometricTransformCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale")))
@interface HydraUi_textLocale : HydraBase
- (instancetype)initWithLanguageTag:(NSString *)languageTag __attribute__((swift_name("init(languageTag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textLocaleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toLanguageTag __attribute__((swift_name("toLanguageTag()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSLocale *platformLocale __attribute__((swift_name("platformLocale")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList.Companion")))
@interface HydraUi_textLocaleListCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textLocaleListCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textLocaleList *Empty __attribute__((swift_name("Empty")));
@property (readonly) HydraUi_textLocaleList *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration.Companion")))
@interface HydraUi_textTextDecorationCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textTextDecorationCompanion *shared __attribute__((swift_name("shared")));
- (HydraUi_textTextDecoration *)combineDecorations:(NSArray<HydraUi_textTextDecoration *> *)decorations __attribute__((swift_name("combine(decorations:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textTextDecoration *LineThrough __attribute__((swift_name("LineThrough")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textTextDecoration *None __attribute__((swift_name("None")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textTextDecoration *Underline __attribute__((swift_name("Underline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow.Companion")))
@interface HydraUi_graphicsShadowCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_graphicsShadowCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_graphicsShadow *None __attribute__((swift_name("None")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle.Companion")))
@interface HydraUi_textPlatformSpanStyleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textPlatformSpanStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textPlatformSpanStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsBrush.Companion")))
@interface HydraUi_graphicsBrushCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_graphicsBrushCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)horizontalGradientColorStops:(HydraKotlinArray<HydraKotlinPair<HydraFloat *, id> *> *)colorStops startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colorStops:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)horizontalGradientColors:(NSArray<id> *)colors startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colors:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)linearGradientColorStops:(HydraKotlinArray<HydraKotlinPair<HydraFloat *, id> *> *)colorStops start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colorStops:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)linearGradientColors:(NSArray<id> *)colors start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colors:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)radialGradientColorStops:(HydraKotlinArray<HydraKotlinPair<HydraFloat *, id> *> *)colorStops center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colorStops:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)radialGradientColors:(NSArray<id> *)colors center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colors:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)sweepGradientColorStops:(HydraKotlinArray<HydraKotlinPair<HydraFloat *, id> *> *)colorStops center:(int64_t)center __attribute__((swift_name("sweepGradient(colorStops:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)sweepGradientColors:(NSArray<id> *)colors center:(int64_t)center __attribute__((swift_name("sweepGradient(colors:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)verticalGradientColorStops:(HydraKotlinArray<HydraKotlinPair<HydraFloat *, id> *> *)colorStops startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colorStops:startY:endY:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsBrush *)verticalGradientColors:(NSArray<id> *)colors startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colors:startY:endY:tileMode:)")));
@end

__attribute__((swift_name("Ui_graphicsPaint")))
@protocol HydraUi_graphicsPaint
@required
- (HydraSkikoPaint *)asFrameworkPaint __attribute__((swift_name("asFrameworkPaint()")));
@property float alpha __attribute__((swift_name("alpha")));
@property int32_t blendMode __attribute__((swift_name("blendMode")));
@property uint64_t color __attribute__((swift_name("color")));
@property HydraUi_graphicsColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property int32_t filterQuality __attribute__((swift_name("filterQuality")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property id<HydraUi_graphicsPathEffect> _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property HydraSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property int32_t strokeCap __attribute__((swift_name("strokeCap")));
@property int32_t strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiterLimit __attribute__((swift_name("strokeMiterLimit")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@property int32_t style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceLabelInfoTitle.Companion")))
@interface HydraDataPriceLabelInfoTitleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceLabelInfoTitleCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewTopPriceTitle")))
@interface HydraDataPriceInfoNewTopPriceTitle : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("init(text:color:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoNewTopPriceTitleCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfoNewTopPriceTitle *)doCopyText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(text:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewTopPrice.Companion")))
@interface HydraDataPriceInfoNewTopPriceCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoNewTopPriceCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewBottomPriceTitle")))
@interface HydraDataPriceInfoNewBottomPriceTitle : HydraBase
- (instancetype)initWithText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("init(text:color:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataPriceInfoNewBottomPriceTitleCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataPriceInfoNewBottomPriceTitle *)doCopyText:(NSString * _Nullable)text color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(text:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewBottomPrice.Companion")))
@interface HydraDataPriceInfoNewBottomPriceCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoNewBottomPriceCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDiscountTitle")))
@interface HydraDataDiscountTitle : HydraBase
- (instancetype)initWithColor:(NSString * _Nullable)color text:(NSString * _Nullable)text __attribute__((swift_name("init(color:text:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraDataDiscountTitleCompanion *companion __attribute__((swift_name("companion")));
- (HydraDataDiscountTitle *)doCopyColor:(NSString * _Nullable)color text:(NSString * _Nullable)text __attribute__((swift_name("doCopy(color:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDiscount.Companion")))
@interface HydraDataDiscountCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataDiscountCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataCornerRadiusUIModel.Companion")))
@interface HydraDataCornerRadiusUIModelCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataCornerRadiusUIModelCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataActionType.Companion")))
@interface HydraDataActionTypeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataActionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(HydraKotlinArray<id<HydraKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol HydraKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<HydraKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HydraKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HydraKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) HydraKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface HydraKotlinx_serialization_coreSerializersModule : HydraBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<HydraKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HydraKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<HydraKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<HydraKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HydraKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HydraKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HydraKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HydraKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol HydraKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface HydraKotlinx_serialization_coreSerialKind : HydraBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol HydraKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<HydraKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HydraKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HydraKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<HydraKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) HydraKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface HydraKotlinNothing : HydraBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent.Companion")))
@interface HydraUi_textTextIndentCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textTextIndentCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) HydraUi_textTextIndent *None __attribute__((swift_name("None")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontRasterizationSettings")))
@interface HydraUi_textFontRasterizationSettings : HydraBase
- (instancetype)initWithSmoothing:(HydraUi_textFontSmoothing *)smoothing hinting:(HydraUi_textFontHinting *)hinting subpixelPositioning:(BOOL)subpixelPositioning autoHintingForced:(BOOL)autoHintingForced __attribute__((swift_name("init(smoothing:hinting:subpixelPositioning:autoHintingForced:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraUi_textFontRasterizationSettingsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoHintingForced __attribute__((swift_name("autoHintingForced")));
@property (readonly) HydraUi_textFontHinting *hinting __attribute__((swift_name("hinting")));
@property (readonly) HydraUi_textFontSmoothing *smoothing __attribute__((swift_name("smoothing")));
@property (readonly) BOOL subpixelPositioning __attribute__((swift_name("subpixelPositioning")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle.Companion")))
@interface HydraUi_textPlatformParagraphStyleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textPlatformParagraphStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textPlatformParagraphStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle.Companion")))
@interface HydraUi_textLineHeightStyleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textLineHeightStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textLineHeightStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion.Companion")))
@interface HydraUi_textTextMotionCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textTextMotionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textTextMotion *Animated __attribute__((swift_name("Animated")));
@property (readonly) HydraUi_textTextMotion *Static __attribute__((swift_name("Static")));
@end

__attribute__((swift_name("Runtime_saveableSaverScope")))
@protocol HydraRuntime_saveableSaverScope
@required
- (BOOL)canBeSavedValue:(id)value __attribute__((swift_name("canBeSaved(value:)")));
@end

__attribute__((swift_name("Ui_textSystemFontFamily")))
@interface HydraUi_textSystemFontFamily : HydraUi_textFontFamily
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textGenericFontFamily")))
@interface HydraUi_textGenericFontFamily : HydraUi_textSystemFontFamily
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale.Companion")))
@interface HydraUi_textLocaleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textLocaleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textLocale *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface HydraKotlinPair<__covariant A, __covariant B> : HydraBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (HydraKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("SkikoNative")))
@interface HydraSkikoNative : HydraBase
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoNativeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SkikoManaged")))
@interface HydraSkikoManaged : HydraSkikoNative
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
@property (readonly) BOOL isClosed __attribute__((swift_name("isClosed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint")))
@interface HydraSkikoPaint : HydraSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPaintCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNothingToDraw __attribute__((swift_name("hasNothingToDraw()")));
- (HydraSkikoPaint *)makeClone __attribute__((swift_name("makeClone()")));
- (HydraSkikoPaint *)reset __attribute__((swift_name("reset()")));
- (HydraSkikoPaint *)setARGBA:(int32_t)a r:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("setARGB(a:r:g:b:)")));
- (HydraSkikoPaint *)setAlphafA:(float)a __attribute__((swift_name("setAlphaf(a:)")));
- (HydraSkikoPaint *)setColor4fColor:(HydraSkikoColor4f *)color colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColor4f(color:colorSpace:)")));
- (HydraSkikoPaint *)setStrokeValue:(BOOL)value __attribute__((swift_name("setStroke(value:)")));
@property int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) float alphaf __attribute__((swift_name("alphaf")));
@property HydraSkikoBlendMode *blendMode __attribute__((swift_name("blendMode")));
@property int32_t color __attribute__((swift_name("color")));
@property HydraSkikoColor4f *color4f __attribute__((swift_name("color4f")));
@property HydraSkikoColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property HydraSkikoImageFilter * _Nullable imageFilter __attribute__((swift_name("imageFilter")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property BOOL isDither __attribute__((swift_name("isDither")));
@property (readonly) BOOL isSrcOver __attribute__((swift_name("isSrcOver")));
@property HydraSkikoMaskFilter * _Nullable maskFilter __attribute__((swift_name("maskFilter")));
@property HydraSkikoPaintMode *mode __attribute__((swift_name("mode")));
@property HydraSkikoPathEffect * _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property HydraSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property HydraSkikoPaintStrokeCap *strokeCap __attribute__((swift_name("strokeCap")));
@property HydraSkikoPaintStrokeJoin *strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiter __attribute__((swift_name("strokeMiter")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsColorFilter")))
@interface HydraUi_graphicsColorFilter : HydraBase
@property (class, readonly, getter=companion) HydraUi_graphicsColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Ui_graphicsPathEffect")))
@protocol HydraUi_graphicsPathEffect
@required
@end

__attribute__((swift_name("SkikoRefCnt")))
@interface HydraSkikoRefCnt : HydraSkikoManaged

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t refCount __attribute__((swift_name("refCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader")))
@interface HydraSkikoShader : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoShaderCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoShader *)makeWithColorFilterF:(HydraSkikoColorFilter * _Nullable)f __attribute__((swift_name("makeWithColorFilter(f:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewTopPriceTitle.Companion")))
@interface HydraDataPriceInfoNewTopPriceTitleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoNewTopPriceTitleCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataPriceInfoNewBottomPriceTitle.Companion")))
@interface HydraDataPriceInfoNewBottomPriceTitleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataPriceInfoNewBottomPriceTitleCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDiscountTitle.Companion")))
@interface HydraDataDiscountTitleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraDataDiscountTitleCompanion *shared __attribute__((swift_name("shared")));
- (id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol HydraKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<HydraKotlinKClass>)kClass provider:(id<HydraKotlinx_serialization_coreKSerializer> (^)(NSArray<id<HydraKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<HydraKotlinKClass>)kClass serializer:(id<HydraKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<HydraKotlinKClass>)baseClass actualClass:(id<HydraKotlinKClass>)actualClass actualSerializer:(id<HydraKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<HydraKotlinKClass>)baseClass defaultDeserializerProvider:(id<HydraKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<HydraKotlinKClass>)baseClass defaultDeserializerProvider:(id<HydraKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<HydraKotlinKClass>)baseClass defaultSerializerProvider:(id<HydraKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol HydraKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol HydraKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol HydraKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol HydraKotlinKClass <HydraKotlinKDeclarationContainer, HydraKotlinKAnnotatedElement, HydraKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontSmoothing")))
@interface HydraUi_textFontSmoothing : HydraKotlinEnum<HydraUi_textFontSmoothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraUi_textFontSmoothing *none __attribute__((swift_name("none")));
@property (class, readonly) HydraUi_textFontSmoothing *antialias __attribute__((swift_name("antialias")));
@property (class, readonly) HydraUi_textFontSmoothing *subpixelantialias __attribute__((swift_name("subpixelantialias")));
+ (HydraKotlinArray<HydraUi_textFontSmoothing *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraUi_textFontSmoothing *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontHinting")))
@interface HydraUi_textFontHinting : HydraKotlinEnum<HydraUi_textFontHinting *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraUi_textFontHinting *none __attribute__((swift_name("none")));
@property (class, readonly) HydraUi_textFontHinting *slight __attribute__((swift_name("slight")));
@property (class, readonly) HydraUi_textFontHinting *normal __attribute__((swift_name("normal")));
@property (class, readonly) HydraUi_textFontHinting *full __attribute__((swift_name("full")));
+ (HydraKotlinArray<HydraUi_textFontHinting *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraUi_textFontHinting *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontRasterizationSettings.Companion")))
@interface HydraUi_textFontRasterizationSettingsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_textFontRasterizationSettingsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraUi_textFontRasterizationSettings *PlatformDefault __attribute__((swift_name("PlatformDefault")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoNative.Companion")))
@interface HydraSkikoNativeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoNativeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) void * _Nullable NullPointer __attribute__((swift_name("NullPointer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint.Companion")))
@interface HydraSkikoPaintCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPaintCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f")))
@interface HydraSkikoColor4f : HydraBase
- (instancetype)initWithRgba:(HydraKotlinFloatArray *)rgba __attribute__((swift_name("init(rgba:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(int32_t)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithR:(float)r g:(float)g b:(float)b a:(float)a __attribute__((swift_name("init(r:g:b:a:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoColor4fCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (HydraKotlinFloatArray *)flatten __attribute__((swift_name("flatten()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoColor4f *)makeLerpOther:(HydraSkikoColor4f *)other weight:(float)weight __attribute__((swift_name("makeLerp(other:weight:)")));
- (int32_t)toColor __attribute__((swift_name("toColor()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoColor4f *)withA_a:(float)_a __attribute__((swift_name("withA(_a:)")));
- (HydraSkikoColor4f *)withB_b:(float)_b __attribute__((swift_name("withB(_b:)")));
- (HydraSkikoColor4f *)withG_g:(float)_g __attribute__((swift_name("withG(_g:)")));
- (HydraSkikoColor4f *)withR_r:(float)_r __attribute__((swift_name("withR(_r:)")));
@property (readonly) float a __attribute__((swift_name("a")));
@property (readonly) float b __attribute__((swift_name("b")));
@property (readonly) float g __attribute__((swift_name("g")));
@property (readonly) float r __attribute__((swift_name("r")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace")))
@interface HydraSkikoColorSpace : HydraSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoColorSpaceCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoColor4f *)convertToColor:(HydraSkikoColorSpace * _Nullable)toColor color:(HydraSkikoColor4f *)color __attribute__((swift_name("convert(toColor:color:)")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isGammaLinear __attribute__((swift_name("isGammaLinear")));
@property (readonly) BOOL isSRGB __attribute__((swift_name("isSRGB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBlendMode")))
@interface HydraSkikoBlendMode : HydraKotlinEnum<HydraSkikoBlendMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoBlendMode *clear __attribute__((swift_name("clear")));
@property (class, readonly) HydraSkikoBlendMode *src __attribute__((swift_name("src")));
@property (class, readonly) HydraSkikoBlendMode *dst __attribute__((swift_name("dst")));
@property (class, readonly) HydraSkikoBlendMode *srcOver __attribute__((swift_name("srcOver")));
@property (class, readonly) HydraSkikoBlendMode *dstOver __attribute__((swift_name("dstOver")));
@property (class, readonly) HydraSkikoBlendMode *srcIn __attribute__((swift_name("srcIn")));
@property (class, readonly) HydraSkikoBlendMode *dstIn __attribute__((swift_name("dstIn")));
@property (class, readonly) HydraSkikoBlendMode *srcOut __attribute__((swift_name("srcOut")));
@property (class, readonly) HydraSkikoBlendMode *dstOut __attribute__((swift_name("dstOut")));
@property (class, readonly) HydraSkikoBlendMode *srcAtop __attribute__((swift_name("srcAtop")));
@property (class, readonly) HydraSkikoBlendMode *dstAtop __attribute__((swift_name("dstAtop")));
@property (class, readonly) HydraSkikoBlendMode *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) HydraSkikoBlendMode *plus __attribute__((swift_name("plus")));
@property (class, readonly) HydraSkikoBlendMode *modulate __attribute__((swift_name("modulate")));
@property (class, readonly) HydraSkikoBlendMode *screen __attribute__((swift_name("screen")));
@property (class, readonly) HydraSkikoBlendMode *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) HydraSkikoBlendMode *darken __attribute__((swift_name("darken")));
@property (class, readonly) HydraSkikoBlendMode *lighten __attribute__((swift_name("lighten")));
@property (class, readonly) HydraSkikoBlendMode *colorDodge __attribute__((swift_name("colorDodge")));
@property (class, readonly) HydraSkikoBlendMode *colorBurn __attribute__((swift_name("colorBurn")));
@property (class, readonly) HydraSkikoBlendMode *hardLight __attribute__((swift_name("hardLight")));
@property (class, readonly) HydraSkikoBlendMode *softLight __attribute__((swift_name("softLight")));
@property (class, readonly) HydraSkikoBlendMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) HydraSkikoBlendMode *exclusion __attribute__((swift_name("exclusion")));
@property (class, readonly) HydraSkikoBlendMode *multiply __attribute__((swift_name("multiply")));
@property (class, readonly) HydraSkikoBlendMode *hue __attribute__((swift_name("hue")));
@property (class, readonly) HydraSkikoBlendMode *saturation __attribute__((swift_name("saturation")));
@property (class, readonly) HydraSkikoBlendMode *color __attribute__((swift_name("color")));
@property (class, readonly) HydraSkikoBlendMode *luminosity __attribute__((swift_name("luminosity")));
+ (HydraKotlinArray<HydraSkikoBlendMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoBlendMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter")))
@interface HydraSkikoColorFilter : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter")))
@interface HydraSkikoImageFilter : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoImageFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter")))
@interface HydraSkikoMaskFilter : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoMaskFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintMode")))
@interface HydraSkikoPaintMode : HydraKotlinEnum<HydraSkikoPaintMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPaintMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) HydraSkikoPaintMode *stroke __attribute__((swift_name("stroke")));
@property (class, readonly) HydraSkikoPaintMode *strokeAndFill __attribute__((swift_name("strokeAndFill")));
+ (HydraKotlinArray<HydraSkikoPaintMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPaintMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect")))
@interface HydraSkikoPathEffect : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPathEffectCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoPathEffect *)makeComposeInner:(HydraSkikoPathEffect * _Nullable)inner __attribute__((swift_name("makeCompose(inner:)")));
- (HydraSkikoPathEffect *)makeSumSecond:(HydraSkikoPathEffect * _Nullable)second __attribute__((swift_name("makeSum(second:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeCap")))
@interface HydraSkikoPaintStrokeCap : HydraKotlinEnum<HydraSkikoPaintStrokeCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPaintStrokeCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) HydraSkikoPaintStrokeCap *round __attribute__((swift_name("round")));
@property (class, readonly) HydraSkikoPaintStrokeCap *square __attribute__((swift_name("square")));
+ (HydraKotlinArray<HydraSkikoPaintStrokeCap *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPaintStrokeCap *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeJoin")))
@interface HydraSkikoPaintStrokeJoin : HydraKotlinEnum<HydraSkikoPaintStrokeJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPaintStrokeJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) HydraSkikoPaintStrokeJoin *round __attribute__((swift_name("round")));
@property (class, readonly) HydraSkikoPaintStrokeJoin *bevel __attribute__((swift_name("bevel")));
+ (HydraKotlinArray<HydraSkikoPaintStrokeJoin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPaintStrokeJoin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsColorFilter.Companion")))
@interface HydraUi_graphicsColorFilterCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraUi_graphicsColorFilterCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsColorFilter *)colorMatrixColorMatrix:(id)colorMatrix __attribute__((swift_name("colorMatrix(colorMatrix:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsColorFilter *)lightingMultiply:(uint64_t)multiply add:(uint64_t)add __attribute__((swift_name("lighting(multiply:add:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (HydraUi_graphicsColorFilter *)tintColor:(uint64_t)color blendMode:(int32_t)blendMode __attribute__((swift_name("tint(color:blendMode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader.Companion")))
@interface HydraSkikoShaderCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoShaderCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoShader *)makeBlendMode:(HydraSkikoBlendMode *)mode dst:(HydraSkikoShader * _Nullable)dst src:(HydraSkikoShader * _Nullable)src __attribute__((swift_name("makeBlend(mode:dst:src:)")));
- (HydraSkikoShader *)makeColorColor:(int32_t)color __attribute__((swift_name("makeColor(color:)")));
- (HydraSkikoShader *)makeColorColor:(HydraSkikoColor4f *)color space:(HydraSkikoColorSpace * _Nullable)space __attribute__((swift_name("makeColor(color:space:)")));
- (HydraSkikoShader *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (HydraSkikoShader *)makeFractalNoiseBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(HydraSkikoISize *)tileSize __attribute__((swift_name("makeFractalNoise(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (HydraSkikoShader *)makeLinearGradientP0:(HydraSkikoPoint *)p0 p1:(HydraSkikoPoint *)p1 colors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeLinearGradient(p0:p1:colors:)")));
- (HydraSkikoShader *)makeLinearGradientP0:(HydraSkikoPoint *)p0 p1:(HydraSkikoPoint *)p1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:)")));
- (HydraSkikoShader *)makeLinearGradientP0:(HydraSkikoPoint *)p0 p1:(HydraSkikoPoint *)p1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:style:)")));
- (HydraSkikoShader *)makeLinearGradientP0:(HydraSkikoPoint *)p0 p1:(HydraSkikoPoint *)p1 colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:positions:style:)")));
- (HydraSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeRadialGradientCenter:(HydraSkikoPoint *)center r:(float)r colors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeRadialGradient(center:r:colors:)")));
- (HydraSkikoShader *)makeRadialGradientCenter:(HydraSkikoPoint *)center r:(float)r colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:)")));
- (HydraSkikoShader *)makeRadialGradientCenter:(HydraSkikoPoint *)center r:(float)r colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:style:)")));
- (HydraSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:positions:style:)")));
- (HydraSkikoShader *)makeRadialGradientCenter:(HydraSkikoPoint *)center r:(float)r colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientCenter:(HydraSkikoPoint *)center colors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(center:colors:)")));
- (HydraSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(x:y:colors:)")));
- (HydraSkikoShader *)makeSweepGradientCenter:(HydraSkikoPoint *)center colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(center:colors:positions:)")));
- (HydraSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:)")));
- (HydraSkikoShader *)makeSweepGradientCenter:(HydraSkikoPoint *)center colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:colors:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientCenter:(HydraSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientCenter:(HydraSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeTurbulenceBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(HydraSkikoISize *)tileSize __attribute__((swift_name("makeTurbulence(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientP0:(HydraSkikoPoint *)p0 r0:(float)r0 p1:(HydraSkikoPoint *)p1 r1:(float)r1 colors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientP0:(HydraSkikoPoint *)p0 r0:(float)r0 p1:(HydraSkikoPoint *)p1 r1:(float)r1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientP0:(HydraSkikoPoint *)p0 r0:(float)r0 p1:(HydraSkikoPoint *)p1 r1:(float)r1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:style:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientP0:(HydraSkikoPoint *)p0 r0:(float)r0 p1:(HydraSkikoPoint *)p1 r1:(float)r1 colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:cs:positions:style:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(HydraKotlinIntArray *)colors positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:positions:style:)")));
- (HydraSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors cs:(HydraSkikoColorSpace * _Nullable)cs positions:(HydraKotlinFloatArray * _Nullable)positions style:(HydraSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:cs:positions:style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface HydraKotlinFloatArray : HydraBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(HydraFloat *(^)(HydraInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (HydraKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f.Companion")))
@interface HydraSkikoColor4fCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoColor4fCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinFloatArray *)flattenArrayColors:(HydraKotlinArray<HydraSkikoColor4f *> *)colors __attribute__((swift_name("flattenArray(colors:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace.Companion")))
@interface HydraSkikoColorSpaceCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoColorSpaceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoColorSpace *displayP3 __attribute__((swift_name("displayP3")));
@property (readonly) HydraSkikoColorSpace *sRGB __attribute__((swift_name("sRGB")));
@property (readonly) HydraSkikoColorSpace *sRGBLinear __attribute__((swift_name("sRGBLinear")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter.Companion")))
@interface HydraSkikoColorFilterCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoColorFilterCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoColorFilter *)makeBlendColor:(int32_t)color mode:(HydraSkikoBlendMode *)mode __attribute__((swift_name("makeBlend(color:mode:)")));
- (HydraSkikoColorFilter *)makeComposedOuter:(HydraSkikoColorFilter * _Nullable)outer inner:(HydraSkikoColorFilter * _Nullable)inner __attribute__((swift_name("makeComposed(outer:inner:)")));
- (HydraSkikoColorFilter *)makeHSLAMatrixMatrix:(HydraSkikoColorMatrix *)matrix __attribute__((swift_name("makeHSLAMatrix(matrix:)")));
- (HydraSkikoColorFilter *)makeHighContrastGrayscale:(BOOL)grayscale mode:(HydraSkikoInversionMode *)mode contrast:(float)contrast __attribute__((swift_name("makeHighContrast(grayscale:mode:contrast:)")));
- (HydraSkikoColorFilter *)makeLerpDst:(HydraSkikoColorFilter * _Nullable)dst src:(HydraSkikoColorFilter * _Nullable)src t:(float)t __attribute__((swift_name("makeLerp(dst:src:t:)")));
- (HydraSkikoColorFilter *)makeLightingColorMul:(int32_t)colorMul colorAdd:(int32_t)colorAdd __attribute__((swift_name("makeLighting(colorMul:colorAdd:)")));
- (HydraSkikoColorFilter *)makeMatrixMatrix:(HydraSkikoColorMatrix *)matrix __attribute__((swift_name("makeMatrix(matrix:)")));
- (HydraSkikoColorFilter *)makeOverdrawColors:(HydraKotlinIntArray *)colors __attribute__((swift_name("makeOverdraw(colors:)")));
- (HydraSkikoColorFilter *)makeTableTable:(HydraKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
- (HydraSkikoColorFilter *)makeTableARGBA:(HydraKotlinByteArray * _Nullable)a r:(HydraKotlinByteArray * _Nullable)r g:(HydraKotlinByteArray * _Nullable)g b:(HydraKotlinByteArray * _Nullable)b __attribute__((swift_name("makeTableARGB(a:r:g:b:)")));
@property (readonly) HydraSkikoColorFilter *luma __attribute__((swift_name("luma")));
@property (readonly) HydraSkikoColorFilter *sRGBToLinearGamma __attribute__((swift_name("sRGBToLinearGamma")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter.Companion")))
@interface HydraSkikoImageFilterCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoImageFilterCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoImageFilter *)makeArithmeticK1:(float)k1 k2:(float)k2 k3:(float)k3 k4:(float)k4 enforcePMColor:(BOOL)enforcePMColor bg:(HydraSkikoImageFilter * _Nullable)bg fg:(HydraSkikoImageFilter * _Nullable)fg crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeArithmetic(k1:k2:k3:k4:enforcePMColor:bg:fg:crop:)")));
- (HydraSkikoImageFilter *)makeBlendBlendMode:(HydraSkikoBlendMode *)blendMode bg:(HydraSkikoImageFilter * _Nullable)bg fg:(HydraSkikoImageFilter * _Nullable)fg crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlend(blendMode:bg:fg:crop:)")));
- (HydraSkikoImageFilter *)makeBlurSigmaX:(float)sigmaX sigmaY:(float)sigmaY mode:(HydraSkikoFilterTileMode *)mode input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlur(sigmaX:sigmaY:mode:input:crop:)")));
- (HydraSkikoImageFilter *)makeColorFilterF:(HydraSkikoColorFilter * _Nullable)f input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeColorFilter(f:input:crop:)")));
- (HydraSkikoImageFilter *)makeComposeOuter:(HydraSkikoImageFilter * _Nullable)outer inner:(HydraSkikoImageFilter * _Nullable)inner __attribute__((swift_name("makeCompose(outer:inner:)")));
- (HydraSkikoImageFilter *)makeDilateRx:(float)rx ry:(float)ry input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDilate(rx:ry:input:crop:)")));
- (HydraSkikoImageFilter *)makeDisplacementMapX:(HydraSkikoColorChannel *)x y:(HydraSkikoColorChannel *)y scale:(float)scale displacement:(HydraSkikoImageFilter * _Nullable)displacement color:(HydraSkikoImageFilter * _Nullable)color crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDisplacementMap(x:y:scale:displacement:color:crop:)")));
- (HydraSkikoImageFilter *)makeDistantLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (HydraSkikoImageFilter *)makeDistantLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (HydraSkikoImageFilter *)makeDropShadowDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadow(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (HydraSkikoImageFilter *)makeDropShadowOnlyDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadowOnly(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (HydraSkikoImageFilter *)makeErodeRx:(float)rx ry:(float)ry input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeErode(rx:ry:input:crop:)")));
- (HydraSkikoImageFilter *)makeImageImage:(HydraSkikoImage *)image __attribute__((swift_name("makeImage(image:)")));
- (HydraSkikoImageFilter *)makeImageImage:(HydraSkikoImage * _Nullable)image src:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst mode:(id<HydraSkikoSamplingMode>)mode __attribute__((swift_name("makeImage(image:src:dst:mode:)")));
- (HydraSkikoImageFilter *)makeMagnifierR:(HydraSkikoRect *)r zoomAmount:(float)zoomAmount inset:(float)inset samplingMode:(id<HydraSkikoSamplingMode>)samplingMode input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMagnifier(r:zoomAmount:inset:samplingMode:input:crop:)")));
- (HydraSkikoImageFilter *)makeMatrixConvolutionKernelW:(int32_t)kernelW kernelH:(int32_t)kernelH kernel:(HydraKotlinFloatArray * _Nullable)kernel gain:(float)gain bias:(float)bias offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY tileMode:(HydraSkikoFilterTileMode *)tileMode convolveAlpha:(BOOL)convolveAlpha input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMatrixConvolution(kernelW:kernelH:kernel:gain:bias:offsetX:offsetY:tileMode:convolveAlpha:input:crop:)")));
- (HydraSkikoImageFilter *)makeMatrixTransformMatrix:(HydraSkikoMatrix33 *)matrix mode:(id<HydraSkikoSamplingMode>)mode input:(HydraSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeMatrixTransform(matrix:mode:input:)")));
- (HydraSkikoImageFilter *)makeMergeFilters:(HydraKotlinArray<HydraSkikoImageFilter *> *)filters crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMerge(filters:crop:)")));
- (HydraSkikoImageFilter *)makeOffsetDx:(float)dx dy:(float)dy input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeOffset(dx:dy:input:crop:)")));
- (HydraSkikoImageFilter *)makePointLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (HydraSkikoImageFilter *)makePointLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (HydraSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(HydraSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderNames:(HydraKotlinArray<NSString *> *)shaderNames inputs:(HydraKotlinArray<HydraSkikoImageFilter *> *)inputs __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderNames:inputs:)")));
- (HydraSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(HydraSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderName:(NSString *)shaderName input:(HydraSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderName:input:)")));
- (HydraSkikoImageFilter *)makeShaderShader:(HydraSkikoShader *)shader dither:(BOOL)dither crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeShader(shader:dither:crop:)")));
- (HydraSkikoImageFilter *)makeSpotLitDiffuseX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitDiffuse(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:kd:input:crop:)")));
- (HydraSkikoImageFilter *)makeSpotLitSpecularX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(HydraSkikoImageFilter * _Nullable)input crop:(HydraSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitSpecular(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (HydraSkikoImageFilter *)makeTileSrc:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst input:(HydraSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeTile(src:dst:input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter.Companion")))
@interface HydraSkikoMaskFilterCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoMaskFilterCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoMaskFilter *)makeBlurMode:(HydraSkikoFilterBlurMode *)mode sigma:(float)sigma respectCTM:(BOOL)respectCTM __attribute__((swift_name("makeBlur(mode:sigma:respectCTM:)")));
- (HydraSkikoMaskFilter *)makeClipMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("makeClip(min:max:)")));
- (HydraSkikoMaskFilter *)makeGammaGamma:(float)gamma __attribute__((swift_name("makeGamma(gamma:)")));
- (HydraSkikoMaskFilter *)makeShaderS:(HydraSkikoShader * _Nullable)s __attribute__((swift_name("makeShader(s:)")));
- (HydraSkikoMaskFilter *)makeTableTable:(HydraKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Companion")))
@interface HydraSkikoPathEffectCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPathEffectCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoPathEffect *)makeCornerRadius:(float)radius __attribute__((swift_name("makeCorner(radius:)")));
- (HydraSkikoPathEffect *)makeDashIntervals:(HydraKotlinFloatArray *)intervals phase:(float)phase __attribute__((swift_name("makeDash(intervals:phase:)")));
- (HydraSkikoPathEffect *)makeDiscreteSegLength:(float)segLength dev:(float)dev seed:(int32_t)seed __attribute__((swift_name("makeDiscrete(segLength:dev:seed:)")));
- (HydraSkikoPathEffect *)makeLine2DWidth:(float)width matrix:(HydraSkikoMatrix33 *)matrix __attribute__((swift_name("makeLine2D(width:matrix:)")));
- (HydraSkikoPathEffect *)makePath1DPath:(HydraSkikoPath *)path advance:(float)advance phase:(float)phase style:(HydraSkikoPathEffectStyle *)style __attribute__((swift_name("makePath1D(path:advance:phase:style:)")));
- (HydraSkikoPathEffect *)makePath2DMatrix:(HydraSkikoMatrix33 *)matrix path:(HydraSkikoPath *)path __attribute__((swift_name("makePath2D(matrix:path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize")))
@interface HydraSkikoISize : HydraBase
@property (class, readonly, getter=companion) HydraSkikoISizeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)area __attribute__((swift_name("area()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isZero __attribute__((swift_name("isZero()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint")))
@interface HydraSkikoPoint : HydraBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoPoint *)offsetVec:(HydraSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (HydraSkikoPoint *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (HydraSkikoPoint *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (HydraSkikoPoint *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface HydraKotlinIntArray : HydraBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(HydraInt *(^)(HydraInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (HydraKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle")))
@interface HydraSkikoGradientStyle : HydraBase
- (instancetype)initWithTileMode:(HydraSkikoFilterTileMode *)tileMode isPremul:(BOOL)isPremul localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("init(tileMode:isPremul:localMatrix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoGradientStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoGradientStyle *)withLocalMatrix_localMatrix:(HydraSkikoMatrix33 *)_localMatrix __attribute__((swift_name("withLocalMatrix(_localMatrix:)")));
- (HydraSkikoGradientStyle *)withPremul_premul:(BOOL)_premul __attribute__((swift_name("withPremul(_premul:)")));
- (HydraSkikoGradientStyle *)withTileMode_tileMode:(HydraSkikoFilterTileMode *)_tileMode __attribute__((swift_name("withTileMode(_tileMode:)")));
@property (readonly) BOOL isPremul __attribute__((swift_name("isPremul")));
@property (readonly) HydraSkikoMatrix33 * _Nullable localMatrix __attribute__((swift_name("localMatrix")));
@property (readonly) HydraSkikoFilterTileMode *tileMode __attribute__((swift_name("tileMode")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface HydraKotlinFloatIterator : HydraBase <HydraKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HydraFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorMatrix")))
@interface HydraSkikoColorMatrix : HydraBase
- (instancetype)initWithMat:(HydraKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoInversionMode")))
@interface HydraSkikoInversionMode : HydraKotlinEnum<HydraSkikoInversionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoInversionMode *no __attribute__((swift_name("no")));
@property (class, readonly) HydraSkikoInversionMode *brightness __attribute__((swift_name("brightness")));
@property (class, readonly) HydraSkikoInversionMode *lightness __attribute__((swift_name("lightness")));
+ (HydraKotlinArray<HydraSkikoInversionMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoInversionMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface HydraKotlinByteArray : HydraBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(HydraByte *(^)(HydraInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (HydraKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect")))
@interface HydraSkikoIRect : HydraBase
@property (class, readonly, getter=companion) HydraSkikoIRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoIRect * _Nullable)intersectOther:(HydraSkikoIRect *)other __attribute__((swift_name("intersect(other:)")));
- (HydraSkikoIRect *)offsetVec:(HydraSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (HydraSkikoIRect *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (HydraSkikoRect *)toRect __attribute__((swift_name("toRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterTileMode")))
@interface HydraSkikoFilterTileMode : HydraKotlinEnum<HydraSkikoFilterTileMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFilterTileMode *clamp __attribute__((swift_name("clamp")));
@property (class, readonly) HydraSkikoFilterTileMode *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) HydraSkikoFilterTileMode *mirror __attribute__((swift_name("mirror")));
@property (class, readonly) HydraSkikoFilterTileMode *decal __attribute__((swift_name("decal")));
+ (HydraKotlinArray<HydraSkikoFilterTileMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFilterTileMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorChannel")))
@interface HydraSkikoColorChannel : HydraKotlinEnum<HydraSkikoColorChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoColorChannel *r __attribute__((swift_name("r")));
@property (class, readonly) HydraSkikoColorChannel *g __attribute__((swift_name("g")));
@property (class, readonly) HydraSkikoColorChannel *b __attribute__((swift_name("b")));
@property (class, readonly) HydraSkikoColorChannel *a __attribute__((swift_name("a")));
+ (HydraKotlinArray<HydraSkikoColorChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoColorChannel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SkikoIHasImageInfo")))
@protocol HydraSkikoIHasImageInfo
@required
@property (readonly) HydraSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) HydraSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) HydraSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) HydraSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) HydraSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage")))
@interface HydraSkikoImage : HydraSkikoRefCnt <HydraSkikoIHasImageInfo>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoImageCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoData * _Nullable)encodeToDataFormat:(HydraSkikoEncodedImageFormat *)format quality:(int32_t)quality __attribute__((swift_name("encodeToData(format:quality:)")));
- (HydraSkikoShader *)makeShaderLocalMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (HydraSkikoShader *)makeShaderTmx:(HydraSkikoFilterTileMode *)tmx tmy:(HydraSkikoFilterTileMode *)tmy localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (HydraSkikoShader *)makeShaderTmx:(HydraSkikoFilterTileMode *)tmx tmy:(HydraSkikoFilterTileMode *)tmy sampling:(id<HydraSkikoSamplingMode>)sampling localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (HydraSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (BOOL)peekPixelsPixmap:(HydraSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsDst:(HydraSkikoBitmap *)dst __attribute__((swift_name("readPixels(dst:)")));
- (BOOL)readPixelsContext:(HydraSkikoDirectContext *)context dst:(HydraSkikoBitmap *)dst __attribute__((swift_name("readPixels(context:dst:)")));
- (BOOL)readPixelsDst:(HydraSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dst:srcX:srcY:)")));
- (BOOL)readPixelsContext:(HydraSkikoDirectContext *)context dst:(HydraSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(context:dst:srcX:srcY:)")));
- (BOOL)readPixelsDst:(HydraSkikoPixmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(dst:srcX:srcY:cache:)")));
- (BOOL)readPixelsContext:(HydraSkikoDirectContext * _Nullable)context dst:(HydraSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(context:dst:srcX:srcY:cache:)")));
- (BOOL)scalePixelsDst:(HydraSkikoPixmap *)dst samplingMode:(id<HydraSkikoSamplingMode>)samplingMode cache:(BOOL)cache __attribute__((swift_name("scalePixels(dst:samplingMode:cache:)")));
@property (readonly) HydraSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@end

__attribute__((swift_name("SkikoRect")))
@interface HydraSkikoRect : HydraBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (HydraSkikoRect * _Nullable)intersectOther:(HydraSkikoRect *)other __attribute__((swift_name("intersect(other:)")));
- (HydraSkikoRect *)offsetVec:(HydraSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (HydraSkikoRect *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (HydraSkikoRect *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (HydraSkikoRect *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (HydraSkikoIRect *)toIRect __attribute__((swift_name("toIRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float height_ __attribute__((swift_name("height_")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) float width_ __attribute__((swift_name("width_")));
@end

__attribute__((swift_name("SkikoSamplingMode")))
@protocol HydraSkikoSamplingMode
@required
- (int64_t)_pack __attribute__((swift_name("_pack()"))) __attribute__((deprecated("Long can't be used because Long is an object in kotlin/js. Consider using _packedInt1 and _packedInt2")));
- (int32_t)_packedInt1 __attribute__((swift_name("_packedInt1()")));
- (int32_t)_packedInt2 __attribute__((swift_name("_packedInt2()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33")))
@interface HydraSkikoMatrix33 : HydraBase
- (instancetype)initWithMat:(HydraKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoMatrix33Companion *companion __attribute__((swift_name("companion")));
- (HydraSkikoMatrix44 *)asMatrix44 __attribute__((swift_name("asMatrix44()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoMatrix33 *)makeConcatOther:(HydraSkikoMatrix33 *)other __attribute__((swift_name("makeConcat(other:)")));
- (HydraSkikoMatrix33 *)makePreScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makePreScale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder")))
@interface HydraSkikoRuntimeShaderBuilder : HydraSkikoManaged
- (instancetype)initWithEffect:(HydraSkikoRuntimeEffect *)effect __attribute__((swift_name("init(effect:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoRuntimeShaderBuilderCompanion *companion __attribute__((swift_name("companion")));
- (void)childName:(NSString *)name colorFilter:(HydraSkikoColorFilter *)colorFilter __attribute__((swift_name("child(name:colorFilter:)")));
- (void)childName:(NSString *)name shader:(HydraSkikoShader *)shader __attribute__((swift_name("child(name:shader:)")));
- (HydraSkikoShader *)makeShaderLocalMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (void)uniformName:(NSString *)name value:(float)value __attribute__((swift_name("uniform(name:value:)")));
- (void)uniformName:(NSString *)name value_:(HydraKotlinFloatArray *)value __attribute__((swift_name("uniform(name:value_:)")));
- (void)uniformName:(NSString *)name value__:(int32_t)value __attribute__((swift_name("uniform(name:value__:)")));
- (void)uniformName:(NSString *)name value___:(HydraSkikoMatrix22 *)value __attribute__((swift_name("uniform(name:value___:)")));
- (void)uniformName:(NSString *)name value____:(HydraSkikoMatrix33 *)value __attribute__((swift_name("uniform(name:value____:)")));
- (void)uniformName:(NSString *)name value_____:(HydraSkikoMatrix44 *)value __attribute__((swift_name("uniform(name:value_____:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 __attribute__((swift_name("uniform(name:value1:value2:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2_:(int32_t)value2 __attribute__((swift_name("uniform(name:value1:value2_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 __attribute__((swift_name("uniform(name:value1:value2:value3:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3_:(int32_t)value3 __attribute__((swift_name("uniform(name:value1:value2:value3_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 value4:(float)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3:(int32_t)value3 value4_:(int32_t)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterBlurMode")))
@interface HydraSkikoFilterBlurMode : HydraKotlinEnum<HydraSkikoFilterBlurMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFilterBlurMode *normal __attribute__((swift_name("normal")));
@property (class, readonly) HydraSkikoFilterBlurMode *solid __attribute__((swift_name("solid")));
@property (class, readonly) HydraSkikoFilterBlurMode *outer __attribute__((swift_name("outer")));
@property (class, readonly) HydraSkikoFilterBlurMode *inner __attribute__((swift_name("inner")));
+ (HydraKotlinArray<HydraSkikoFilterBlurMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFilterBlurMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath")))
@interface HydraSkikoPath : HydraSkikoManaged <HydraKotlinIterable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPathCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoPath *)addArcOval:(HydraSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle __attribute__((swift_name("addArc(oval:startAngle:sweepAngle:)")));
- (HydraSkikoPath *)addCircleX:(float)x y:(float)y radius:(float)radius dir:(HydraSkikoPathDirection *)dir __attribute__((swift_name("addCircle(x:y:radius:dir:)")));
- (HydraSkikoPath *)addOvalOval:(HydraSkikoRect *)oval dir:(HydraSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addOval(oval:dir:start:)")));
- (HydraSkikoPath *)addPathSrc:(HydraSkikoPath * _Nullable)src extend:(BOOL)extend __attribute__((swift_name("addPath(src:extend:)")));
- (HydraSkikoPath *)addPathSrc:(HydraSkikoPath * _Nullable)src matrix:(HydraSkikoMatrix33 *)matrix extend:(BOOL)extend __attribute__((swift_name("addPath(src:matrix:extend:)")));
- (HydraSkikoPath *)addPathSrc:(HydraSkikoPath * _Nullable)src dx:(float)dx dy:(float)dy extend:(BOOL)extend __attribute__((swift_name("addPath(src:dx:dy:extend:)")));
- (HydraSkikoPath *)addPolyPts:(HydraKotlinArray<HydraSkikoPoint *> *)pts close:(BOOL)close __attribute__((swift_name("addPoly(pts:close:)")));
- (HydraSkikoPath *)addPolyPts:(HydraKotlinFloatArray *)pts close_:(BOOL)close __attribute__((swift_name("addPoly(pts:close_:)")));
- (HydraSkikoPath *)addRRectRrect:(HydraSkikoRRect *)rrect dir:(HydraSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRRect(rrect:dir:start:)")));
- (HydraSkikoPath *)addRectRect:(HydraSkikoRect *)rect dir:(HydraSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRect(rect:dir:start:)")));
- (HydraSkikoPath *)arcToOval:(HydraSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcTo(oval:startAngle:sweepAngle:forceMoveTo:)")));
- (HydraSkikoPath *)closePath __attribute__((swift_name("closePath()")));
- (HydraSkikoRect *)computeTightBounds __attribute__((swift_name("computeTightBounds()")));
- (HydraSkikoPath *)conicToP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 w:(float)w __attribute__((swift_name("conicTo(p1:p2:w:)")));
- (HydraSkikoPath *)conicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 w:(float)w __attribute__((swift_name("conicTo(x1:y1:x2:y2:w:)")));
- (BOOL)conservativelyContainsRectRect:(HydraSkikoRect *)rect __attribute__((swift_name("conservativelyContainsRect(rect:)")));
- (BOOL)containsP:(HydraSkikoPoint *)p __attribute__((swift_name("contains(p:)")));
- (BOOL)containsX:(float)x y:(float)y __attribute__((swift_name("contains(x:y:)")));
- (HydraSkikoPath *)cubicToP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 p3:(HydraSkikoPoint *)p3 __attribute__((swift_name("cubicTo(p1:p2:p3:)")));
- (HydraSkikoPath *)cubicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 __attribute__((swift_name("cubicTo(x1:y1:x2:y2:x3:y3:)")));
- (HydraSkikoPath *)dump __attribute__((swift_name("dump()")));
- (HydraSkikoPath *)dumpHex __attribute__((swift_name("dumpHex()")));
- (HydraSkikoPath *)ellipticalArcToR:(HydraSkikoPoint *)r xAxisRotate:(float)xAxisRotate arc:(HydraSkikoPathEllipseArc *)arc direction:(HydraSkikoPathDirection *)direction xy:(HydraSkikoPoint *)xy __attribute__((swift_name("ellipticalArcTo(r:xAxisRotate:arc:direction:xy:)")));
- (HydraSkikoPath *)ellipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(HydraSkikoPathEllipseArc *)arc direction:(HydraSkikoPathDirection *)direction x:(float)x y:(float)y __attribute__((swift_name("ellipticalArcTo(rx:ry:xAxisRotate:arc:direction:x:y:)")));
- (HydraSkikoPoint *)getPointIndex:(int32_t)index __attribute__((swift_name("getPoint(index:)")));
- (int32_t)getPointsPoints:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)points max:(int32_t)max __attribute__((swift_name("getPoints(points:max:)")));
- (int32_t)getVerbsVerbs:(HydraKotlinArray<HydraSkikoPathVerb *> * _Nullable)verbs max:(int32_t)max __attribute__((swift_name("getVerbs(verbs:max:)")));
- (HydraSkikoPath *)incReserveExtraPtCount:(int32_t)extraPtCount __attribute__((swift_name("incReserve(extraPtCount:)")));
- (BOOL)isInterpolatableCompare:(HydraSkikoPath * _Nullable)compare __attribute__((swift_name("isInterpolatable(compare:)")));
- (HydraSkikoPathSegmentIterator *)iterator __attribute__((swift_name("iterator()")));
- (HydraSkikoPathSegmentIterator *)iteratorForceClose:(BOOL)forceClose __attribute__((swift_name("iterator(forceClose:)")));
- (HydraSkikoPath *)lineToP:(HydraSkikoPoint *)p __attribute__((swift_name("lineTo(p:)")));
- (HydraSkikoPath *)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (HydraSkikoPath *)makeLerpEnding:(HydraSkikoPath * _Nullable)ending weight:(float)weight __attribute__((swift_name("makeLerp(ending:weight:)")));
- (HydraSkikoPath *)moveToP:(HydraSkikoPoint *)p __attribute__((swift_name("moveTo(p:)")));
- (HydraSkikoPath *)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));
- (HydraSkikoPath *)offsetDx:(float)dx dy:(float)dy dst:(HydraSkikoPath * _Nullable)dst __attribute__((swift_name("offset(dx:dy:dst:)")));
- (HydraSkikoPath *)quadToP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 __attribute__((swift_name("quadTo(p1:p2:)")));
- (HydraSkikoPath *)quadToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadTo(x1:y1:x2:y2:)")));
- (HydraSkikoPath *)rConicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 w:(float)w __attribute__((swift_name("rConicTo(dx1:dy1:dx2:dy2:w:)")));
- (HydraSkikoPath *)rCubicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 dx3:(float)dx3 dy3:(float)dy3 __attribute__((swift_name("rCubicTo(dx1:dy1:dx2:dy2:dx3:dy3:)")));
- (HydraSkikoPath *)rEllipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(HydraSkikoPathEllipseArc *)arc direction:(HydraSkikoPathDirection *)direction dx:(float)dx dy:(float)dy __attribute__((swift_name("rEllipticalArcTo(rx:ry:xAxisRotate:arc:direction:dx:dy:)")));
- (HydraSkikoPath *)rLineToDx:(float)dx dy:(float)dy __attribute__((swift_name("rLineTo(dx:dy:)")));
- (HydraSkikoPath *)rMoveToDx:(float)dx dy:(float)dy __attribute__((swift_name("rMoveTo(dx:dy:)")));
- (HydraSkikoPath *)rQuadToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("rQuadTo(dx1:dy1:dx2:dy2:)")));
- (HydraSkikoPath *)reset __attribute__((swift_name("reset()")));
- (HydraSkikoPath *)reverseAddPathSrc:(HydraSkikoPath * _Nullable)src __attribute__((swift_name("reverseAddPath(src:)")));
- (HydraSkikoPath *)rewind __attribute__((swift_name("rewind()")));
- (HydraKotlinByteArray *)serializeToBytes __attribute__((swift_name("serializeToBytes()")));
- (HydraSkikoPath *)setLastPtX:(float)x y:(float)y __attribute__((swift_name("setLastPt(x:y:)")));
- (HydraSkikoPath *)setVolatileIsVolatile:(BOOL)isVolatile __attribute__((swift_name("setVolatile(isVolatile:)")));
- (HydraSkikoPath *)swapOther:(HydraSkikoPath * _Nullable)other __attribute__((swift_name("swap(other:)")));
- (HydraSkikoPath *)tangentArcToP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 radius:(float)radius __attribute__((swift_name("tangentArcTo(p1:p2:radius:)")));
- (HydraSkikoPath *)tangentArcToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 radius:(float)radius __attribute__((swift_name("tangentArcTo(x1:y1:x2:y2:radius:)")));
- (HydraSkikoPath *)transformMatrix:(HydraSkikoMatrix33 *)matrix applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:applyPerspectiveClip:)")));
- (HydraSkikoPath *)transformMatrix:(HydraSkikoMatrix33 *)matrix dst:(HydraSkikoPath * _Nullable)dst applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:dst:applyPerspectiveClip:)")));
- (HydraSkikoPath *)updateBoundsCache __attribute__((swift_name("updateBoundsCache()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) HydraKotlinArray<HydraSkikoPoint *> * _Nullable asLine __attribute__((swift_name("asLine")));
@property (readonly) HydraSkikoRect *bounds __attribute__((swift_name("bounds")));
@property HydraSkikoPathFillMode *fillMode __attribute__((swift_name("fillMode")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) BOOL isConvex __attribute__((swift_name("isConvex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isLastContourClosed __attribute__((swift_name("isLastContourClosed")));
@property (readonly) HydraSkikoRect * _Nullable isOval __attribute__((swift_name("isOval")));
@property (readonly) HydraSkikoRRect * _Nullable isRRect __attribute__((swift_name("isRRect")));
@property (readonly) HydraSkikoRect * _Nullable isRect __attribute__((swift_name("isRect")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property BOOL isVolatile __attribute__((swift_name("isVolatile")));
@property HydraSkikoPoint *lastPt __attribute__((swift_name("lastPt")));
@property (readonly) HydraKotlinArray<HydraSkikoPoint *> *points __attribute__((swift_name("points")));
@property (readonly) int32_t pointsCount __attribute__((swift_name("pointsCount")));
@property (readonly) int32_t segmentMasks __attribute__((swift_name("segmentMasks")));
@property (readonly) HydraKotlinArray<HydraSkikoPathVerb *> *verbs __attribute__((swift_name("verbs")));
@property (readonly) int32_t verbsCount __attribute__((swift_name("verbsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Style")))
@interface HydraSkikoPathEffectStyle : HydraKotlinEnum<HydraSkikoPathEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathEffectStyle *translate __attribute__((swift_name("translate")));
@property (class, readonly) HydraSkikoPathEffectStyle *rotate __attribute__((swift_name("rotate")));
@property (class, readonly) HydraSkikoPathEffectStyle *morph __attribute__((swift_name("morph")));
+ (HydraKotlinArray<HydraSkikoPathEffectStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathEffectStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize.Companion")))
@interface HydraSkikoISizeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoISizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoISize *)makeW:(int32_t)w h:(int32_t)h __attribute__((swift_name("make(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoISize *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint.Companion")))
@interface HydraSkikoPointCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPointCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinFloatArray * _Nullable)flattenArrayPts:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)pts __attribute__((swift_name("flattenArray(pts:)")));
- (HydraKotlinArray<HydraSkikoPoint *> * _Nullable)fromArrayPts:(HydraKotlinFloatArray * _Nullable)pts __attribute__((swift_name("fromArray(pts:)")));
@property (readonly) HydraSkikoPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface HydraKotlinIntIterator : HydraBase <HydraKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HydraInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle.Companion")))
@interface HydraSkikoGradientStyleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoGradientStyleCompanion *shared __attribute__((swift_name("shared")));
@property HydraSkikoGradientStyle *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface HydraKotlinByteIterator : HydraBase <HydraKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HydraByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect.Companion")))
@interface HydraSkikoIRectCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoIRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoIRect *)makeLTRBL:(int32_t)l t:(int32_t)t r:(int32_t)r b:(int32_t)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoIRect *)makeWHW:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoIRect *)makeXYWHL:(int32_t)l t:(int32_t)t w:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint")))
@interface HydraSkikoIPoint : HydraBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoIPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoIPoint *)offsetVec:(HydraSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (HydraSkikoIPoint *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorAlphaType")))
@interface HydraSkikoColorAlphaType : HydraKotlinEnum<HydraSkikoColorAlphaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoColorAlphaType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) HydraSkikoColorAlphaType *opaque __attribute__((swift_name("opaque")));
@property (class, readonly) HydraSkikoColorAlphaType *premul __attribute__((swift_name("premul")));
@property (class, readonly) HydraSkikoColorAlphaType *unpremul __attribute__((swift_name("unpremul")));
+ (HydraKotlinArray<HydraSkikoColorAlphaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoColorAlphaType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo")))
@interface HydraSkikoColorInfo : HydraBase
- (instancetype)initWithColorType:(HydraSkikoColorType *)colorType alphaType:(HydraSkikoColorAlphaType *)alphaType colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoColorInfoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoColorInfo *)withAlphaType_alphaType:(HydraSkikoColorAlphaType *)_alphaType __attribute__((swift_name("withAlphaType(_alphaType:)")));
- (HydraSkikoColorInfo *)withColorSpace_colorSpace:(HydraSkikoColorSpace * _Nullable)_colorSpace __attribute__((swift_name("withColorSpace(_colorSpace:)")));
- (HydraSkikoColorInfo *)withColorType_colorType:(HydraSkikoColorType *)_colorType __attribute__((swift_name("withColorType(_colorType:)")));
@property (readonly) HydraSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) HydraSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) HydraSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType")))
@interface HydraSkikoColorType : HydraKotlinEnum<HydraSkikoColorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoColorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraSkikoColorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) HydraSkikoColorType *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) HydraSkikoColorType *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) HydraSkikoColorType *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) HydraSkikoColorType *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) HydraSkikoColorType *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) HydraSkikoColorType *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) HydraSkikoColorType *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) HydraSkikoColorType *bgra1010102 __attribute__((swift_name("bgra1010102")));
@property (class, readonly) HydraSkikoColorType *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) HydraSkikoColorType *bgr101010x __attribute__((swift_name("bgr101010x")));
@property (class, readonly) HydraSkikoColorType *bgr101010xXr __attribute__((swift_name("bgr101010xXr")));
@property (class, readonly) HydraSkikoColorType *bgra10101010Xr __attribute__((swift_name("bgra10101010Xr")));
@property (class, readonly) HydraSkikoColorType *rgba10x6 __attribute__((swift_name("rgba10x6")));
@property (class, readonly) HydraSkikoColorType *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) HydraSkikoColorType *rgbaF16norm __attribute__((swift_name("rgbaF16norm")));
@property (class, readonly) HydraSkikoColorType *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) HydraSkikoColorType *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) HydraSkikoColorType *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) HydraSkikoColorType *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) HydraSkikoColorType *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) HydraSkikoColorType *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) HydraSkikoColorType *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) HydraSkikoColorType *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (HydraKotlinArray<HydraSkikoColorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoColorType *> *entries __attribute__((swift_name("entries")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (float)getAColor:(int8_t)color __attribute__((swift_name("getA(color:)")));
- (float)getAColor_:(int32_t)color __attribute__((swift_name("getA(color_:)")));
- (float)getAColor__:(int16_t)color __attribute__((swift_name("getA(color__:)")));
- (float)getBColor:(int8_t)color __attribute__((swift_name("getB(color:)")));
- (float)getBColor_:(int32_t)color __attribute__((swift_name("getB(color_:)")));
- (float)getBColor__:(int16_t)color __attribute__((swift_name("getB(color__:)")));
- (float)getGColor:(int8_t)color __attribute__((swift_name("getG(color:)")));
- (float)getGColor_:(int32_t)color __attribute__((swift_name("getG(color_:)")));
- (float)getGColor__:(int16_t)color __attribute__((swift_name("getG(color__:)")));
- (float)getRColor:(int8_t)color __attribute__((swift_name("getR(color:)")));
- (float)getRColor_:(int32_t)color __attribute__((swift_name("getR(color_:)")));
- (float)getRColor__:(int16_t)color __attribute__((swift_name("getR(color__:)")));
- (HydraSkikoColorAlphaType * _Nullable)validateAlphaTypeAlphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("validateAlphaType(alphaType:)")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) BOOL isAlwaysOpaque __attribute__((swift_name("isAlwaysOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo")))
@interface HydraSkikoImageInfo : HydraBase
- (instancetype)initWithColorInfo:(HydraSkikoColorInfo *)colorInfo width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(colorInfo:width:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(HydraSkikoColorType *)colorType alphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("init(width:height:colorType:alphaType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(HydraSkikoColorType *)colorType alphaType:(HydraSkikoColorAlphaType *)alphaType colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(width:height:colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoImageInfoCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSizeRowBytes:(int32_t)rowBytes __attribute__((swift_name("computeByteSize(rowBytes:)")));
- (int32_t)computeMinByteSize __attribute__((swift_name("computeMinByteSize()")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isRowBytesValidRowBytes:(int64_t)rowBytes __attribute__((swift_name("isRowBytesValid(rowBytes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoImageInfo *)withColorAlphaTypeAlphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("withColorAlphaType(alphaType:)")));
- (HydraSkikoImageInfo *)withColorInfo_colorInfo:(HydraSkikoColorInfo *)_colorInfo __attribute__((swift_name("withColorInfo(_colorInfo:)")));
- (HydraSkikoImageInfo *)withColorSpaceColorSpace:(HydraSkikoColorSpace *)colorSpace __attribute__((swift_name("withColorSpace(colorSpace:)")));
- (HydraSkikoImageInfo *)withColorTypeColorType:(HydraSkikoColorType *)colorType __attribute__((swift_name("withColorType(colorType:)")));
- (HydraSkikoImageInfo *)withHeight_height:(int32_t)_height __attribute__((swift_name("withHeight(_height:)")));
- (HydraSkikoImageInfo *)withWidth_width:(int32_t)_width __attribute__((swift_name("withWidth(_width:)")));
- (HydraSkikoImageInfo *)withWidthHeightWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("withWidthHeight(width:height:)")));
@property (readonly) HydraSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) HydraSkikoColorAlphaType *colorAlphaType __attribute__((swift_name("colorAlphaType")));
@property (readonly) HydraSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) HydraSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) HydraSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t minRowBytes __attribute__((swift_name("minRowBytes")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage.Companion")))
@interface HydraSkikoImageCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoImageCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoImage *)makeFromBitmapBitmap:(HydraSkikoBitmap *)bitmap __attribute__((swift_name("makeFromBitmap(bitmap:)")));
- (HydraSkikoImage *)makeFromEncodedBytes:(HydraKotlinByteArray *)bytes __attribute__((swift_name("makeFromEncoded(bytes:)")));
- (HydraSkikoImage *)makeFromPixmapPixmap:(HydraSkikoPixmap *)pixmap __attribute__((swift_name("makeFromPixmap(pixmap:)")));
- (HydraSkikoImage *)makeRasterImageInfo:(HydraSkikoImageInfo *)imageInfo bytes:(HydraKotlinByteArray *)bytes rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:bytes:rowBytes:)")));
- (HydraSkikoImage *)makeRasterImageInfo:(HydraSkikoImageInfo *)imageInfo data:(HydraSkikoData *)data rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:data:rowBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData")))
@interface HydraSkikoData : HydraSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (HydraKotlinByteArray *)getBytesOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("getBytes(offset:length:)")));
- (HydraSkikoData *)makeCopy __attribute__((swift_name("makeCopy()")));
- (HydraSkikoData *)makeSubsetOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeSubset(offset:length:)")));
- (void * _Nullable)writableData __attribute__((swift_name("writableData()")));
@property (readonly) HydraKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoEncodedImageFormat")))
@interface HydraSkikoEncodedImageFormat : HydraKotlinEnum<HydraSkikoEncodedImageFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoEncodedImageFormat *bmp __attribute__((swift_name("bmp")));
@property (class, readonly) HydraSkikoEncodedImageFormat *gif __attribute__((swift_name("gif")));
@property (class, readonly) HydraSkikoEncodedImageFormat *ico __attribute__((swift_name("ico")));
@property (class, readonly) HydraSkikoEncodedImageFormat *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) HydraSkikoEncodedImageFormat *png __attribute__((swift_name("png")));
@property (class, readonly) HydraSkikoEncodedImageFormat *wbmp __attribute__((swift_name("wbmp")));
@property (class, readonly) HydraSkikoEncodedImageFormat *webp __attribute__((swift_name("webp")));
@property (class, readonly) HydraSkikoEncodedImageFormat *pkm __attribute__((swift_name("pkm")));
@property (class, readonly) HydraSkikoEncodedImageFormat *ktx __attribute__((swift_name("ktx")));
@property (class, readonly) HydraSkikoEncodedImageFormat *astc __attribute__((swift_name("astc")));
@property (class, readonly) HydraSkikoEncodedImageFormat *dng __attribute__((swift_name("dng")));
@property (class, readonly) HydraSkikoEncodedImageFormat *heif __attribute__((swift_name("heif")));
+ (HydraKotlinArray<HydraSkikoEncodedImageFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoEncodedImageFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap")))
@interface HydraSkikoPixmap : HydraSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPixmapCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (BOOL)eraseColor:(int32_t)color subset:(HydraSkikoIRect *)subset __attribute__((swift_name("erase(color:subset:)")));
- (BOOL)extractSubsetSubsetPtr:(void * _Nullable)subsetPtr area:(HydraSkikoIRect *)area __attribute__((swift_name("extractSubset(subsetPtr:area:)")));
- (BOOL)extractSubsetSubset:(HydraSkikoPixmap *)subset area:(HydraSkikoIRect *)area __attribute__((swift_name("extractSubset(subset:area:)")));
- (void * _Nullable)getAddrX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAddr(x:y:)")));
- (float)getAlphaFX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaF(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)readPixelsPixmap:(HydraSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("readPixels(pixmap:)")));
- (BOOL)readPixelsInfo:(HydraSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes __attribute__((swift_name("readPixels(info:addr:rowBytes:)")));
- (BOOL)readPixelsPixmap:(HydraSkikoPixmap *)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (BOOL)readPixelsInfo:(HydraSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(info:addr:rowBytes:srcX:srcY:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetInfo:(HydraSkikoImageInfo *)info buffer:(HydraSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("reset(info:buffer:rowBytes:)")));
- (void)resetInfo:(HydraSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(HydraSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("reset(info:addr:rowBytes:underlyingMemoryOwner:)")));
- (BOOL)scalePixelsDstPixmap:(HydraSkikoPixmap * _Nullable)dstPixmap samplingMode:(id<HydraSkikoSamplingMode>)samplingMode __attribute__((swift_name("scalePixels(dstPixmap:samplingMode:)")));
- (void)setColorSpaceColorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColorSpace(colorSpace:)")));
@property (readonly) void * _Nullable addr __attribute__((swift_name("addr")));
@property (readonly) HydraSkikoData *buffer __attribute__((swift_name("buffer")));
@property (readonly) HydraSkikoImageInfo *info __attribute__((swift_name("info")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap")))
@interface HydraSkikoBitmap : HydraSkikoManaged <HydraSkikoIHasImageInfo>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoBitmapCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doAllocN32PixelsWidth:(int32_t)width height:(int32_t)height opaque:(BOOL)opaque __attribute__((swift_name("doAllocN32Pixels(width:height:opaque:)")));
- (BOOL)doAllocPixels __attribute__((swift_name("doAllocPixels()")));
- (BOOL)doAllocPixelsImageInfo:(HydraSkikoImageInfo *)imageInfo __attribute__((swift_name("doAllocPixels(imageInfo:)")));
- (BOOL)doAllocPixelsInfo:(HydraSkikoImageInfo *)info rowBytes:(int32_t)rowBytes __attribute__((swift_name("doAllocPixels(info:rowBytes:)")));
- (BOOL)doAllocPixelsFlagsImageInfo:(HydraSkikoImageInfo *)imageInfo zeroPixels:(BOOL)zeroPixels __attribute__((swift_name("doAllocPixelsFlags(imageInfo:zeroPixels:)")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)drawsNothing __attribute__((swift_name("drawsNothing()")));
- (HydraSkikoBitmap *)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (HydraSkikoBitmap *)eraseColor:(int32_t)color area:(HydraSkikoIRect *)area __attribute__((swift_name("erase(color:area:)")));
- (BOOL)extractAlphaDst:(HydraSkikoBitmap *)dst __attribute__((swift_name("extractAlpha(dst:)")));
- (HydraSkikoIPoint * _Nullable)extractAlphaDst:(HydraSkikoBitmap *)dst paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("extractAlpha(dst:paint:)")));
- (BOOL)extractSubsetDst:(HydraSkikoBitmap *)dst subset:(HydraSkikoIRect *)subset __attribute__((swift_name("extractSubset(dst:subset:)")));
- (float)getAlphafX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaf(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)installPixelsPixels:(HydraKotlinByteArray * _Nullable)pixels __attribute__((swift_name("installPixels(pixels:)")));
- (BOOL)installPixelsInfo:(HydraSkikoImageInfo *)info pixels:(HydraKotlinByteArray * _Nullable)pixels rowBytes:(int32_t)rowBytes __attribute__((swift_name("installPixels(info:pixels:rowBytes:)")));
- (HydraSkikoBitmap *)makeClone __attribute__((swift_name("makeClone()")));
- (HydraSkikoShader *)makeShaderLocalMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (HydraSkikoShader *)makeShaderTmx:(HydraSkikoFilterTileMode *)tmx tmy:(HydraSkikoFilterTileMode *)tmy localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (HydraSkikoShader *)makeShaderTmx:(HydraSkikoFilterTileMode *)tmx tmy:(HydraSkikoFilterTileMode *)tmy sampling:(id<HydraSkikoSamplingMode>)sampling localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (HydraSkikoBitmap *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (HydraSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (HydraKotlinByteArray * _Nullable)readPixelsDstInfo:(HydraSkikoImageInfo *)dstInfo dstRowBytes:(int32_t)dstRowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dstInfo:dstRowBytes:srcX:srcY:)")));
- (HydraSkikoBitmap *)reset __attribute__((swift_name("reset()")));
- (BOOL)setAlphaTypeAlphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("setAlphaType(alphaType:)")));
- (BOOL)setImageInfoImageInfo:(HydraSkikoImageInfo *)imageInfo __attribute__((swift_name("setImageInfo(imageInfo:)")));
- (BOOL)setImageInfoImageInfo:(HydraSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("setImageInfo(imageInfo:rowBytes:)")));
- (HydraSkikoBitmap *)setImmutable __attribute__((swift_name("setImmutable()")));
- (HydraSkikoBitmap *)setPixelRefPixelRef:(HydraSkikoPixelRef * _Nullable)pixelRef dx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("setPixelRef(pixelRef:dx:dy:)")));
- (void)swapOther:(HydraSkikoBitmap *)other __attribute__((swift_name("swap(other:)")));
@property (readonly) HydraSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) HydraSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) BOOL isReadyToDraw __attribute__((swift_name("isReadyToDraw")));
@property (readonly) HydraSkikoPixelRef * _Nullable pixelRef __attribute__((swift_name("pixelRef")));
@property (readonly) HydraSkikoIPoint *pixelRefOrigin __attribute__((swift_name("pixelRefOrigin")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@property (readonly) HydraSkikoIRect *subset __attribute__((swift_name("subset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext")))
@interface HydraSkikoDirectContext : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoDirectContextCompanion *companion __attribute__((swift_name("companion")));
- (void)abandon __attribute__((swift_name("abandon()")));
- (HydraSkikoDirectContext *)flush __attribute__((swift_name("flush()")));
- (HydraSkikoDirectContext *)flushSurface:(HydraSkikoSurface *)surface __attribute__((swift_name("flush(surface:)")));
- (void)flushAndSubmitSurface:(HydraSkikoSurface *)surface syncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(surface:syncCpu:)")));
- (HydraSkikoDirectContext *)resetAll __attribute__((swift_name("resetAll()")));
- (HydraSkikoDirectContext *)resetGLStates:(HydraKotlinArray<HydraSkikoGLBackendState *> *)states __attribute__((swift_name("resetGL(states:)")));
- (HydraSkikoDirectContext *)resetGLAll __attribute__((swift_name("resetGLAll()")));
- (void)submitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("submit(syncCpu:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRect.Companion")))
@interface HydraSkikoRectCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRect *)makeWHSize:(HydraSkikoPoint *)size __attribute__((swift_name("makeWH(size:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRect *)makeWHW:(float)w h:(float)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33.Companion")))
@interface HydraSkikoMatrix33Companion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoMatrix33Companion *shared __attribute__((swift_name("shared")));
- (HydraSkikoMatrix33 *)makeRotateDeg:(float)deg __attribute__((swift_name("makeRotate(deg:)")));
- (HydraSkikoMatrix33 *)makeRotateDeg:(float)deg pivot:(HydraSkikoPoint *)pivot __attribute__((swift_name("makeRotate(deg:pivot:)")));
- (HydraSkikoMatrix33 *)makeRotateDeg:(float)deg pivotx:(float)pivotx pivoty:(float)pivoty __attribute__((swift_name("makeRotate(deg:pivotx:pivoty:)")));
- (HydraSkikoMatrix33 *)makeScaleS:(float)s __attribute__((swift_name("makeScale(s:)")));
- (HydraSkikoMatrix33 *)makeScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makeScale(sx:sy:)")));
- (HydraSkikoMatrix33 *)makeSkewSx:(float)sx sy:(float)sy __attribute__((swift_name("makeSkew(sx:sy:)")));
- (HydraSkikoMatrix33 *)makeTranslateDx:(float)dx dy:(float)dy __attribute__((swift_name("makeTranslate(dx:dy:)")));
@property (readonly) HydraSkikoMatrix33 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44")))
@interface HydraSkikoMatrix44 : HydraBase
- (instancetype)initWithMat:(HydraKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoMatrix44Companion *companion __attribute__((swift_name("companion")));
- (HydraSkikoMatrix33 *)asMatrix33 __attribute__((swift_name("asMatrix33()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect")))
@interface HydraSkikoRuntimeEffect : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoRuntimeEffectCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoShader *)makeShaderUniforms:(HydraSkikoData * _Nullable)uniforms children:(HydraKotlinArray<HydraSkikoShader *> * _Nullable)children localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(uniforms:children:localMatrix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder.Companion")))
@interface HydraSkikoRuntimeShaderBuilderCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRuntimeShaderBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22")))
@interface HydraSkikoMatrix22 : HydraBase
- (instancetype)initWithMat:(HydraKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoMatrix22Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath.Companion")))
@interface HydraSkikoPathCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPathCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinArray<HydraSkikoPoint *> *)convertConicToQuadsP0:(HydraSkikoPoint *)p0 p1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 w:(float)w pow2:(int32_t)pow2 __attribute__((swift_name("convertConicToQuads(p0:p1:p2:w:pow2:)")));
- (BOOL)isCubicDegenerateP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 p3:(HydraSkikoPoint *)p3 p4:(HydraSkikoPoint *)p4 exact:(BOOL)exact __attribute__((swift_name("isCubicDegenerate(p1:p2:p3:p4:exact:)")));
- (BOOL)isLineDegenerateP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 exact:(BOOL)exact __attribute__((swift_name("isLineDegenerate(p1:p2:exact:)")));
- (BOOL)isQuadDegenerateP1:(HydraSkikoPoint *)p1 p2:(HydraSkikoPoint *)p2 p3:(HydraSkikoPoint *)p3 exact:(BOOL)exact __attribute__((swift_name("isQuadDegenerate(p1:p2:p3:exact:)")));
- (HydraSkikoPath * _Nullable)makeCombiningOne:(HydraSkikoPath *)one two:(HydraSkikoPath *)two op:(HydraSkikoPathOp *)op __attribute__((swift_name("makeCombining(one:two:op:)")));
- (HydraSkikoPath *)makeFromBytesData:(HydraKotlinByteArray *)data __attribute__((swift_name("makeFromBytes(data:)")));
- (HydraSkikoPath *)makeFromSVGStringSvg:(NSString *)svg __attribute__((swift_name("makeFromSVGString(svg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathDirection")))
@interface HydraSkikoPathDirection : HydraKotlinEnum<HydraSkikoPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathDirection *clockwise __attribute__((swift_name("clockwise")));
@property (class, readonly) HydraSkikoPathDirection *counterClockwise __attribute__((swift_name("counterClockwise")));
+ (HydraKotlinArray<HydraSkikoPathDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect")))
@interface HydraSkikoRRect : HydraSkikoRect
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoRRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HydraSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinFloatArray *radii __attribute__((swift_name("radii")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEllipseArc")))
@interface HydraSkikoPathEllipseArc : HydraKotlinEnum<HydraSkikoPathEllipseArc *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathEllipseArc *smaller __attribute__((swift_name("smaller")));
@property (class, readonly) HydraSkikoPathEllipseArc *larger __attribute__((swift_name("larger")));
+ (HydraKotlinArray<HydraSkikoPathEllipseArc *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathEllipseArc *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathVerb")))
@interface HydraSkikoPathVerb : HydraKotlinEnum<HydraSkikoPathVerb *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathVerb *move __attribute__((swift_name("move")));
@property (class, readonly) HydraSkikoPathVerb *line __attribute__((swift_name("line")));
@property (class, readonly) HydraSkikoPathVerb *quad __attribute__((swift_name("quad")));
@property (class, readonly) HydraSkikoPathVerb *conic __attribute__((swift_name("conic")));
@property (class, readonly) HydraSkikoPathVerb *cubic __attribute__((swift_name("cubic")));
@property (class, readonly) HydraSkikoPathVerb *close __attribute__((swift_name("close")));
@property (class, readonly) HydraSkikoPathVerb *done __attribute__((swift_name("done")));
+ (HydraKotlinArray<HydraSkikoPathVerb *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathVerb *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinMutableIterator")))
@protocol HydraKotlinMutableIterator <HydraKotlinIterator>
@required
- (void)remove __attribute__((swift_name("remove()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator")))
@interface HydraSkikoPathSegmentIterator : HydraSkikoManaged <HydraKotlinMutableIterator>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPathSegmentIteratorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (HydraSkikoPathSegment * _Nullable)next __attribute__((swift_name("next()")));
- (void)remove __attribute__((swift_name("remove()")));
@property HydraSkikoPathSegment * _Nullable _nextSegment __attribute__((swift_name("_nextSegment")));
@property (readonly) HydraSkikoPath * _Nullable _path __attribute__((swift_name("_path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathFillMode")))
@interface HydraSkikoPathFillMode : HydraKotlinEnum<HydraSkikoPathFillMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathFillMode *winding __attribute__((swift_name("winding")));
@property (class, readonly) HydraSkikoPathFillMode *evenOdd __attribute__((swift_name("evenOdd")));
@property (class, readonly) HydraSkikoPathFillMode *inverseWinding __attribute__((swift_name("inverseWinding")));
@property (class, readonly) HydraSkikoPathFillMode *inverseEvenOdd __attribute__((swift_name("inverseEvenOdd")));
+ (HydraKotlinArray<HydraSkikoPathFillMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathFillMode *> *entries __attribute__((swift_name("entries")));
- (HydraSkikoPathFillMode *)inverse __attribute__((swift_name("inverse()")));
@property (readonly) BOOL isInverse __attribute__((swift_name("isInverse")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint.Companion")))
@interface HydraSkikoIPointCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoIPointCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoIPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo.Companion")))
@interface HydraSkikoColorInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoColorInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoColorInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType.Companion")))
@interface HydraSkikoColorTypeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoColorTypeCompanion *shared __attribute__((swift_name("shared")));
@property HydraSkikoColorType *N32 __attribute__((swift_name("N32")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo.Companion")))
@interface HydraSkikoImageInfoCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoImageInfoCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoImageInfo *)createUsing_ptr:(void * _Nullable)_ptr _nGetImageInfo:(void (^)(id _Nullable, id _Nullable, id _Nullable))_nGetImageInfo __attribute__((swift_name("createUsing(_ptr:_nGetImageInfo:)")));
- (HydraSkikoImageInfo *)makeA8Width:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeA8(width:height:)")));
- (HydraSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeN32(width:height:alphaType:)")));
- (HydraSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(HydraSkikoColorAlphaType *)alphaType colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32(width:height:alphaType:colorSpace:)")));
- (HydraSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeN32Premul(width:height:)")));
- (HydraSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32Premul(width:height:colorSpace:)")));
- (HydraSkikoImageInfo *)makeS32Width:(int32_t)width height:(int32_t)height alphaType:(HydraSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeS32(width:height:alphaType:)")));
- (HydraSkikoImageInfo *)makeUnknownWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeUnknown(width:height:)")));
@property (readonly) HydraSkikoImageInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData.Companion")))
@interface HydraSkikoDataCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoDataCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoData *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (HydraSkikoData *)makeFromBytesBytes:(HydraKotlinByteArray *)bytes offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeFromBytes(bytes:offset:length:)")));
- (HydraSkikoData *)makeUninitializedLength:(int32_t)length __attribute__((swift_name("makeUninitialized(length:)")));
- (HydraSkikoData *)makeWithoutCopyMemoryAddr:(void * _Nullable)memoryAddr length:(int32_t)length underlyingMemoryOwner:(HydraSkikoManaged *)underlyingMemoryOwner __attribute__((swift_name("makeWithoutCopy(memoryAddr:length:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap.Companion")))
@interface HydraSkikoPixmapCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPixmapCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoPixmap *)makeInfo:(HydraSkikoImageInfo *)info buffer:(HydraSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("make(info:buffer:rowBytes:)")));
- (HydraSkikoPixmap *)makeInfo:(HydraSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(HydraSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("make(info:addr:rowBytes:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap.Companion")))
@interface HydraSkikoBitmapCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoBitmapCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoBitmap *)makeFromImageImage:(HydraSkikoImage *)image __attribute__((swift_name("makeFromImage(image:)")));
- (HydraSkikoBitmap *)makeFromImageImage:(HydraSkikoImage *)image context:(HydraSkikoDirectContext *)context __attribute__((swift_name("makeFromImage(image:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef")))
@interface HydraSkikoPixelRef : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPixelRefCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoPixelRef *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (HydraSkikoPixelRef *)setImmutable __attribute__((swift_name("setImmutable()")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) void * _Nullable rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext.Companion")))
@interface HydraSkikoDirectContextCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoDirectContextCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoDirectContext *)makeDirect3DAdapterPtr:(void * _Nullable)adapterPtr devicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeDirect3D(adapterPtr:devicePtr:queuePtr:)")));
- (HydraSkikoDirectContext *)makeGL __attribute__((swift_name("makeGL()")));
- (HydraSkikoDirectContext *)makeMetalDevicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeMetal(devicePtr:queuePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface")))
@interface HydraSkikoSurface : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoSurfaceCompanion *companion __attribute__((swift_name("companion")));
- (void)drawCanvas:(HydraSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:paint:)")));
- (void)drawCanvas:(HydraSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y samplingMode:(id<HydraSkikoSamplingMode>)samplingMode paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:samplingMode:paint:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)flushAndSubmit __attribute__((swift_name("flushAndSubmit()")));
- (void)flushAndSubmitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(syncCpu:)")));
- (HydraSkikoImage *)makeImageSnapshot __attribute__((swift_name("makeImageSnapshot()")));
- (HydraSkikoImage * _Nullable)makeImageSnapshotArea:(HydraSkikoIRect *)area __attribute__((swift_name("makeImageSnapshot(area:)")));
- (HydraSkikoSurface * _Nullable)makeSurfaceImageInfo:(HydraSkikoImageInfo *)imageInfo __attribute__((swift_name("makeSurface(imageInfo:)")));
- (HydraSkikoSurface * _Nullable)makeSurfaceWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeSurface(width:height:)")));
- (void)notifyContentWillChangeMode:(HydraSkikoContentChangeMode *)mode __attribute__((swift_name("notifyContentWillChange(mode:)")));
- (BOOL)peekPixelsPixmap:(HydraSkikoPixmap *)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsBitmap:(HydraSkikoBitmap * _Nullable)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (BOOL)readPixelsPixmap:(HydraSkikoPixmap * _Nullable)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (void)writePixelsBitmap:(HydraSkikoBitmap * _Nullable)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
- (void)writePixelsPixmap:(HydraSkikoPixmap * _Nullable)pixmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(pixmap:x:y:)")));
@property (readonly) HydraSkikoCanvas *canvas __attribute__((swift_name("canvas")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) HydraSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isUnique __attribute__((swift_name("isUnique")));
@property (readonly) HydraSkikoDirectContext * _Nullable recordingContext __attribute__((swift_name("recordingContext")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGLBackendState")))
@interface HydraSkikoGLBackendState : HydraKotlinEnum<HydraSkikoGLBackendState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoGLBackendState *renderTarget __attribute__((swift_name("renderTarget")));
@property (class, readonly) HydraSkikoGLBackendState *textureBinding __attribute__((swift_name("textureBinding")));
@property (class, readonly) HydraSkikoGLBackendState *view __attribute__((swift_name("view")));
@property (class, readonly) HydraSkikoGLBackendState *blend __attribute__((swift_name("blend")));
@property (class, readonly) HydraSkikoGLBackendState *msaaEnable __attribute__((swift_name("msaaEnable")));
@property (class, readonly) HydraSkikoGLBackendState *vertex __attribute__((swift_name("vertex")));
@property (class, readonly) HydraSkikoGLBackendState *stencil __attribute__((swift_name("stencil")));
@property (class, readonly) HydraSkikoGLBackendState *pixelStore __attribute__((swift_name("pixelStore")));
@property (class, readonly) HydraSkikoGLBackendState *program __attribute__((swift_name("program")));
@property (class, readonly) HydraSkikoGLBackendState *fixedFunction __attribute__((swift_name("fixedFunction")));
@property (class, readonly) HydraSkikoGLBackendState *misc __attribute__((swift_name("misc")));
@property (class, readonly) HydraSkikoGLBackendState *pathRendering __attribute__((swift_name("pathRendering")));
+ (HydraKotlinArray<HydraSkikoGLBackendState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoGLBackendState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44.Companion")))
@interface HydraSkikoMatrix44Companion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoMatrix44Companion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoMatrix44 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect.Companion")))
@interface HydraSkikoRuntimeEffectCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRuntimeEffectCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoRuntimeEffect *)makeForColorFilterSksl:(NSString *)sksl __attribute__((swift_name("makeForColorFilter(sksl:)")));
- (HydraSkikoRuntimeEffect *)makeForShaderSksl:(NSString *)sksl __attribute__((swift_name("makeForShader(sksl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22.Companion")))
@interface HydraSkikoMatrix22Companion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoMatrix22Companion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoMatrix22 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathOp")))
@interface HydraSkikoPathOp : HydraKotlinEnum<HydraSkikoPathOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPathOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) HydraSkikoPathOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) HydraSkikoPathOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) HydraSkikoPathOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) HydraSkikoPathOp *reverseDifference __attribute__((swift_name("reverseDifference")));
+ (HydraKotlinArray<HydraSkikoPathOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPathOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect.Companion")))
@interface HydraSkikoRRectCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRRect *)makeComplexLTRBL:(float)l t:(float)t r:(float)r b:(float)b radii:(HydraKotlinFloatArray *)radii __attribute__((swift_name("makeComplexLTRB(l:t:r:b:radii:)")));
- (HydraSkikoRRect *)makeComplexXYWHL:(float)l t:(float)t w:(float)w h:(float)h radii:(HydraKotlinFloatArray *)radii __attribute__((swift_name("makeComplexXYWH(l:t:w:h:radii:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b radius:(float)radius __attribute__((swift_name("makeLTRB(l:t:r:b:radius:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeLTRB(l:t:r:b:xRad:yRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeLTRB(l:t:r:b:tlRad:trRad:brRad:blRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (HydraSkikoRRect *)makeNinePatchLTRBL:(float)l t:(float)t r:(float)r b:(float)b lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchLTRB(l:t:r:b:lRad:tRad:rRad:bRad:)")));
- (HydraSkikoRRect *)makeNinePatchXYWHL:(float)l t:(float)t w:(float)w h:(float)h lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchXYWH(l:t:w:h:lRad:tRad:rRad:bRad:)")));
- (HydraSkikoRRect *)makeOvalLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeOvalLTRB(l:t:r:b:)")));
- (HydraSkikoRRect *)makeOvalXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeOvalXYWH(l:t:w:h:)")));
- (HydraSkikoRRect *)makePillLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makePillLTRB(l:t:r:b:)")));
- (HydraSkikoRRect *)makePillXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makePillXYWH(l:t:w:h:)")));
- (HydraSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h radius:(float)radius __attribute__((swift_name("makeXYWH(l:t:w:h:radius:)")));
- (HydraSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeXYWH(l:t:w:h:xRad:yRad:)")));
- (HydraSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeXYWH(l:t:w:h:tlRad:trRad:brRad:blRad:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator.Companion")))
@interface HydraSkikoPathSegmentIteratorCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPathSegmentIteratorCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoPathSegmentIterator *)makePath:(HydraSkikoPath * _Nullable)path forceClose:(BOOL)forceClose __attribute__((swift_name("make(path:forceClose:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegment")))
@interface HydraSkikoPathSegment : HydraBase
- (instancetype)initWithVerbOrdinal:(int32_t)verbOrdinal x0:(float)x0 y0:(float)y0 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verbOrdinal:x0:y0:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 conicWeight:(float)conicWeight isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:conicWeight:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVerb:(HydraSkikoPathVerb *)verb p0:(HydraSkikoPoint * _Nullable)p0 p1:(HydraSkikoPoint * _Nullable)p1 p2:(HydraSkikoPoint * _Nullable)p2 p3:(HydraSkikoPoint * _Nullable)p3 conicWeight:(float)conicWeight isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verb:p0:p1:p2:p3:conicWeight:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:x3:y3:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float conicWeight __attribute__((swift_name("conicWeight")));
@property (readonly) BOOL isCloseLine __attribute__((swift_name("isCloseLine")));
@property (readonly) BOOL isClosedContour __attribute__((swift_name("isClosedContour")));
@property (readonly) HydraSkikoPoint * _Nullable p0 __attribute__((swift_name("p0")));
@property (readonly) HydraSkikoPoint * _Nullable p1 __attribute__((swift_name("p1")));
@property (readonly) HydraSkikoPoint * _Nullable p2 __attribute__((swift_name("p2")));
@property (readonly) HydraSkikoPoint * _Nullable p3 __attribute__((swift_name("p3")));
@property (readonly) HydraSkikoPathVerb *verb __attribute__((swift_name("verb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef.Companion")))
@interface HydraSkikoPixelRefCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPixelRefCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface.Companion")))
@interface HydraSkikoSurfaceCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoSurfaceCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoSurface * _Nullable)makeFromBackendRenderTargetContext:(HydraSkikoDirectContext *)context rt:(HydraSkikoBackendRenderTarget *)rt origin:(HydraSkikoSurfaceOrigin *)origin colorFormat:(HydraSkikoSurfaceColorFormat *)colorFormat colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromBackendRenderTarget(context:rt:origin:colorFormat:colorSpace:surfaceProps:)")));
- (HydraSkikoSurface *)makeFromMTKViewContext:(HydraSkikoDirectContext *)context mtkViewPtr:(void * _Nullable)mtkViewPtr origin:(HydraSkikoSurfaceOrigin *)origin sampleCount:(int32_t)sampleCount colorFormat:(HydraSkikoSurfaceColorFormat *)colorFormat colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromMTKView(context:mtkViewPtr:origin:sampleCount:colorFormat:colorSpace:surfaceProps:)")));
- (HydraSkikoSurface *)makeNullWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeNull(width:height:)")));
- (HydraSkikoSurface *)makeRasterImageInfo:(HydraSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRaster(imageInfo:)")));
- (HydraSkikoSurface *)makeRasterImageInfo:(HydraSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:rowBytes:)")));
- (HydraSkikoSurface *)makeRasterImageInfo:(HydraSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRaster(imageInfo:rowBytes:surfaceProps:)")));
- (HydraSkikoSurface *)makeRasterDirectPixmap:(HydraSkikoPixmap *)pixmap __attribute__((swift_name("makeRasterDirect(pixmap:)")));
- (HydraSkikoSurface *)makeRasterDirectPixmap:(HydraSkikoPixmap *)pixmap surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(pixmap:surfaceProps:)")));
- (HydraSkikoSurface *)makeRasterDirectImageInfo:(HydraSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:)")));
- (HydraSkikoSurface *)makeRasterDirectImageInfo:(HydraSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:surfaceProps:)")));
- (HydraSkikoSurface *)makeRasterN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeRasterN32Premul(width:height:)")));
- (HydraSkikoSurface *)makeRenderTargetContext:(HydraSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(HydraSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:)")));
- (HydraSkikoSurface *)makeRenderTargetContext:(HydraSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(HydraSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:surfaceProps:)")));
- (HydraSkikoSurface *)makeRenderTargetContext:(HydraSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(HydraSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(HydraSkikoSurfaceOrigin *)origin surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:)")));
- (HydraSkikoSurface *)makeRenderTargetContext:(HydraSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(HydraSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(HydraSkikoSurfaceOrigin *)origin surfaceProps:(HydraSkikoSurfaceProps * _Nullable)surfaceProps shouldCreateWithMips:(BOOL)shouldCreateWithMips __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:shouldCreateWithMips:)")));
@end

__attribute__((swift_name("SkikoCanvas")))
@interface HydraSkikoCanvas : HydraSkikoManaged
- (instancetype)initWithBitmap:(HydraSkikoBitmap *)bitmap surfaceProps:(HydraSkikoSurfaceProps *)surfaceProps __attribute__((swift_name("init(bitmap:surfaceProps:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoCanvasCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoCanvas *)clearColor:(int32_t)color __attribute__((swift_name("clear(color:)")));
- (HydraSkikoCanvas *)clipPathP:(HydraSkikoPath *)p __attribute__((swift_name("clipPath(p:)")));
- (HydraSkikoCanvas *)clipPathP:(HydraSkikoPath *)p antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:antiAlias:)")));
- (HydraSkikoCanvas *)clipPathP:(HydraSkikoPath *)p mode:(HydraSkikoClipMode *)mode __attribute__((swift_name("clipPath(p:mode:)")));
- (HydraSkikoCanvas *)clipPathP:(HydraSkikoPath *)p mode:(HydraSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:mode:antiAlias:)")));
- (HydraSkikoCanvas *)clipRRectR:(HydraSkikoRRect *)r __attribute__((swift_name("clipRRect(r:)")));
- (HydraSkikoCanvas *)clipRRectR:(HydraSkikoRRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:antiAlias:)")));
- (HydraSkikoCanvas *)clipRRectR:(HydraSkikoRRect *)r mode:(HydraSkikoClipMode *)mode __attribute__((swift_name("clipRRect(r:mode:)")));
- (HydraSkikoCanvas *)clipRRectR:(HydraSkikoRRect *)r mode:(HydraSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:mode:antiAlias:)")));
- (HydraSkikoCanvas *)clipRectR:(HydraSkikoRect *)r __attribute__((swift_name("clipRect(r:)")));
- (HydraSkikoCanvas *)clipRectR:(HydraSkikoRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:antiAlias:)")));
- (HydraSkikoCanvas *)clipRectR:(HydraSkikoRect *)r mode:(HydraSkikoClipMode *)mode __attribute__((swift_name("clipRect(r:mode:)")));
- (HydraSkikoCanvas *)clipRectR:(HydraSkikoRect *)r mode:(HydraSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:mode:antiAlias:)")));
- (HydraSkikoCanvas *)clipRegionR:(HydraSkikoRegion *)r __attribute__((swift_name("clipRegion(r:)")));
- (HydraSkikoCanvas *)clipRegionR:(HydraSkikoRegion *)r mode:(HydraSkikoClipMode *)mode __attribute__((swift_name("clipRegion(r:mode:)")));
- (HydraSkikoCanvas *)concatMatrix:(HydraSkikoMatrix33 *)matrix __attribute__((swift_name("concat(matrix:)")));
- (HydraSkikoCanvas *)concatMatrix_:(HydraSkikoMatrix44 *)matrix __attribute__((swift_name("concat(matrix_:)")));
- (HydraSkikoCanvas *)drawArcLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom startAngle:(float)startAngle sweepAngle:(float)sweepAngle includeCenter:(BOOL)includeCenter paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawArc(left:top:right:bottom:startAngle:sweepAngle:includeCenter:paint:)")));
- (HydraSkikoCanvas *)drawCircleX:(float)x y:(float)y radius:(float)radius paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawCircle(x:y:radius:paint:)")));
- (HydraSkikoCanvas *)drawDRRectOuter:(HydraSkikoRRect *)outer inner:(HydraSkikoRRect *)inner paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawDRRect(outer:inner:paint:)")));
- (HydraSkikoCanvas *)drawDrawableDrawable:(HydraSkikoDrawable *)drawable __attribute__((swift_name("drawDrawable(drawable:)")));
- (HydraSkikoCanvas *)drawDrawableDrawable:(HydraSkikoDrawable *)drawable matrix:(HydraSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("drawDrawable(drawable:matrix:)")));
- (HydraSkikoCanvas *)drawDrawableDrawable:(HydraSkikoDrawable *)drawable x:(float)x y:(float)y __attribute__((swift_name("drawDrawable(drawable:x:y:)")));
- (HydraSkikoCanvas *)drawImageImage:(HydraSkikoImage *)image left:(float)left top:(float)top __attribute__((swift_name("drawImage(image:left:top:)")));
- (HydraSkikoCanvas *)drawImageImage:(HydraSkikoImage *)image left:(float)left top:(float)top paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImage(image:left:top:paint:)")));
- (HydraSkikoCanvas *)drawImageNineImage:(HydraSkikoImage *)image center:(HydraSkikoIRect *)center dst:(HydraSkikoRect *)dst filterMode:(HydraSkikoFilterMode *)filterMode paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageNine(image:center:dst:filterMode:paint:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image dst:(HydraSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:dst:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image dst:(HydraSkikoRect *)dst paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:dst:paint:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image src:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:src:dst:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image src:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:src:dst:paint:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image src:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst paint:(HydraSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:paint:strict:)")));
- (HydraSkikoCanvas *)drawImageRectImage:(HydraSkikoImage *)image src:(HydraSkikoRect *)src dst:(HydraSkikoRect *)dst samplingMode:(id<HydraSkikoSamplingMode>)samplingMode paint:(HydraSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:samplingMode:paint:strict:)")));
- (HydraSkikoCanvas *)drawLineX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawLine(x0:y0:x1:y1:paint:)")));
- (HydraSkikoCanvas *)drawLinesCoords:(HydraKotlinArray<HydraSkikoPoint *> *)coords paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint:)")));
- (HydraSkikoCanvas *)drawLinesCoords:(HydraKotlinFloatArray *)coords paint_:(HydraSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint_:)")));
- (HydraSkikoCanvas *)drawOvalR:(HydraSkikoRect *)r paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawOval(r:paint:)")));
- (HydraSkikoCanvas *)drawPaintPaint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPaint(paint:)")));
- (HydraSkikoCanvas *)drawPatchCubics:(HydraKotlinArray<HydraSkikoPoint *> *)cubics colors:(HydraKotlinIntArray *)colors texCoords:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)texCoords blendMode:(HydraSkikoBlendMode *)blendMode paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPatch(cubics:colors:texCoords:blendMode:paint:)")));
- (HydraSkikoCanvas *)drawPathPath:(HydraSkikoPath *)path paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPath(path:paint:)")));
- (HydraSkikoCanvas *)drawPicturePicture:(HydraSkikoPicture *)picture matrix:(HydraSkikoMatrix33 * _Nullable)matrix paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("drawPicture(picture:matrix:paint:)")));
- (HydraSkikoCanvas *)drawPointX:(float)x y:(float)y paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPoint(x:y:paint:)")));
- (HydraSkikoCanvas *)drawPointsCoords:(HydraKotlinArray<HydraSkikoPoint *> *)coords paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint:)")));
- (HydraSkikoCanvas *)drawPointsCoords:(HydraKotlinFloatArray *)coords paint_:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint_:)")));
- (HydraSkikoCanvas *)drawPolygonCoords:(HydraKotlinArray<HydraSkikoPoint *> *)coords paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint:)")));
- (HydraSkikoCanvas *)drawPolygonCoords:(HydraKotlinFloatArray *)coords paint_:(HydraSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint_:)")));
- (HydraSkikoCanvas *)drawRRectR:(HydraSkikoRRect *)r paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawRRect(r:paint:)")));
- (HydraSkikoCanvas *)drawRectR:(HydraSkikoRect *)r paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawRect(r:paint:)")));
- (HydraSkikoCanvas *)drawRectShadowR:(HydraSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:color:)")));
- (HydraSkikoCanvas *)drawRectShadowR:(HydraSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:spread:color:)")));
- (HydraSkikoCanvas *)drawRectShadowNoclipR:(HydraSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadowNoclip(r:dx:dy:blur:spread:color:)")));
- (HydraSkikoCanvas *)drawRegionR:(HydraSkikoRegion *)r paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawRegion(r:paint:)")));
- (HydraSkikoCanvas *)drawStringS:(NSString *)s x:(float)x y:(float)y font:(HydraSkikoFont * _Nullable)font paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawString(s:x:y:font:paint:)")));
- (HydraSkikoCanvas *)drawTextBlobBlob:(HydraSkikoTextBlob *)blob x:(float)x y:(float)y paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawTextBlob(blob:x:y:paint:)")));
- (HydraSkikoCanvas *)drawTextLineLine:(HydraSkikoTextLine *)line x:(float)x y:(float)y paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawTextLine(line:x:y:paint:)")));
- (HydraSkikoCanvas *)drawTriangleFanPositions:(HydraKotlinArray<HydraSkikoPoint *> *)positions colors:(HydraKotlinIntArray * _Nullable)colors texCoords:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)texCoords indices:(HydraKotlinShortArray * _Nullable)indices blendMode:(HydraSkikoBlendMode *)blendMode paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawTriangleFan(positions:colors:texCoords:indices:blendMode:paint:)")));
- (HydraSkikoCanvas *)drawTriangleStripPositions:(HydraKotlinArray<HydraSkikoPoint *> *)positions colors:(HydraKotlinIntArray * _Nullable)colors texCoords:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)texCoords indices:(HydraKotlinShortArray * _Nullable)indices blendMode:(HydraSkikoBlendMode *)blendMode paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawTriangleStrip(positions:colors:texCoords:indices:blendMode:paint:)")));
- (HydraSkikoCanvas *)drawTrianglesPositions:(HydraKotlinArray<HydraSkikoPoint *> *)positions colors:(HydraKotlinIntArray * _Nullable)colors texCoords:(HydraKotlinArray<HydraSkikoPoint *> * _Nullable)texCoords indices:(HydraKotlinShortArray * _Nullable)indices blendMode:(HydraSkikoBlendMode *)blendMode paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawTriangles(positions:colors:texCoords:indices:blendMode:paint:)")));
- (HydraSkikoCanvas *)drawVerticesVertexMode:(HydraSkikoVertexMode *)vertexMode positions:(HydraKotlinFloatArray *)positions colors:(HydraKotlinIntArray * _Nullable)colors texCoords:(HydraKotlinFloatArray * _Nullable)texCoords indices:(HydraKotlinShortArray * _Nullable)indices blendMode:(HydraSkikoBlendMode *)blendMode paint:(HydraSkikoPaint *)paint __attribute__((swift_name("drawVertices(vertexMode:positions:colors:texCoords:indices:blendMode:paint:)")));
- (BOOL)readPixelsBitmap:(HydraSkikoBitmap *)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (HydraSkikoCanvas *)resetMatrix __attribute__((swift_name("resetMatrix()")));
- (HydraSkikoCanvas *)restore __attribute__((swift_name("restore()")));
- (HydraSkikoCanvas *)restoreToCountSaveCount:(int32_t)saveCount __attribute__((swift_name("restoreToCount(saveCount:)")));
- (HydraSkikoCanvas *)rotateDeg:(float)deg __attribute__((swift_name("rotate(deg:)")));
- (HydraSkikoCanvas *)rotateDeg:(float)deg x:(float)x y:(float)y __attribute__((swift_name("rotate(deg:x:y:)")));
- (int32_t)save __attribute__((swift_name("save()")));
- (int32_t)saveLayerLayerRec:(HydraSkikoCanvasSaveLayerRec *)layerRec __attribute__((swift_name("saveLayer(layerRec:)")));
- (int32_t)saveLayerBounds:(HydraSkikoRect * _Nullable)bounds paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(bounds:paint:)")));
- (int32_t)saveLayerLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(left:top:right:bottom:paint:)")));
- (HydraSkikoCanvas *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (HydraSkikoCanvas *)setMatrixMatrix:(HydraSkikoMatrix33 *)matrix __attribute__((swift_name("setMatrix(matrix:)")));
- (HydraSkikoCanvas *)skewSx:(float)sx sy:(float)sy __attribute__((swift_name("skew(sx:sy:)")));
- (HydraSkikoCanvas *)translateDx:(float)dx dy:(float)dy __attribute__((swift_name("translate(dx:dy:)")));
- (BOOL)writePixelsBitmap:(HydraSkikoBitmap *)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
@property (readonly) HydraSkikoMatrix44 *localToDevice __attribute__((swift_name("localToDevice")));
@property (readonly) HydraSkikoMatrix33 *localToDeviceAsMatrix33 __attribute__((swift_name("localToDeviceAsMatrix33")));
@property (readonly) int32_t saveCount __attribute__((swift_name("saveCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoContentChangeMode")))
@interface HydraSkikoContentChangeMode : HydraKotlinEnum<HydraSkikoContentChangeMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoContentChangeMode *discard __attribute__((swift_name("discard")));
@property (class, readonly) HydraSkikoContentChangeMode *retain_ __attribute__((swift_name("retain_")));
+ (HydraKotlinArray<HydraSkikoContentChangeMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoContentChangeMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget")))
@interface HydraSkikoBackendRenderTarget : HydraSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoBackendRenderTargetCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceOrigin")))
@interface HydraSkikoSurfaceOrigin : HydraKotlinEnum<HydraSkikoSurfaceOrigin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoSurfaceOrigin *topLeft __attribute__((swift_name("topLeft")));
@property (class, readonly) HydraSkikoSurfaceOrigin *bottomLeft __attribute__((swift_name("bottomLeft")));
+ (HydraKotlinArray<HydraSkikoSurfaceOrigin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoSurfaceOrigin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceColorFormat")))
@interface HydraSkikoSurfaceColorFormat : HydraKotlinEnum<HydraSkikoSurfaceColorFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoSurfaceColorFormat *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgbaF16Norm __attribute__((swift_name("rgbaF16Norm")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) HydraSkikoSurfaceColorFormat *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (HydraKotlinArray<HydraSkikoSurfaceColorFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoSurfaceColorFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceProps")))
@interface HydraSkikoSurfaceProps : HydraBase
- (instancetype)initWithGeo:(HydraSkikoPixelGeometry *)geo __attribute__((swift_name("init(geo:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsDeviceIndependentFonts:(BOOL)isDeviceIndependentFonts pixelGeometry:(HydraSkikoPixelGeometry *)pixelGeometry __attribute__((swift_name("init(isDeviceIndependentFonts:pixelGeometry:)"))) __attribute__((objc_designated_initializer));
- (int32_t)_getFlags __attribute__((swift_name("_getFlags()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoSurfaceProps *)withDeviceIndependentFonts_deviceIndependentFonts:(BOOL)_deviceIndependentFonts __attribute__((swift_name("withDeviceIndependentFonts(_deviceIndependentFonts:)")));
- (HydraSkikoSurfaceProps *)withPixelGeometry_pixelGeometry:(HydraSkikoPixelGeometry *)_pixelGeometry __attribute__((swift_name("withPixelGeometry(_pixelGeometry:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.Companion")))
@interface HydraSkikoCanvasCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoCanvasCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoClipMode")))
@interface HydraSkikoClipMode : HydraKotlinEnum<HydraSkikoClipMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoClipMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) HydraSkikoClipMode *intersect __attribute__((swift_name("intersect")));
+ (HydraKotlinArray<HydraSkikoClipMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoClipMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion")))
@interface HydraSkikoRegion : HydraSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoRegionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeRegionComplexity __attribute__((swift_name("computeRegionComplexity()")));
- (BOOL)containsRect:(HydraSkikoIRect *)rect __attribute__((swift_name("contains(rect:)")));
- (BOOL)containsR:(HydraSkikoRegion * _Nullable)r __attribute__((swift_name("contains(r:)")));
- (BOOL)containsX:(int32_t)x y:(int32_t)y __attribute__((swift_name("contains(x:y:)")));
- (BOOL)getBoundaryPathP:(HydraSkikoPath * _Nullable)p __attribute__((swift_name("getBoundaryPath(p:)")));
- (BOOL)intersectsRect:(HydraSkikoIRect *)rect __attribute__((swift_name("intersects(rect:)")));
- (BOOL)intersectsR:(HydraSkikoRegion * _Nullable)r __attribute__((swift_name("intersects(r:)")));
- (BOOL)opRect:(HydraSkikoIRect *)rect op:(HydraSkikoRegionOp *)op __attribute__((swift_name("op(rect:op:)")));
- (BOOL)opR:(HydraSkikoRegion * _Nullable)r op:(HydraSkikoRegionOp *)op __attribute__((swift_name("op(r:op:)")));
- (BOOL)opRect:(HydraSkikoIRect *)rect r:(HydraSkikoRegion * _Nullable)r op:(HydraSkikoRegionOp *)op __attribute__((swift_name("op(rect:r:op:)")));
- (BOOL)opR:(HydraSkikoRegion * _Nullable)r rect:(HydraSkikoIRect *)rect op:(HydraSkikoRegionOp *)op __attribute__((swift_name("op(r:rect:op:)")));
- (BOOL)opA:(HydraSkikoRegion * _Nullable)a b:(HydraSkikoRegion * _Nullable)b op:(HydraSkikoRegionOp *)op __attribute__((swift_name("op(a:b:op:)")));
- (BOOL)quickContainsRect:(HydraSkikoIRect *)rect __attribute__((swift_name("quickContains(rect:)")));
- (BOOL)quickRejectRect:(HydraSkikoIRect *)rect __attribute__((swift_name("quickReject(rect:)")));
- (BOOL)quickRejectR:(HydraSkikoRegion * _Nullable)r __attribute__((swift_name("quickReject(r:)")));
- (BOOL)setR:(HydraSkikoRegion * _Nullable)r __attribute__((swift_name("set(r:)")));
- (BOOL)setEmpty __attribute__((swift_name("setEmpty()")));
- (BOOL)setPathPath:(HydraSkikoPath * _Nullable)path clip:(HydraSkikoRegion * _Nullable)clip __attribute__((swift_name("setPath(path:clip:)")));
- (BOOL)setRectRect:(HydraSkikoIRect *)rect __attribute__((swift_name("setRect(rect:)")));
- (BOOL)setRectsRects:(HydraKotlinArray<HydraSkikoIRect *> *)rects __attribute__((swift_name("setRects(rects:)")));
- (BOOL)setRegionR:(HydraSkikoRegion * _Nullable)r __attribute__((swift_name("setRegion(r:)")));
- (void)translateDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("translate(dx:dy:)")));
@property (readonly) HydraSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) BOOL isComplex __attribute__((swift_name("isComplex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRect __attribute__((swift_name("isRect")));
@end

__attribute__((swift_name("SkikoDrawable")))
@interface HydraSkikoDrawable : HydraSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoDrawableCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoDrawable *)drawCanvas:(HydraSkikoCanvas * _Nullable)canvas __attribute__((swift_name("draw(canvas:)")));
- (HydraSkikoDrawable *)drawCanvas:(HydraSkikoCanvas * _Nullable)canvas matrix:(HydraSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("draw(canvas:matrix:)")));
- (HydraSkikoDrawable *)drawCanvas:(HydraSkikoCanvas * _Nullable)canvas x:(float)x y:(float)y __attribute__((swift_name("draw(canvas:x:y:)")));
- (HydraSkikoPicture *)makePictureSnapshot __attribute__((swift_name("makePictureSnapshot()")));
- (HydraSkikoDrawable *)notifyDrawingChanged __attribute__((swift_name("notifyDrawingChanged()")));
- (void)onDrawCanvas:(HydraSkikoCanvas * _Nullable)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (HydraSkikoRect *)onGetBounds __attribute__((swift_name("onGetBounds()")));
@property (readonly) HydraSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterMode")))
@interface HydraSkikoFilterMode : HydraKotlinEnum<HydraSkikoFilterMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFilterMode *nearest __attribute__((swift_name("nearest")));
@property (class, readonly) HydraSkikoFilterMode *linear __attribute__((swift_name("linear")));
+ (HydraKotlinArray<HydraSkikoFilterMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFilterMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture")))
@interface HydraSkikoPicture : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoPictureCompanion *companion __attribute__((swift_name("companion")));
- (HydraSkikoShader *)makeShaderTmx:(HydraSkikoFilterTileMode *)tmx tmy:(HydraSkikoFilterTileMode *)tmy mode:(HydraSkikoFilterMode *)mode localMatrix:(HydraSkikoMatrix33 * _Nullable)localMatrix tileRect:(HydraSkikoRect * _Nullable)tileRect __attribute__((swift_name("makeShader(tmx:tmy:mode:localMatrix:tileRect:)")));
- (HydraSkikoPicture *)playbackCanvas:(HydraSkikoCanvas * _Nullable)canvas abort:(HydraBoolean *(^ _Nullable)(void))abort __attribute__((swift_name("playback(canvas:abort:)")));
- (HydraSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) int32_t approximateOpCount __attribute__((swift_name("approximateOpCount")));
@property (readonly) HydraSkikoRect *cullRect __attribute__((swift_name("cullRect")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont")))
@interface HydraSkikoFont : HydraSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTypeface:(HydraSkikoTypeface * _Nullable)typeface __attribute__((swift_name("init(typeface:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(HydraSkikoTypeface * _Nullable)typeface size:(float)size __attribute__((swift_name("init(typeface:size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(HydraSkikoTypeface * _Nullable)typeface size:(float)size scaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(typeface:size:scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoFontCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)areBitmapsEmbedded __attribute__((swift_name("areBitmapsEmbedded()")));
- (HydraKotlinArray<HydraSkikoRect *> *)getBoundsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getBounds(glyphs:)")));
- (HydraKotlinArray<HydraSkikoRect *> *)getBoundsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs p:(HydraSkikoPaint * _Nullable)p __attribute__((swift_name("getBounds(glyphs:p:)")));
- (HydraSkikoPath * _Nullable)getPathGlyph:(int16_t)glyph __attribute__((swift_name("getPath(glyph:)")));
- (HydraKotlinArray<HydraSkikoPath *> *)getPathsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPaths(glyphs:)")));
- (HydraKotlinArray<HydraSkikoPoint *> *)getPositionsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPositions(glyphs:)")));
- (HydraKotlinArray<HydraSkikoPoint *> *)getPositionsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs offset:(HydraSkikoPoint *)offset __attribute__((swift_name("getPositions(glyphs:offset:)")));
- (HydraKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (int32_t)getStringGlyphsCountS:(NSString * _Nullable)s __attribute__((swift_name("getStringGlyphsCount(s:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (HydraKotlinShortArray *)getUTF32GlyphsUni:(HydraKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (HydraKotlinFloatArray *)getWidthsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getWidths(glyphs:)")));
- (HydraKotlinFloatArray *)getXPositionsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getXPositions(glyphs:)")));
- (HydraKotlinFloatArray *)getXPositionsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs offset:(float)offset __attribute__((swift_name("getXPositions(glyphs:offset:)")));
- (HydraSkikoFont *)makeWithSizeSize:(float)size __attribute__((swift_name("makeWithSize(size:)")));
- (HydraSkikoRect *)measureTextS:(NSString * _Nullable)s p:(HydraSkikoPaint * _Nullable)p __attribute__((swift_name("measureText(s:p:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s __attribute__((swift_name("measureTextWidth(s:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s p:(HydraSkikoPaint * _Nullable)p __attribute__((swift_name("measureTextWidth(s:p:)")));
- (void)setBitmapsEmbeddedValue:(BOOL)value __attribute__((swift_name("setBitmapsEmbedded(value:)")));
- (HydraSkikoFont *)setTypefaceTypeface:(HydraSkikoTypeface * _Nullable)typeface __attribute__((swift_name("setTypeface(typeface:)")));
@property HydraSkikoFontEdging *edging __attribute__((swift_name("edging")));
@property HydraSkikoFontHinting *hinting __attribute__((swift_name("hinting")));
@property BOOL isAutoHintingForced __attribute__((swift_name("isAutoHintingForced")));
@property BOOL isBaselineSnapped __attribute__((swift_name("isBaselineSnapped")));
@property BOOL isEmboldened __attribute__((swift_name("isEmboldened")));
@property BOOL isLinearMetrics __attribute__((swift_name("isLinearMetrics")));
@property BOOL isSubpixel __attribute__((swift_name("isSubpixel")));
@property (readonly) HydraSkikoFontMetrics *metrics __attribute__((swift_name("metrics")));
@property float scaleX __attribute__((swift_name("scaleX")));
@property float size __attribute__((swift_name("size")));
@property float skewX __attribute__((swift_name("skewX")));
@property (readonly) float spacing __attribute__((swift_name("spacing")));
@property (readonly) HydraSkikoTypeface * _Nullable typeface __attribute__((swift_name("typeface")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob")))
@interface HydraSkikoTextBlob : HydraSkikoManaged <HydraKotlinIterable>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoTextBlobCompanion *companion __attribute__((swift_name("companion")));
- (HydraKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (HydraKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (id<HydraKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (HydraSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) HydraSkikoRect *blockBounds __attribute__((swift_name("blockBounds")));
@property (readonly) HydraSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) HydraKotlinIntArray *clusters __attribute__((swift_name("clusters")));
@property (readonly) float firstBaseline __attribute__((swift_name("firstBaseline")));
@property (readonly) HydraKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float lastBaseline __attribute__((swift_name("lastBaseline")));
@property (readonly) HydraKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) HydraSkikoRect *tightBounds __attribute__((swift_name("tightBounds")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine")))
@interface HydraSkikoTextLine : HydraSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoTextLineCompanion *companion __attribute__((swift_name("companion")));
- (float)getCoordAtOffsetOffset:(int32_t)offset __attribute__((swift_name("getCoordAtOffset(offset:)")));
- (HydraKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (HydraKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(HydraSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (int32_t)getLeftOffsetAtCoordX:(float)x __attribute__((swift_name("getLeftOffsetAtCoord(x:)")));
- (int32_t)getOffsetAtCoordX:(float)x __attribute__((swift_name("getOffsetAtCoord(x:)")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) HydraKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) HydraKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) HydraSkikoTextBlob * _Nullable textBlob __attribute__((swift_name("textBlob")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface HydraKotlinShortArray : HydraBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(HydraShort *(^)(HydraInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (HydraKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoVertexMode")))
@interface HydraSkikoVertexMode : HydraKotlinEnum<HydraSkikoVertexMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoVertexMode *triangles __attribute__((swift_name("triangles")));
@property (class, readonly) HydraSkikoVertexMode *triangleStrip __attribute__((swift_name("triangleStrip")));
@property (class, readonly) HydraSkikoVertexMode *triangleFan __attribute__((swift_name("triangleFan")));
+ (HydraKotlinArray<HydraSkikoVertexMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoVertexMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerRec")))
@interface HydraSkikoCanvasSaveLayerRec : HydraBase
- (instancetype)initWithBounds:(HydraSkikoRect * _Nullable)bounds paint:(HydraSkikoPaint * _Nullable)paint backdrop:(HydraSkikoImageFilter * _Nullable)backdrop colorSpace:(HydraSkikoColorSpace * _Nullable)colorSpace saveLayerFlags:(HydraSkikoCanvasSaveLayerFlags *)saveLayerFlags __attribute__((swift_name("init(bounds:paint:backdrop:colorSpace:saveLayerFlags:)"))) __attribute__((objc_designated_initializer));
@property (readonly) HydraSkikoImageFilter * _Nullable backdrop __attribute__((swift_name("backdrop")));
@property (readonly) HydraSkikoRect * _Nullable bounds __attribute__((swift_name("bounds")));
@property (readonly) HydraSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) HydraSkikoPaint * _Nullable paint __attribute__((swift_name("paint")));
@property (readonly) HydraSkikoCanvasSaveLayerFlags *saveLayerFlags __attribute__((swift_name("saveLayerFlags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget.Companion")))
@interface HydraSkikoBackendRenderTargetCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoBackendRenderTargetCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoBackendRenderTarget *)makeDirect3DWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr format:(int32_t)format sampleCnt:(int32_t)sampleCnt levelCnt:(int32_t)levelCnt __attribute__((swift_name("makeDirect3D(width:height:texturePtr:format:sampleCnt:levelCnt:)")));
- (HydraSkikoBackendRenderTarget *)makeGLWidth:(int32_t)width height:(int32_t)height sampleCnt:(int32_t)sampleCnt stencilBits:(int32_t)stencilBits fbId:(int32_t)fbId fbFormat:(int32_t)fbFormat __attribute__((swift_name("makeGL(width:height:sampleCnt:stencilBits:fbId:fbFormat:)")));
- (HydraSkikoBackendRenderTarget *)makeMetalWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr __attribute__((swift_name("makeMetal(width:height:texturePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelGeometry")))
@interface HydraSkikoPixelGeometry : HydraKotlinEnum<HydraSkikoPixelGeometry *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoPixelGeometry *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) HydraSkikoPixelGeometry *rgbH __attribute__((swift_name("rgbH")));
@property (class, readonly) HydraSkikoPixelGeometry *bgrH __attribute__((swift_name("bgrH")));
@property (class, readonly) HydraSkikoPixelGeometry *rgbV __attribute__((swift_name("rgbV")));
@property (class, readonly) HydraSkikoPixelGeometry *bgrV __attribute__((swift_name("bgrV")));
+ (HydraKotlinArray<HydraSkikoPixelGeometry *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoPixelGeometry *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Companion")))
@interface HydraSkikoRegionCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRegionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Op")))
@interface HydraSkikoRegionOp : HydraKotlinEnum<HydraSkikoRegionOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoRegionOpCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HydraSkikoRegionOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) HydraSkikoRegionOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) HydraSkikoRegionOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) HydraSkikoRegionOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) HydraSkikoRegionOp *reverseDifference __attribute__((swift_name("reverseDifference")));
@property (class, readonly) HydraSkikoRegionOp *replace __attribute__((swift_name("replace")));
+ (HydraKotlinArray<HydraSkikoRegionOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoRegionOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDrawable.Companion")))
@interface HydraSkikoDrawableCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoDrawableCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture.Companion")))
@interface HydraSkikoPictureCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoPictureCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoPicture * _Nullable)makeFromDataData:(HydraSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (HydraSkikoPicture *)makePlaceholderCull:(HydraSkikoRect *)cull __attribute__((swift_name("makePlaceholder(cull:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface")))
@interface HydraSkikoTypeface : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoTypefaceCompanion *companion __attribute__((swift_name("companion")));
- (HydraKotlinIntArray * _Nullable)getKerningPairAdjustmentsGlyphs:(HydraKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getKerningPairAdjustments(glyphs:)")));
- (HydraKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (HydraSkikoData * _Nullable)getTableDataTag:(NSString *)tag __attribute__((swift_name("getTableData(tag:)")));
- (void * _Nullable)getTableSizeTag:(NSString *)tag __attribute__((swift_name("getTableSize(tag:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (HydraKotlinShortArray *)getUTF32GlyphsUni:(HydraKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (HydraSkikoTypeface *)makeCloneVariation:(HydraSkikoFontVariation *)variation __attribute__((swift_name("makeClone(variation:)")));
- (HydraSkikoTypeface *)makeCloneVariations:(HydraKotlinArray<HydraSkikoFontVariation *> *)variations collectionIndex:(int32_t)collectionIndex __attribute__((swift_name("makeClone(variations:collectionIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) NSString *familyName __attribute__((swift_name("familyName")));
@property (readonly) HydraKotlinArray<HydraSkikoFontFamilyName *> *familyNames __attribute__((swift_name("familyNames")));
@property (readonly) HydraSkikoFontStyle *fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) int32_t glyphsCount __attribute__((swift_name("glyphsCount")));
@property (readonly) BOOL isBold __attribute__((swift_name("isBold")));
@property (readonly) BOOL isFixedPitch __attribute__((swift_name("isFixedPitch")));
@property (readonly) BOOL isItalic __attribute__((swift_name("isItalic")));
@property (readonly) HydraKotlinArray<NSString *> *tableTags __attribute__((swift_name("tableTags")));
@property (readonly) int32_t tablesCount __attribute__((swift_name("tablesCount")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@property (readonly) int32_t unitsPerEm __attribute__((swift_name("unitsPerEm")));
@property (readonly) HydraKotlinArray<HydraSkikoFontVariationAxis *> * _Nullable variationAxes __attribute__((swift_name("variationAxes")));
@property (readonly) HydraKotlinArray<HydraSkikoFontVariation *> * _Nullable variations __attribute__((swift_name("variations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont.Companion")))
@interface HydraSkikoFontCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontEdging")))
@interface HydraSkikoFontEdging : HydraKotlinEnum<HydraSkikoFontEdging *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFontEdging *alias __attribute__((swift_name("alias")));
@property (class, readonly) HydraSkikoFontEdging *antiAlias __attribute__((swift_name("antiAlias")));
@property (class, readonly) HydraSkikoFontEdging *subpixelAntiAlias __attribute__((swift_name("subpixelAntiAlias")));
+ (HydraKotlinArray<HydraSkikoFontEdging *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFontEdging *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontHinting")))
@interface HydraSkikoFontHinting : HydraKotlinEnum<HydraSkikoFontHinting *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFontHinting *none __attribute__((swift_name("none")));
@property (class, readonly) HydraSkikoFontHinting *slight __attribute__((swift_name("slight")));
@property (class, readonly) HydraSkikoFontHinting *normal __attribute__((swift_name("normal")));
@property (class, readonly) HydraSkikoFontHinting *full __attribute__((swift_name("full")));
+ (HydraKotlinArray<HydraSkikoFontHinting *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFontHinting *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics")))
@interface HydraSkikoFontMetrics : HydraBase
- (instancetype)initWithTop:(float)top ascent:(float)ascent descent:(float)descent bottom:(float)bottom leading:(float)leading avgCharWidth:(float)avgCharWidth maxCharWidth:(float)maxCharWidth xMin:(float)xMin xMax:(float)xMax xHeight:(float)xHeight capHeight:(float)capHeight underlineThickness:(HydraFloat * _Nullable)underlineThickness underlinePosition:(HydraFloat * _Nullable)underlinePosition strikeoutThickness:(HydraFloat * _Nullable)strikeoutThickness strikeoutPosition:(HydraFloat * _Nullable)strikeoutPosition __attribute__((swift_name("init(top:ascent:descent:bottom:leading:avgCharWidth:maxCharWidth:xMin:xMax:xHeight:capHeight:underlineThickness:underlinePosition:strikeoutThickness:strikeoutPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoFontMetricsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float avgCharWidth __attribute__((swift_name("avgCharWidth")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) float maxCharWidth __attribute__((swift_name("maxCharWidth")));
@property (readonly) HydraFloat * _Nullable strikeoutPosition __attribute__((swift_name("strikeoutPosition")));
@property (readonly) HydraFloat * _Nullable strikeoutThickness __attribute__((swift_name("strikeoutThickness")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) HydraFloat * _Nullable underlinePosition __attribute__((swift_name("underlinePosition")));
@property (readonly) HydraFloat * _Nullable underlineThickness __attribute__((swift_name("underlineThickness")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@property (readonly) float xMax __attribute__((swift_name("xMax")));
@property (readonly) float xMin __attribute__((swift_name("xMin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob.Companion")))
@interface HydraSkikoTextBlobCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoTextBlobCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoTextBlob * _Nullable)makeFromDataData:(HydraSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (HydraSkikoTextBlob * _Nullable)makeFromPosGlyphs:(HydraKotlinShortArray *)glyphs pos:(HydraKotlinArray<HydraSkikoPoint *> *)pos font:(HydraSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPos(glyphs:pos:font:)")));
- (HydraSkikoTextBlob * _Nullable)makeFromPosHGlyphs:(HydraKotlinShortArray *)glyphs xpos:(HydraKotlinFloatArray *)xpos ypos:(float)ypos font:(HydraSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPosH(glyphs:xpos:ypos:font:)")));
- (HydraSkikoTextBlob * _Nullable)makeFromRSXformGlyphs:(HydraKotlinShortArray *)glyphs xform:(HydraKotlinArray<HydraSkikoRSXform *> *)xform font:(HydraSkikoFont * _Nullable)font __attribute__((swift_name("makeFromRSXform(glyphs:xform:font:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine.Companion")))
@interface HydraSkikoTextLineCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoTextLineCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoTextLine *)makeText:(NSString * _Nullable)text font:(HydraSkikoFont * _Nullable)font __attribute__((swift_name("make(text:font:)")));
- (HydraSkikoTextLine *)makeText:(NSString * _Nullable)text font:(HydraSkikoFont * _Nullable)font opts:(HydraSkikoShapingOptions * _Nullable)opts __attribute__((swift_name("make(text:font:opts:)")));
@end

__attribute__((swift_name("KotlinShortIterator")))
@interface HydraKotlinShortIterator : HydraBase <HydraKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HydraShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlags")))
@interface HydraSkikoCanvasSaveLayerFlags : HydraBase
- (instancetype)initWithFlagsSet:(HydraKotlinArray<HydraSkikoCanvasSaveLayerFlagsSet *> *)flagsSet __attribute__((swift_name("init(flagsSet:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsFlag:(HydraSkikoCanvasSaveLayerFlagsSet *)flag __attribute__((swift_name("contains(flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.OpCompanion")))
@interface HydraSkikoRegionOpCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRegionOpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface.Companion")))
@interface HydraSkikoTypefaceCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoTypefaceCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoTypeface *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation")))
@interface HydraSkikoFontVariation : HydraBase
- (instancetype)initWith_tag:(int32_t)_tag value:(float)value __attribute__((swift_name("init(_tag:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(float)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoFontVariationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFamilyName")))
@interface HydraSkikoFontFamilyName : HydraBase
- (instancetype)initWithName:(NSString *)name language:(NSString *)language __attribute__((swift_name("init(name:language:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle")))
@interface HydraSkikoFontStyle : HydraBase
- (instancetype)initWithWeight:(int32_t)weight width:(int32_t)width slant:(HydraSkikoFontSlant *)slant __attribute__((swift_name("init(weight:width:slant:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoFontStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoFontStyle *)withSlantSlant:(HydraSkikoFontSlant *)slant __attribute__((swift_name("withSlant(slant:)")));
- (HydraSkikoFontStyle *)withWeightWeight:(int32_t)weight __attribute__((swift_name("withWeight(weight:)")));
- (HydraSkikoFontStyle *)withWidthWidth:(int32_t)width __attribute__((swift_name("withWidth(width:)")));
@property (readonly) int32_t _value __attribute__((swift_name("_value")));
@property (readonly) HydraSkikoFontSlant *slant __attribute__((swift_name("slant")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariationAxis")))
@interface HydraSkikoFontVariationAxis : HydraBase
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max __attribute__((swift_name("init(tag:min:def:max:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag minValue:(float)minValue defaultValue:(float)defaultValue maxValue:(float)maxValue isHidden:(BOOL)isHidden __attribute__((swift_name("init(_tag:minValue:defaultValue:maxValue:isHidden:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max hidden:(BOOL)hidden __attribute__((swift_name("init(tag:min:def:max:hidden:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) float defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly) BOOL isHidden __attribute__((swift_name("isHidden")));
@property (readonly) float maxValue __attribute__((swift_name("maxValue")));
@property (readonly) float minValue __attribute__((swift_name("minValue")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics.Companion")))
@interface HydraSkikoFontMetricsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontMetricsCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform")))
@interface HydraSkikoRSXform : HydraBase
- (instancetype)initWithScos:(float)scos ssin:(float)ssin tx:(float)tx ty:(float)ty __attribute__((swift_name("init(scos:ssin:tx:ty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoRSXformCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions")))
@interface HydraSkikoShapingOptions : HydraBase
- (instancetype)initWithFontMgr:(HydraSkikoFontMgr * _Nullable)fontMgr features:(HydraKotlinArray<HydraSkikoFontFeature *> * _Nullable)features isLeftToRight:(BOOL)isLeftToRight isApproximateSpaces:(BOOL)isApproximateSpaces isApproximatePunctuation:(BOOL)isApproximatePunctuation __attribute__((swift_name("init(fontMgr:features:isLeftToRight:isApproximateSpaces:isApproximatePunctuation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoShapingOptionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (HydraSkikoShapingOptions *)withApproximatePunctuation_approximatePunctuation:(BOOL)_approximatePunctuation __attribute__((swift_name("withApproximatePunctuation(_approximatePunctuation:)")));
- (HydraSkikoShapingOptions *)withApproximateSpaces_approximateSpaces:(BOOL)_approximateSpaces __attribute__((swift_name("withApproximateSpaces(_approximateSpaces:)")));
- (HydraSkikoShapingOptions *)withFeaturesFeatures:(HydraKotlinArray<HydraSkikoFontFeature *> * _Nullable)features __attribute__((swift_name("withFeatures(features:)")));
- (HydraSkikoShapingOptions *)withFeaturesFeaturesString:(NSString * _Nullable)featuresString __attribute__((swift_name("withFeatures(featuresString:)")));
- (HydraSkikoShapingOptions *)withFontMgr_fontMgr:(HydraSkikoFontMgr * _Nullable)_fontMgr __attribute__((swift_name("withFontMgr(_fontMgr:)")));
- (HydraSkikoShapingOptions *)withLeftToRight_leftToRight:(BOOL)_leftToRight __attribute__((swift_name("withLeftToRight(_leftToRight:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlagsSet")))
@interface HydraSkikoCanvasSaveLayerFlagsSet : HydraKotlinEnum<HydraSkikoCanvasSaveLayerFlagsSet *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoCanvasSaveLayerFlagsSet *preservelcdtext __attribute__((swift_name("preservelcdtext")));
@property (class, readonly) HydraSkikoCanvasSaveLayerFlagsSet *initwithprevious __attribute__((swift_name("initwithprevious")));
@property (class, readonly) HydraSkikoCanvasSaveLayerFlagsSet *f16colortype __attribute__((swift_name("f16colortype")));
+ (HydraKotlinArray<HydraSkikoCanvasSaveLayerFlagsSet *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoCanvasSaveLayerFlagsSet *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation.Companion")))
@interface HydraSkikoFontVariationCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontVariationCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinArray<HydraSkikoFontVariation *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (HydraSkikoFontVariation *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
@property (readonly) HydraKotlinArray<HydraSkikoFontVariation *> *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontSlant")))
@interface HydraSkikoFontSlant : HydraKotlinEnum<HydraSkikoFontSlant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraSkikoFontSlant *upright __attribute__((swift_name("upright")));
@property (class, readonly) HydraSkikoFontSlant *italic __attribute__((swift_name("italic")));
@property (class, readonly) HydraSkikoFontSlant *oblique __attribute__((swift_name("oblique")));
+ (HydraKotlinArray<HydraSkikoFontSlant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraSkikoFontSlant *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle.Companion")))
@interface HydraSkikoFontStyleCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoFontStyle *BOLD __attribute__((swift_name("BOLD")));
@property (readonly) HydraSkikoFontStyle *BOLD_ITALIC __attribute__((swift_name("BOLD_ITALIC")));
@property (readonly) HydraSkikoFontStyle *ITALIC __attribute__((swift_name("ITALIC")));
@property (readonly) HydraSkikoFontStyle *NORMAL __attribute__((swift_name("NORMAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform.Companion")))
@interface HydraSkikoRSXformCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoRSXformCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoRSXform *)makeFromRadiansScale:(float)scale radians:(float)radians tx:(float)tx ty:(float)ty ax:(float)ax ay:(float)ay __attribute__((swift_name("makeFromRadians(scale:radians:tx:ty:ax:ay:)")));
@end

__attribute__((swift_name("SkikoFontMgr")))
@interface HydraSkikoFontMgr : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoFontMgrCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getFamilyNameIndex:(int32_t)index __attribute__((swift_name("getFamilyName(index:)")));
- (HydraSkikoTypeface * _Nullable)legacyMakeTypefaceName:(NSString *)name style:(HydraSkikoFontStyle *)style __attribute__((swift_name("legacyMakeTypeface(name:style:)")));
- (HydraSkikoTypeface * _Nullable)makeFromDataData:(HydraSkikoData * _Nullable)data ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromData(data:ttcIndex:)")));
- (HydraSkikoTypeface * _Nullable)makeFromFilePath:(NSString *)path ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromFile(path:ttcIndex:)")));
- (HydraSkikoFontStyleSet * _Nullable)makeStyleSetIndex:(int32_t)index __attribute__((swift_name("makeStyleSet(index:)")));
- (HydraSkikoTypeface * _Nullable)matchFamiliesStyleFamilies:(HydraKotlinArray<NSString *> *)families style:(HydraSkikoFontStyle *)style __attribute__((swift_name("matchFamiliesStyle(families:style:)")));
- (HydraSkikoTypeface * _Nullable)matchFamiliesStyleCharacterFamilies:(HydraKotlinArray<NSString *> *)families style:(HydraSkikoFontStyle *)style bcp47:(HydraKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamiliesStyleCharacter(families:style:bcp47:character:)")));
- (HydraSkikoFontStyleSet *)matchFamilyFamilyName:(NSString * _Nullable)familyName __attribute__((swift_name("matchFamily(familyName:)")));
- (HydraSkikoTypeface * _Nullable)matchFamilyStyleFamilyName:(NSString * _Nullable)familyName style:(HydraSkikoFontStyle *)style __attribute__((swift_name("matchFamilyStyle(familyName:style:)")));
- (HydraSkikoTypeface * _Nullable)matchFamilyStyleCharacterFamilyName:(NSString * _Nullable)familyName style:(HydraSkikoFontStyle *)style bcp47:(HydraKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamilyStyleCharacter(familyName:style:bcp47:character:)")));
@property (readonly) int32_t familiesCount __attribute__((swift_name("familiesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature")))
@interface HydraSkikoFontFeature : HydraBase
- (instancetype)initWithFeature:(NSString *)feature __attribute__((swift_name("init(feature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(BOOL)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value_:(int32_t)value __attribute__((swift_name("init(feature:value_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(_tag:value:start:end:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(feature:value:start:end:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraSkikoFontFeatureCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) uint32_t end __attribute__((swift_name("end")));
@property (readonly) uint32_t start __attribute__((swift_name("start")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions.Companion")))
@interface HydraSkikoShapingOptionsCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoShapingOptionsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraSkikoShapingOptions *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMgr.Companion")))
@interface HydraSkikoFontMgrCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontMgrCompanion *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) HydraSkikoFontMgr *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet")))
@interface HydraSkikoFontStyleSet : HydraSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HydraSkikoFontStyleSetCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)count __attribute__((swift_name("count()")));
- (HydraSkikoFontStyle *)getStyleIndex:(int32_t)index __attribute__((swift_name("getStyle(index:)")));
- (NSString *)getStyleNameIndex:(int32_t)index __attribute__((swift_name("getStyleName(index:)")));
- (HydraSkikoTypeface * _Nullable)getTypefaceIndex:(int32_t)index __attribute__((swift_name("getTypeface(index:)")));
- (HydraSkikoTypeface * _Nullable)matchStyleStyle:(HydraSkikoFontStyle *)style __attribute__((swift_name("matchStyle(style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature.Companion")))
@interface HydraSkikoFontFeatureCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontFeatureCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinArray<HydraSkikoFontFeature *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (HydraSkikoFontFeature *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
- (HydraKotlinArray<HydraSkikoFontFeature *> *)parseW3Str:(NSString *)str __attribute__((swift_name("parseW3(str:)")));
@property (readonly) HydraKotlinArray<HydraSkikoFontFeature *> *EMPTY __attribute__((swift_name("EMPTY")));
@property (readonly) uint32_t GLOBAL_END __attribute__((swift_name("GLOBAL_END")));
@property (readonly) uint32_t GLOBAL_START __attribute__((swift_name("GLOBAL_START")));
@property (readonly) HydraSkikoPattern *_featurePattern __attribute__((swift_name("_featurePattern")));
@property (readonly) HydraSkikoPattern *_splitPattern __attribute__((swift_name("_splitPattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet.Companion")))
@interface HydraSkikoFontStyleSetCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraSkikoFontStyleSetCompanion *shared __attribute__((swift_name("shared")));
- (HydraSkikoFontStyleSet *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPattern")))
@interface HydraSkikoPattern : HydraBase
- (instancetype)initWithRegex:(NSString *)regex __attribute__((swift_name("init(regex:)"))) __attribute__((objc_designated_initializer));
- (HydraSkikoMatcher *)matcherInput:(id)input __attribute__((swift_name("matcher(input:)")));
- (HydraKotlinArray<NSString *> *)splitInput:(id)input __attribute__((swift_name("split(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatcher")))
@interface HydraSkikoMatcher : HydraBase
- (instancetype)initWithRegex:(HydraKotlinRegex *)regex input:(id)input __attribute__((swift_name("init(regex:input:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)groupIx:(int32_t)ix __attribute__((swift_name("group(ix:)")));
- (BOOL)matches __attribute__((swift_name("matches()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface HydraKotlinRegex : HydraBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<HydraKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(HydraKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<HydraKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<HydraKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<HydraKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<HydraKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<HydraKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<HydraKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<HydraKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface HydraKotlinRegexOption : HydraKotlinEnum<HydraKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HydraKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) HydraKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) HydraKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) HydraKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) HydraKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) HydraKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) HydraKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (HydraKotlinArray<HydraKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HydraKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface HydraKotlinRegexCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (HydraKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol HydraKotlinMatchResult
@required
- (id<HydraKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) HydraKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<HydraKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) HydraKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol HydraKotlinSequence
@required
- (id<HydraKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface HydraKotlinMatchResultDestructured : HydraBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<HydraKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol HydraKotlinMatchGroupCollection <HydraKotlinCollection>
@required
- (HydraKotlinMatchGroup * _Nullable)getIndex_:(int32_t)index __attribute__((swift_name("get(index_:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface HydraKotlinIntProgression : HydraBase <HydraKotlinIterable>
@property (class, readonly, getter=companion) HydraKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (HydraKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol HydraKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol HydraKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface HydraKotlinIntRange : HydraKotlinIntProgression <HydraKotlinClosedRange, HydraKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HydraKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(HydraInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(HydraInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) HydraInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) HydraInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) HydraInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface HydraKotlinMatchGroup : HydraBase
- (instancetype)initWithValue:(NSString *)value range:(HydraKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (HydraKotlinMatchGroup *)doCopyValue:(NSString *)value range:(HydraKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HydraKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface HydraKotlinIntProgressionCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (HydraKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface HydraKotlinIntRangeCompanion : HydraBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HydraKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HydraKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
