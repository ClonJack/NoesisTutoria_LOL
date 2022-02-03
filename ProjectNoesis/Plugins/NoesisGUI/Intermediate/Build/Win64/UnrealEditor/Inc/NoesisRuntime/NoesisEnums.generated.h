// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOESISRUNTIME_NoesisEnums_generated_h
#error "NoesisEnums.generated.h already included, missing '#pragma once' in NoesisEnums.h"
#endif
#define NOESISRUNTIME_NoesisEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectNoesis_Plugins_NoesisGUI_Source_NoesisRuntime_Classes_NoesisEnums_h


#define FOREACH_ENUM_ENOESISNOTIFYCOLLECTIONCHANGEDACTION(op) \
	op(ENoesisNotifyCollectionChangedAction::Add) \
	op(ENoesisNotifyCollectionChangedAction::Remove) \
	op(ENoesisNotifyCollectionChangedAction::Replace) \
	op(ENoesisNotifyCollectionChangedAction::Move) \
	op(ENoesisNotifyCollectionChangedAction::Reset) \
	op(ENoesisNotifyCollectionChangedAction::PreReset) 

enum class ENoesisNotifyCollectionChangedAction : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisNotifyCollectionChangedAction>();

#define FOREACH_ENUM_ENOESISPLACEMENTMODE(op) \
	op(ENoesisPlacementMode::Absolute) \
	op(ENoesisPlacementMode::Relative) \
	op(ENoesisPlacementMode::Bottom) \
	op(ENoesisPlacementMode::Center) \
	op(ENoesisPlacementMode::Right) \
	op(ENoesisPlacementMode::AbsolutePoint) \
	op(ENoesisPlacementMode::RelativePoint) \
	op(ENoesisPlacementMode::Mouse) \
	op(ENoesisPlacementMode::MousePoint) \
	op(ENoesisPlacementMode::Left) \
	op(ENoesisPlacementMode::Top) \
	op(ENoesisPlacementMode::Custom) 

enum class ENoesisPlacementMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisPlacementMode>();

#define FOREACH_ENUM_ENOESISCOLORINTERPOLATIONMODE(op) \
	op(ENoesisColorInterpolationMode::ScRgbLinearInterpolation) \
	op(ENoesisColorInterpolationMode::SRgbLinearInterpolation) 

enum class ENoesisColorInterpolationMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisColorInterpolationMode>();

#define FOREACH_ENUM_ENOESISMENUITEMROLE(op) \
	op(ENoesisMenuItemRole::TopLevelItem) \
	op(ENoesisMenuItemRole::TopLevelHeader) \
	op(ENoesisMenuItemRole::SubmenuItem) \
	op(ENoesisMenuItemRole::SubmenuHeader) 

enum class ENoesisMenuItemRole : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMenuItemRole>();

#define FOREACH_ENUM_ENOESISGEOMETRYCOMBINEMODE(op) \
	op(ENoesisGeometryCombineMode::Union) \
	op(ENoesisGeometryCombineMode::Intersect) \
	op(ENoesisGeometryCombineMode::Xor) \
	op(ENoesisGeometryCombineMode::Exclude) 

enum class ENoesisGeometryCombineMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGeometryCombineMode>();

#define FOREACH_ENUM_ENOESISFILLBEHAVIOR(op) \
	op(ENoesisFillBehavior::HoldEnd) \
	op(ENoesisFillBehavior::Stop) 

enum class ENoesisFillBehavior : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisFillBehavior>();

#define FOREACH_ENUM_ENOESISFONTSTRETCH(op) \
	op(ENoesisFontStretch::UltraCondensed) \
	op(ENoesisFontStretch::ExtraCondensed) \
	op(ENoesisFontStretch::Condensed) \
	op(ENoesisFontStretch::SemiCondensed) \
	op(ENoesisFontStretch::Normal) \
	op(ENoesisFontStretch::SemiExpanded) \
	op(ENoesisFontStretch::Expanded) \
	op(ENoesisFontStretch::ExtraExpanded) \
	op(ENoesisFontStretch::UltraExpanded) 

enum class ENoesisFontStretch : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisFontStretch>();

#define FOREACH_ENUM_ENOESISFONTWEIGHT(op) \
	op(ENoesisFontWeight::Thin) \
	op(ENoesisFontWeight::ExtraLight) \
	op(ENoesisFontWeight::Light) \
	op(ENoesisFontWeight::SemiLight) \
	op(ENoesisFontWeight::Normal) \
	op(ENoesisFontWeight::Medium) \
	op(ENoesisFontWeight::SemiBold) \
	op(ENoesisFontWeight::Bold) \
	op(ENoesisFontWeight::ExtraBold) \
	op(ENoesisFontWeight::Black) \
	op(ENoesisFontWeight::ExtraBlack) 

enum class ENoesisFontWeight : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisFontWeight>();

#define FOREACH_ENUM_ENOESISORIENTATION(op) \
	op(ENoesisOrientation::Horizontal) \
	op(ENoesisOrientation::Vertical) 

enum class ENoesisOrientation : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisOrientation>();

#define FOREACH_ENUM_ENOESISGRADIENTSPREADMETHOD(op) \
	op(ENoesisGradientSpreadMethod::Pad) \
	op(ENoesisGradientSpreadMethod::Reflect) \
	op(ENoesisGradientSpreadMethod::Repeat) 

enum class ENoesisGradientSpreadMethod : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGradientSpreadMethod>();

#define FOREACH_ENUM_ENOESISTEXTTRIMMING(op) \
	op(ENoesisTextTrimming::None) \
	op(ENoesisTextTrimming::CharacterEllipsis) \
	op(ENoesisTextTrimming::WordEllipsis) 

enum class ENoesisTextTrimming : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTextTrimming>();

#define FOREACH_ENUM_ENOESISFILLRULE(op) \
	op(ENoesisFillRule::EvenOdd) \
	op(ENoesisFillRule::Nonzero) 

enum class ENoesisFillRule : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisFillRule>();

#define FOREACH_ENUM_ENOESISTILEMODE(op) \
	op(ENoesisTileMode::None) \
	op(ENoesisTileMode::Tile) \
	op(ENoesisTileMode::FlipX) \
	op(ENoesisTileMode::FlipY) \
	op(ENoesisTileMode::FlipXY) 

enum class ENoesisTileMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTileMode>();

#define FOREACH_ENUM_ENOESISSGUIGRIDUNITTYPE(op) \
	op(ENoesissGuiGridUnitType::Auto) \
	op(ENoesissGuiGridUnitType::Pixel) \
	op(ENoesissGuiGridUnitType::Star) 

enum class ENoesissGuiGridUnitType : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesissGuiGridUnitType>();

#define FOREACH_ENUM_ENOESISFONTSTYLE(op) \
	op(ENoesisFontStyle::Normal) \
	op(ENoesisFontStyle::Italic) \
	op(ENoesisFontStyle::Oblique) 

enum class ENoesisFontStyle : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisFontStyle>();

#define FOREACH_ENUM_ENOESISALIGNMENTX(op) \
	op(ENoesisAlignmentX::Left) \
	op(ENoesisAlignmentX::Center) \
	op(ENoesisAlignmentX::Right) 

enum class ENoesisAlignmentX : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisAlignmentX>();

#define FOREACH_ENUM_ENOESISALIGNMENTY(op) \
	op(ENoesisAlignmentY::Top) \
	op(ENoesisAlignmentY::Center) \
	op(ENoesisAlignmentY::Bottom) 

enum class ENoesisAlignmentY : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisAlignmentY>();

#define FOREACH_ENUM_ENOESISHORIZONTALALIGNMENT(op) \
	op(ENoesisHorizontalAlignment::Left) \
	op(ENoesisHorizontalAlignment::Center) \
	op(ENoesisHorizontalAlignment::Right) \
	op(ENoesisHorizontalAlignment::Stretch) 

enum class ENoesisHorizontalAlignment : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisHorizontalAlignment>();

#define FOREACH_ENUM_ENOESISPOPUPANIMATION(op) \
	op(ENoesisPopupAnimation::None) \
	op(ENoesisPopupAnimation::Fade) \
	op(ENoesisPopupAnimation::Slide) \
	op(ENoesisPopupAnimation::Scroll) 

enum class ENoesisPopupAnimation : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisPopupAnimation>();

#define FOREACH_ENUM_ENOESISSLIPBEHAVIOR(op) \
	op(ENoesisSlipBehavior::Grow) \
	op(ENoesisSlipBehavior::Slip) 

enum class ENoesisSlipBehavior : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisSlipBehavior>();

#define FOREACH_ENUM_ENOESISPENLINEJOIN(op) \
	op(ENoesisPenLineJoin::Miter) \
	op(ENoesisPenLineJoin::Bevel) \
	op(ENoesisPenLineJoin::Round) 

enum class ENoesisPenLineJoin : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisPenLineJoin>();

#define FOREACH_ENUM_ENOESISBRUSHMAPPINGMODE(op) \
	op(ENoesisBrushMappingMode::Absolute) \
	op(ENoesisBrushMappingMode::RelativeToBoundingBox) 

enum class ENoesisBrushMappingMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisBrushMappingMode>();

#define FOREACH_ENUM_ENOESISEXPANDDIRECTION(op) \
	op(ENoesisExpandDirection::Down) \
	op(ENoesisExpandDirection::Up) \
	op(ENoesisExpandDirection::Left) \
	op(ENoesisExpandDirection::Right) 

enum class ENoesisExpandDirection : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisExpandDirection>();

#define FOREACH_ENUM_ENOESISPENLINECAP(op) \
	op(ENoesisPenLineCap::Flat) \
	op(ENoesisPenLineCap::Square) \
	op(ENoesisPenLineCap::Round) \
	op(ENoesisPenLineCap::Triangle) 

enum class ENoesisPenLineCap : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisPenLineCap>();

#define FOREACH_ENUM_ENOESISVISIBILITY(op) \
	op(ENoesisVisibility::Collapsed) \
	op(ENoesisVisibility::Hidden) \
	op(ENoesisVisibility::Visible) 

enum class ENoesisVisibility : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisVisibility>();

#define FOREACH_ENUM_ENOESISPANNINGMODE(op) \
	op(ENoesisPanningMode::Both) \
	op(ENoesisPanningMode::HorizontalFirst) \
	op(ENoesisPanningMode::HorizontalOnly) \
	op(ENoesisPanningMode::None) \
	op(ENoesisPanningMode::VerticalFirst) \
	op(ENoesisPanningMode::VerticalOnly) 

enum class ENoesisPanningMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisPanningMode>();

#define FOREACH_ENUM_ENOESISTEXTALIGNMENT(op) \
	op(ENoesisTextAlignment::Center) \
	op(ENoesisTextAlignment::Justify) \
	op(ENoesisTextAlignment::Left) \
	op(ENoesisTextAlignment::Right) 

enum class ENoesisTextAlignment : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTextAlignment>();

#define FOREACH_ENUM_ENOESISEASINGMODE(op) \
	op(ENoesisEasingMode::EaseOut) \
	op(ENoesisEasingMode::EaseIn) \
	op(ENoesisEasingMode::EaseInOut) 

enum class ENoesisEasingMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisEasingMode>();

#define FOREACH_ENUM_ENOESISSELECTIONMODE(op) \
	op(ENoesisSelectionMode::Single) \
	op(ENoesisSelectionMode::Multiple) \
	op(ENoesisSelectionMode::Extended) 

enum class ENoesisSelectionMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisSelectionMode>();

#define FOREACH_ENUM_ENOESISTICKPLACEMENT(op) \
	op(ENoesisTickPlacement::None) \
	op(ENoesisTickPlacement::TopLeft) \
	op(ENoesisTickPlacement::BottomRight) \
	op(ENoesisTickPlacement::Both) 

enum class ENoesisTickPlacement : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTickPlacement>();

#define FOREACH_ENUM_ENOESISSTRETCHDIRECTION(op) \
	op(ENoesisStretchDirection::UpOnly) \
	op(ENoesisStretchDirection::DownOnly) \
	op(ENoesisStretchDirection::Both) 

enum class ENoesisStretchDirection : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisStretchDirection>();

#define FOREACH_ENUM_ENOESISVERTICALALIGNMENT(op) \
	op(ENoesisVerticalAlignment::Top) \
	op(ENoesisVerticalAlignment::Center) \
	op(ENoesisVerticalAlignment::Bottom) \
	op(ENoesisVerticalAlignment::Stretch) 

enum class ENoesisVerticalAlignment : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisVerticalAlignment>();

#define FOREACH_ENUM_ENOESISREPEATMODE(op) \
	op(ENoesisRepeatMode::Count) \
	op(ENoesisRepeatMode::Duration) \
	op(ENoesisRepeatMode::Forever) 

enum class ENoesisRepeatMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisRepeatMode>();

#define FOREACH_ENUM_ENOESISGRIDVIEWCOLUMNHEADERROLE(op) \
	op(ENoesisGridViewColumnHeaderRole::Normal) \
	op(ENoesisGridViewColumnHeaderRole::Floating) \
	op(ENoesisGridViewColumnHeaderRole::Padding) 

enum class ENoesisGridViewColumnHeaderRole : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGridViewColumnHeaderRole>();

#define FOREACH_ENUM_ENOESISTEXTWRAPPING(op) \
	op(ENoesisTextWrapping::NoWrap) \
	op(ENoesisTextWrapping::Wrap) \
	op(ENoesisTextWrapping::WrapWithOverflow) 

enum class ENoesisTextWrapping : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTextWrapping>();

#define FOREACH_ENUM_ENOESISTICKBARPLACEMENT(op) \
	op(ENoesisTickBarPlacement::Left) \
	op(ENoesisTickBarPlacement::Top) \
	op(ENoesisTickBarPlacement::Right) \
	op(ENoesisTickBarPlacement::Bottom) 

enum class ENoesisTickBarPlacement : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisTickBarPlacement>();

#define FOREACH_ENUM_ENOESISSCROLLBARVISIBILITY(op) \
	op(ENoesisScrollBarVisibility::Disabled) \
	op(ENoesisScrollBarVisibility::Auto) \
	op(ENoesisScrollBarVisibility::Hidden) \
	op(ENoesisScrollBarVisibility::Visible) 

enum class ENoesisScrollBarVisibility : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisScrollBarVisibility>();

#define FOREACH_ENUM_ENOESISCLICKMODE(op) \
	op(ENoesisClickMode::Hover) \
	op(ENoesisClickMode::Press) \
	op(ENoesisClickMode::Release) 

enum class ENoesisClickMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisClickMode>();

#define FOREACH_ENUM_ENOESISMANIPULATIONMODES(op) \
	op(ENoesisManipulationModes::None) \
	op(ENoesisManipulationModes::Rotate) \
	op(ENoesisManipulationModes::Scale) \
	op(ENoesisManipulationModes::TranslateX) \
	op(ENoesisManipulationModes::TranslateY) \
	op(ENoesisManipulationModes::Translate) \
	op(ENoesisManipulationModes::All) 

enum class ENoesisManipulationModes : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisManipulationModes>();

#define FOREACH_ENUM_ENOESISDOCK(op) \
	op(ENoesisDock::Left) \
	op(ENoesisDock::Top) \
	op(ENoesisDock::Right) \
	op(ENoesisDock::Bottom) 

enum class ENoesisDock : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisDock>();

#define FOREACH_ENUM_ENOESISSTRETCH(op) \
	op(ENoesisStretch::None) \
	op(ENoesisStretch::Fill) \
	op(ENoesisStretch::Uniform) \
	op(ENoesisStretch::UniformToFill) 

enum class ENoesisStretch : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisStretch>();

#define FOREACH_ENUM_ENOESISCLOCKSTATE(op) \
	op(ENoesisClockState::Active) \
	op(ENoesisClockState::Paused) \
	op(ENoesisClockState::Filling) \
	op(ENoesisClockState::Stopped) \
	op(ENoesisClockState::Finished) 

enum class ENoesisClockState : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisClockState>();

#define FOREACH_ENUM_ENOESISMESSAGEDIALOGIMAGE(op) \
	op(ENoesisMessageDialogImage::None) \
	op(ENoesisMessageDialogImage::Hand) \
	op(ENoesisMessageDialogImage::Question) \
	op(ENoesisMessageDialogImage::Exclamation) \
	op(ENoesisMessageDialogImage::Asterisk) \
	op(ENoesisMessageDialogImage::Stop) \
	op(ENoesisMessageDialogImage::Error) \
	op(ENoesisMessageDialogImage::Warning) \
	op(ENoesisMessageDialogImage::Information) 

enum class ENoesisMessageDialogImage : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMessageDialogImage>();

#define FOREACH_ENUM_ENOESISMESSAGEDIALOGBUTTON(op) \
	op(ENoesisMessageDialogButton::Ok) \
	op(ENoesisMessageDialogButton::OkCancel) \
	op(ENoesisMessageDialogButton::YesNo) \
	op(ENoesisMessageDialogButton::YesNoCancel) 

enum class ENoesisMessageDialogButton : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMessageDialogButton>();

#define FOREACH_ENUM_ENOESISMESSAGEDIALOGRESULT(op) \
	op(ENoesisMessageDialogResult::Ok) \
	op(ENoesisMessageDialogResult::Cancel) \
	op(ENoesisMessageDialogResult::Yes) \
	op(ENoesisMessageDialogResult::No) 

enum class ENoesisMessageDialogResult : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMessageDialogResult>();

#define FOREACH_ENUM_ENOESISBEFORESETACTION(op) \
	op(ENoesisBeforeSetAction::Delete) \
	op(ENoesisBeforeSetAction::Maintain) 

enum class ENoesisBeforeSetAction : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisBeforeSetAction>();

#define FOREACH_ENUM_ENOESISEVALUATEBEHAVIOR(op) \
	op(ENoesisEvaluateBehavior::Default) \
	op(ENoesisEvaluateBehavior::Once) 

enum class ENoesisEvaluateBehavior : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisEvaluateBehavior>();

#define FOREACH_ENUM_ENOESISKEY(op) \
	op(ENoesisKey::None) \
	op(ENoesisKey::Back) \
	op(ENoesisKey::Tab) \
	op(ENoesisKey::Clear) \
	op(ENoesisKey::Return) \
	op(ENoesisKey::Pause) \
	op(ENoesisKey::Shift) \
	op(ENoesisKey::Control) \
	op(ENoesisKey::Alt) \
	op(ENoesisKey::Escape) \
	op(ENoesisKey::Space) \
	op(ENoesisKey::Prior) \
	op(ENoesisKey::Next) \
	op(ENoesisKey::End) \
	op(ENoesisKey::Home) \
	op(ENoesisKey::Left) \
	op(ENoesisKey::Up) \
	op(ENoesisKey::Right) \
	op(ENoesisKey::Down) \
	op(ENoesisKey::Select) \
	op(ENoesisKey::Print) \
	op(ENoesisKey::Execute) \
	op(ENoesisKey::SnapShot) \
	op(ENoesisKey::Insert) \
	op(ENoesisKey::Delete) \
	op(ENoesisKey::Help) \
	op(ENoesisKey::Num0) \
	op(ENoesisKey::Num1) \
	op(ENoesisKey::Num2) \
	op(ENoesisKey::Num3) \
	op(ENoesisKey::Num4) \
	op(ENoesisKey::Num5) \
	op(ENoesisKey::Num6) \
	op(ENoesisKey::Num7) \
	op(ENoesisKey::Num8) \
	op(ENoesisKey::Num9) \
	op(ENoesisKey::Pad0) \
	op(ENoesisKey::Pad1) \
	op(ENoesisKey::Pad2) \
	op(ENoesisKey::Pad3) \
	op(ENoesisKey::Pad4) \
	op(ENoesisKey::Pad5) \
	op(ENoesisKey::Pad6) \
	op(ENoesisKey::Pad7) \
	op(ENoesisKey::Pad8) \
	op(ENoesisKey::Pad9) \
	op(ENoesisKey::Multiply) \
	op(ENoesisKey::Add) \
	op(ENoesisKey::Separator) \
	op(ENoesisKey::Subtract) \
	op(ENoesisKey::Decimal) \
	op(ENoesisKey::Divide) \
	op(ENoesisKey::A) \
	op(ENoesisKey::B) \
	op(ENoesisKey::C) \
	op(ENoesisKey::D) \
	op(ENoesisKey::E) \
	op(ENoesisKey::F) \
	op(ENoesisKey::G) \
	op(ENoesisKey::H) \
	op(ENoesisKey::I) \
	op(ENoesisKey::J) \
	op(ENoesisKey::K) \
	op(ENoesisKey::L) \
	op(ENoesisKey::M) \
	op(ENoesisKey::N) \
	op(ENoesisKey::O) \
	op(ENoesisKey::P) \
	op(ENoesisKey::Q) \
	op(ENoesisKey::R) \
	op(ENoesisKey::S) \
	op(ENoesisKey::T) \
	op(ENoesisKey::U) \
	op(ENoesisKey::V) \
	op(ENoesisKey::W) \
	op(ENoesisKey::X) \
	op(ENoesisKey::Y) \
	op(ENoesisKey::Z) \
	op(ENoesisKey::F1) \
	op(ENoesisKey::F2) \
	op(ENoesisKey::F3) \
	op(ENoesisKey::F4) \
	op(ENoesisKey::F5) \
	op(ENoesisKey::F6) \
	op(ENoesisKey::F7) \
	op(ENoesisKey::F8) \
	op(ENoesisKey::F9) \
	op(ENoesisKey::F10) \
	op(ENoesisKey::F11) \
	op(ENoesisKey::F12) \
	op(ENoesisKey::F13) \
	op(ENoesisKey::F14) \
	op(ENoesisKey::F15) \
	op(ENoesisKey::F16) \
	op(ENoesisKey::F17) \
	op(ENoesisKey::F18) \
	op(ENoesisKey::F19) \
	op(ENoesisKey::F20) \
	op(ENoesisKey::F21) \
	op(ENoesisKey::F22) \
	op(ENoesisKey::F23) \
	op(ENoesisKey::F24) \
	op(ENoesisKey::NumLock) \
	op(ENoesisKey::Scroll) \
	op(ENoesisKey::Oem1) \
	op(ENoesisKey::OemPlus) \
	op(ENoesisKey::OemComma) \
	op(ENoesisKey::OemMinus) \
	op(ENoesisKey::OemPeriod) \
	op(ENoesisKey::Oem2) \
	op(ENoesisKey::Oem3) \
	op(ENoesisKey::Oem4) \
	op(ENoesisKey::Oem5) \
	op(ENoesisKey::Oem6) \
	op(ENoesisKey::Oem7) \
	op(ENoesisKey::Oem8) \
	op(ENoesisKey::Oem102) 

enum class ENoesisKey : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisKey>();

#define FOREACH_ENUM_ENOESISSCROLLEVENTTYPE(op) \
	op(ENoesisScrollEventType::EndScroll) \
	op(ENoesisScrollEventType::First) \
	op(ENoesisScrollEventType::LargeDecrement) \
	op(ENoesisScrollEventType::LargeIncrement) \
	op(ENoesisScrollEventType::Last) \
	op(ENoesisScrollEventType::SmallDecrement) \
	op(ENoesisScrollEventType::SmallIncrement) \
	op(ENoesisScrollEventType::ThumbPosition) \
	op(ENoesisScrollEventType::ThumbTrack) 

enum class ENoesisScrollEventType : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisScrollEventType>();

#define FOREACH_ENUM_ENOESISMOUSEBUTTONSTATE(op) \
	op(ENoesisMouseButtonState::Pressed) \
	op(ENoesisMouseButtonState::Released) 

enum class ENoesisMouseButtonState : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMouseButtonState>();

#define FOREACH_ENUM_ENOESISMOUSEBUTTON(op) \
	op(ENoesisMouseButton::Left) \
	op(ENoesisMouseButton::Right) \
	op(ENoesisMouseButton::Middle) \
	op(ENoesisMouseButton::XButton1) \
	op(ENoesisMouseButton::XButton2) 

enum class ENoesisMouseButton : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisMouseButton>();

#define FOREACH_ENUM_ENOESISDURATIONTYPE(op) \
	op(ENoesisDurationType::Automatic) \
	op(ENoesisDurationType::TimeSpan) \
	op(ENoesisDurationType::Forever) 

enum class ENoesisDurationType : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisDurationType>();

#define FOREACH_ENUM_ENOESISROUTINGSTRATEGY(op) \
	op(ENoesisRoutingStrategy::Bubbling) \
	op(ENoesisRoutingStrategy::Tunneling) \
	op(ENoesisRoutingStrategy::Direct) 

enum class ENoesisRoutingStrategy : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisRoutingStrategy>();

#define FOREACH_ENUM_ENOESISRELATIVESOURCEMODE(op) \
	op(ENoesisRelativeSourceMode::PreviousData) \
	op(ENoesisRelativeSourceMode::TemplatedParent) \
	op(ENoesisRelativeSourceMode::Self) \
	op(ENoesisRelativeSourceMode::FindAncestor) 

enum class ENoesisRelativeSourceMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisRelativeSourceMode>();

#define FOREACH_ENUM_ENOESISGENERATORSTATUS(op) \
	op(ENoesisGeneratorStatus::NotStarted) \
	op(ENoesisGeneratorStatus::GeneratingContainers) \
	op(ENoesisGeneratorStatus::ContainersGenerated) \
	op(ENoesisGeneratorStatus::Error) 

enum class ENoesisGeneratorStatus : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisGeneratorStatus>();

#define FOREACH_ENUM_ENOESISUPDATESOURCETRIGGER(op) \
	op(ENoesisUpdateSourceTrigger::Default) \
	op(ENoesisUpdateSourceTrigger::PropertyChanged) \
	op(ENoesisUpdateSourceTrigger::LostFocus) \
	op(ENoesisUpdateSourceTrigger::Explicit) 

enum class ENoesisUpdateSourceTrigger : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisUpdateSourceTrigger>();

#define FOREACH_ENUM_ENOESISBINDINGMODE(op) \
	op(ENoesisBindingMode::Default) \
	op(ENoesisBindingMode::TwoWay) \
	op(ENoesisBindingMode::OneWay) \
	op(ENoesisBindingMode::OneTime) \
	op(ENoesisBindingMode::OneWayToSource) 

enum class ENoesisBindingMode : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisBindingMode>();

#define FOREACH_ENUM_ENOESISHANDOFFBEHAVIOR(op) \
	op(ENoesisHandoffBehavior::SnapshotAndReplace) \
	op(ENoesisHandoffBehavior::Compose) 

enum class ENoesisHandoffBehavior : uint8;
template<> NOESISRUNTIME_API UEnum* StaticEnum<ENoesisHandoffBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
