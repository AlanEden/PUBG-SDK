//PUBG Version : 7.0.5.16 
//PUBG OffsetSDK Dump   by : Rax  QQ:10965206



//Enum CoreUObject.EInterpCurveMode
enum class FEInterpCurveMode : uint8_t
{
	CIM_Linear = 0, 
	CIM_CurveAuto = 1, 
	CIM_Constant = 2, 
	CIM_CurveUser = 3, 
	CIM_CurveBreak = 4, 
	CIM_CurveAutoClamped = 5, 
	CIM_MAX = 6, 
};
//Enum CoreUObject.ERangeBoundTypes
enum class FERangeBoundTypes : uint8_t
{
	ERangeBoundTypes::Exclusive = 0, 
	ERangeBoundTypes::Inclusive = 1, 
	ERangeBoundTypes::Open = 2, 
	ERangeBoundTypes::ERangeBoundTypes_MAX = 3, 
};
//Enum CoreUObject.EAutomationEventType
enum class FEAutomationEventType : uint8_t
{
	EAutomationEventType::Info = 0, 
	EAutomationEventType::Warning = 1, 
	EAutomationEventType::Error = 2, 
	EAutomationEventType::EAutomationEventType_MAX = 3, 
};
//Enum Engine.ETextGender
enum class FETextGender : uint8_t
{
	ETextGender::Masculine = 0, 
	ETextGender::Feminine = 1, 
	ETextGender::Neuter = 2, 
	ETextGender::ETextGender_MAX = 3, 
};
//Enum Engine.EFormatArgumentType
enum class FEFormatArgumentType : uint8_t
{
	EFormatArgumentType::Int = 0, 
	EFormatArgumentType::UInt = 1, 
	EFormatArgumentType::Float = 2, 
	EFormatArgumentType::Double = 3, 
	EFormatArgumentType::Text = 4, 
	EFormatArgumentType::Gender = 5, 
	EFormatArgumentType::EFormatArgumentType_MAX = 6, 
};
//Enum InputCore.ETouchIndex
enum class FETouchIndex : uint8_t
{
	ETouchIndex::Touch1 = 0, 
	ETouchIndex::Touch2 = 1, 
	ETouchIndex::Touch3 = 2, 
	ETouchIndex::Touch4 = 3, 
	ETouchIndex::Touch5 = 4, 
	ETouchIndex::Touch6 = 5, 
	ETouchIndex::Touch7 = 6, 
	ETouchIndex::Touch8 = 7, 
	ETouchIndex::Touch9 = 8, 
	ETouchIndex::Touch10 = 9, 
	ETouchIndex::ETouchIndex_MAX = 10, 
};
//Enum Engine.EEndPlayReason
enum class FEEndPlayReason : uint8_t
{
	EEndPlayReason::Destroyed = 0, 
	EEndPlayReason::LevelTransition = 1, 
	EEndPlayReason::EndPlayInEditor = 2, 
	EEndPlayReason::RemovedFromWorld = 3, 
	EEndPlayReason::Quit = 4, 
	EEndPlayReason::EEndPlayReason_MAX = 5, 
};
//Enum Engine.ENavPathEvent
enum class FENavPathEvent : uint8_t
{
	ENavPathEvent::Cleared = 0, 
	ENavPathEvent::NewPath = 1, 
	ENavPathEvent::UpdatedDueToGoalMoved = 2, 
	ENavPathEvent::UpdatedDueToNavigationChanged = 3, 
	ENavPathEvent::Invalidated = 4, 
	ENavPathEvent::RePathFailed = 5, 
	ENavPathEvent::MetaPathUpdate = 6, 
	ENavPathEvent::Custom = 7, 
	ENavPathEvent::ENavPathEvent_MAX = 8, 
};
//Enum Engine.ETickingGroup
enum class FETickingGroup : uint8_t
{
	TG_PrePhysics = 0, 
	TG_StartPhysics = 1, 
	TG_DuringPhysics = 2, 
	TG_EndPhysics = 3, 
	TG_PostPhysics = 4, 
	TG_PostUpdateWork = 5, 
	TG_LastDemotable = 6, 
	TG_NewlySpawned = 7, 
	TG_MAX = 8, 
};
//Enum Engine.EComponentCreationMethod
enum class FEComponentCreationMethod : uint8_t
{
	EComponentCreationMethod::Native = 0, 
	EComponentCreationMethod::SimpleConstructionScript = 1, 
	EComponentCreationMethod::UserConstructionScript = 2, 
	EComponentCreationMethod::Instance = 3, 
	EComponentCreationMethod::EComponentCreationMethod_MAX = 4, 
};
//Enum Engine.EPlaneConstraintAxisSetting
enum class FEPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting::Custom = 0, 
	EPlaneConstraintAxisSetting::X = 1, 
	EPlaneConstraintAxisSetting::Y = 2, 
	EPlaneConstraintAxisSetting::Z = 3, 
	EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting = 4, 
	EPlaneConstraintAxisSetting::EPlaneConstraintAxisSetting_MAX = 5, 
};
//Enum Engine.EInterpToBehaviourType
enum class FEInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType::OneShot = 0, 
	EInterpToBehaviourType::OneShot_Reverse = 1, 
	EInterpToBehaviourType::Loop_Reset = 2, 
	EInterpToBehaviourType::PingPong = 3, 
	EInterpToBehaviourType::EInterpToBehaviourType_MAX = 4, 
};
//Enum Engine.EPlatformInterfaceDataType
enum class FEPlatformInterfaceDataType : uint8_t
{
	PIDT_None = 0, 
	PIDT_Int = 1, 
	PIDT_Float = 2, 
	PIDT_String = 3, 
	PIDT_Object = 4, 
	PIDT_Custom = 5, 
	PIDT_MAX = 6, 
};
//Enum Engine.EMovementMode
enum class FEMovementMode : uint8_t
{
	MOVE_None = 0, 
	MOVE_Walking = 1, 
	MOVE_NavWalking = 2, 
	MOVE_Falling = 3, 
	MOVE_Swimming = 4, 
	MOVE_Flying = 5, 
	MOVE_Custom = 6, 
	MOVE_MAX = 7, 
};
//Enum Engine.ENetworkFailure
enum class FENetworkFailure : uint8_t
{
	ENetworkFailure::NetDriverAlreadyExists = 0, 
	ENetworkFailure::NetDriverCreateFailure = 1, 
	ENetworkFailure::NetDriverListenFailure = 2, 
	ENetworkFailure::ConnectionLost = 3, 
	ENetworkFailure::ConnectionTimeout = 4, 
	ENetworkFailure::FailureReceived = 5, 
	ENetworkFailure::OutdatedClient = 6, 
	ENetworkFailure::OutdatedServer = 7, 
	ENetworkFailure::PendingConnectionFailure = 8, 
	ENetworkFailure::NetGuidMismatch = 9, 
	ENetworkFailure::NetChecksumMismatch = 10, 
	ENetworkFailure::ENetworkFailure_MAX = 11, 
};
//Enum Engine.ETravelFailure
enum class FETravelFailure : uint8_t
{
	ETravelFailure::NoLevel = 0, 
	ETravelFailure::LoadMapFailure = 1, 
	ETravelFailure::InvalidURL = 2, 
	ETravelFailure::PackageMissing = 3, 
	ETravelFailure::PackageVersion = 4, 
	ETravelFailure::NoDownload = 5, 
	ETravelFailure::TravelFailure = 6, 
	ETravelFailure::CheatCommands = 7, 
	ETravelFailure::PendingNetGameCreateFailure = 8, 
	ETravelFailure::CloudSaveFailure = 9, 
	ETravelFailure::ServerTravelFailure = 10, 
	ETravelFailure::ClientTravelFailure = 11, 
	ETravelFailure::ETravelFailure_MAX = 12, 
};
//Enum Engine.EScreenOrientation
enum class FEScreenOrientation : uint8_t
{
	EScreenOrientation::Unknown = 0, 
	EScreenOrientation::Portrait = 1, 
	EScreenOrientation::PortraitUpsideDown = 2, 
	EScreenOrientation::LandscapeLeft = 3, 
	EScreenOrientation::LandscapeRight = 4, 
	EScreenOrientation::FaceUp = 5, 
	EScreenOrientation::FaceDown = 6, 
	EScreenOrientation::EScreenOrientation_MAX = 7, 
};
//Enum Engine.EObjectTypeQuery
enum class FEObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1 = 0, 
	ObjectTypeQuery2 = 1, 
	ObjectTypeQuery3 = 2, 
	ObjectTypeQuery4 = 3, 
	ObjectTypeQuery5 = 4, 
	ObjectTypeQuery6 = 5, 
	ObjectTypeQuery7 = 6, 
	ObjectTypeQuery8 = 7, 
	ObjectTypeQuery9 = 8, 
	ObjectTypeQuery10 = 9, 
	ObjectTypeQuery11 = 10, 
	ObjectTypeQuery12 = 11, 
	ObjectTypeQuery13 = 12, 
	ObjectTypeQuery14 = 13, 
	ObjectTypeQuery15 = 14, 
	ObjectTypeQuery16 = 15, 
	ObjectTypeQuery17 = 16, 
	ObjectTypeQuery18 = 17, 
	ObjectTypeQuery19 = 18, 
	ObjectTypeQuery20 = 19, 
	ObjectTypeQuery21 = 20, 
	ObjectTypeQuery22 = 21, 
	ObjectTypeQuery23 = 22, 
	ObjectTypeQuery24 = 23, 
	ObjectTypeQuery25 = 24, 
	ObjectTypeQuery26 = 25, 
	ObjectTypeQuery27 = 26, 
	ObjectTypeQuery28 = 27, 
	ObjectTypeQuery29 = 28, 
	ObjectTypeQuery30 = 29, 
	ObjectTypeQuery31 = 30, 
	ObjectTypeQuery32 = 31, 
	ObjectTypeQuery_MAX = 32, 
	EObjectTypeQuery_MAX = 33, 
};
//Enum Engine.EDrawDebugTrace
enum class FEDrawDebugTrace : uint8_t
{
	EDrawDebugTrace::None = 0, 
	EDrawDebugTrace::ForOneFrame = 1, 
	EDrawDebugTrace::ForDuration = 2, 
	EDrawDebugTrace::Persistent = 3, 
	EDrawDebugTrace::EDrawDebugTrace_MAX = 4, 
};
//Enum Engine.ETraceTypeQuery
enum class FETraceTypeQuery : uint8_t
{
	TraceTypeQuery1 = 0, 
	TraceTypeQuery2 = 1, 
	TraceTypeQuery3 = 2, 
	TraceTypeQuery4 = 3, 
	TraceTypeQuery5 = 4, 
	TraceTypeQuery6 = 5, 
	TraceTypeQuery7 = 6, 
	TraceTypeQuery8 = 7, 
	TraceTypeQuery9 = 8, 
	TraceTypeQuery10 = 9, 
	TraceTypeQuery11 = 10, 
	TraceTypeQuery12 = 11, 
	TraceTypeQuery13 = 12, 
	TraceTypeQuery14 = 13, 
	TraceTypeQuery15 = 14, 
	TraceTypeQuery16 = 15, 
	TraceTypeQuery17 = 16, 
	TraceTypeQuery18 = 17, 
	TraceTypeQuery19 = 18, 
	TraceTypeQuery20 = 19, 
	TraceTypeQuery21 = 20, 
	TraceTypeQuery22 = 21, 
	TraceTypeQuery23 = 22, 
	TraceTypeQuery24 = 23, 
	TraceTypeQuery25 = 24, 
	TraceTypeQuery26 = 25, 
	TraceTypeQuery27 = 26, 
	TraceTypeQuery28 = 27, 
	TraceTypeQuery29 = 28, 
	TraceTypeQuery30 = 29, 
	TraceTypeQuery31 = 30, 
	TraceTypeQuery32 = 31, 
	TraceTypeQuery_MAX = 32, 
	ETraceTypeQuery_MAX = 33, 
};
//Enum Engine.EMoveComponentAction
enum class FEMoveComponentAction : uint8_t
{
	EMoveComponentAction::Move = 0, 
	EMoveComponentAction::Stop = 1, 
	EMoveComponentAction::Return = 2, 
	EMoveComponentAction::EMoveComponentAction_MAX = 3, 
};
//Enum Engine.EQuitPreference
enum class FEQuitPreference : uint8_t
{
	EQuitPreference::Quit = 0, 
	EQuitPreference::Background = 1, 
	EQuitPreference::EQuitPreference_MAX = 2, 
};
//Enum HeadMountedDisplay.ETrackingStatus
enum class FETrackingStatus : uint8_t
{
	ETrackingStatus::NotTracked = 0, 
	ETrackingStatus::InertialOnly = 1, 
	ETrackingStatus::Tracked = 2, 
	ETrackingStatus::ETrackingStatus_MAX = 3, 
};
//Enum SlateCore.ECheckBoxState
enum class FECheckBoxState : uint8_t
{
	ECheckBoxState::Unchecked = 0, 
	ECheckBoxState::Checked = 1, 
	ECheckBoxState::Undetermined = 2, 
	ECheckBoxState::ECheckBoxState_MAX = 3, 
};
//Enum CoreUObject.EMouseCursor
enum class FEMouseCursor : uint8_t
{
	EMouseCursor::None = 0, 
	EMouseCursor::Default = 1, 
	EMouseCursor::TextEditBeam = 2, 
	EMouseCursor::ResizeLeftRight = 3, 
	EMouseCursor::ResizeUpDown = 4, 
	EMouseCursor::ResizeSouthEast = 5, 
	EMouseCursor::ResizeSouthWest = 6, 
	EMouseCursor::CardinalCross = 7, 
	EMouseCursor::Crosshairs = 8, 
	EMouseCursor::Hand = 9, 
	EMouseCursor::GrabHand = 10, 
	EMouseCursor::GrabHandClosed = 11, 
	EMouseCursor::SlashedCircle = 12, 
	EMouseCursor::EyeDropper = 13, 
	EMouseCursor::EMouseCursor_MAX = 14, 
};
//Enum SlateCore.ESlateBrushImageType
enum class FESlateBrushImageType : uint8_t
{
	ESlateBrushImageType::NoImage = 0, 
	ESlateBrushImageType::FullColor = 1, 
	ESlateBrushImageType::Linear = 2, 
	ESlateBrushImageType::ESlateBrushImageType_MAX = 3, 
};
//Enum SlateCore.ESlateBrushMirrorType
enum class FESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType::NoMirror = 0, 
	ESlateBrushMirrorType::Horizontal = 1, 
	ESlateBrushMirrorType::Vertical = 2, 
	ESlateBrushMirrorType::Both = 3, 
	ESlateBrushMirrorType::ESlateBrushMirrorType_MAX = 4, 
};
//Enum SlateCore.ESlateBrushTileType
enum class FESlateBrushTileType : uint8_t
{
	ESlateBrushTileType::NoTile = 0, 
	ESlateBrushTileType::Horizontal = 1, 
	ESlateBrushTileType::Vertical = 2, 
	ESlateBrushTileType::Both = 3, 
	ESlateBrushTileType::ESlateBrushTileType_MAX = 4, 
};
//Enum SlateCore.ESlateColorStylingMode
enum class FESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode::UseColor_Specified = 0, 
	ESlateColorStylingMode::UseColor_Specified_Link = 1, 
	ESlateColorStylingMode::UseColor_Foreground = 2, 
	ESlateColorStylingMode::UseColor_Foreground_Subdued = 3, 
	ESlateColorStylingMode::UseColor_MAX = 4, 
};
//Enum SlateCore.ESlateBrushDrawType
enum class FESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType::NoDrawType = 0, 
	ESlateBrushDrawType::Box = 1, 
	ESlateBrushDrawType::Border = 2, 
	ESlateBrushDrawType::Image = 3, 
	ESlateBrushDrawType::ESlateBrushDrawType_MAX = 4, 
};
//Enum UMG.ESlateVisibility
enum class FESlateVisibility : uint8_t
{
	ESlateVisibility::Visible = 0, 
	ESlateVisibility::Collapsed = 1, 
	ESlateVisibility::Hidden = 2, 
	ESlateVisibility::HitTestInvisible = 3, 
	ESlateVisibility::SelfHitTestInvisible = 4, 
	ESlateVisibility::ESlateVisibility_MAX = 5, 
};
//Enum SlateCore.EUINavigationRule
enum class FEUINavigationRule : uint8_t
{
	EUINavigationRule::Escape = 0, 
	EUINavigationRule::Explicit = 1, 
	EUINavigationRule::Wrap = 2, 
	EUINavigationRule::Stop = 3, 
	EUINavigationRule::Custom = 4, 
	EUINavigationRule::Invalid = 5, 
	EUINavigationRule::EUINavigationRule_MAX = 6, 
};
//Enum SlateCore.EUINavigation
enum class FEUINavigation : uint8_t
{
	EUINavigation::Left = 0, 
	EUINavigation::Right = 1, 
	EUINavigation::Up = 2, 
	EUINavigation::Down = 3, 
	EUINavigation::Next = 4, 
	EUINavigation::Previous = 5, 
	EUINavigation::Num = 6, 
	EUINavigation::Invalid = 7, 
	EUINavigation::EUINavigation_MAX = 8, 
};
//Enum SlateCore.ESelectInfo
enum class FESelectInfo : uint8_t
{
	ESelectInfo::OnKeyPress = 0, 
	ESelectInfo::OnNavigation = 1, 
	ESelectInfo::OnMouseClick = 2, 
	ESelectInfo::Direct = 3, 
	ESelectInfo::ESelectInfo_MAX = 4, 
};
//Enum SlateCore.EConsumeMouseWheel
enum class FEConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel::WhenScrollingPossible = 0, 
	EConsumeMouseWheel::Always = 1, 
	EConsumeMouseWheel::Never = 2, 
	EConsumeMouseWheel::EConsumeMouseWheel_MAX = 3, 
};
//Enum SlateCore.EFontHinting
enum class FEFontHinting : uint8_t
{
	EFontHinting::Default = 0, 
	EFontHinting::Auto = 1, 
	EFontHinting::AutoLight = 2, 
	EFontHinting::Monochrome = 3, 
	EFontHinting::None = 4, 
	EFontHinting::EFontHinting_MAX = 5, 
};
//Enum SlateCore.ETextCommit
enum class FETextCommit : uint8_t
{
	ETextCommit::Default = 0, 
	ETextCommit::OnEnter = 1, 
	ETextCommit::OnUserMovedFocus = 2, 
	ETextCommit::OnCleared = 3, 
	ETextCommit::ETextCommit_MAX = 4, 
};
//Enum Slate.ETextFlowDirection
enum class FETextFlowDirection : uint8_t
{
	ETextFlowDirection::Auto = 0, 
	ETextFlowDirection::LeftToRight = 1, 
	ETextFlowDirection::RightToLeft = 2, 
	ETextFlowDirection::ETextFlowDirection_MAX = 3, 
};
//Enum SlateCore.ETextShapingMethod
enum class FETextShapingMethod : uint8_t
{
	ETextShapingMethod::Auto = 0, 
	ETextShapingMethod::KerningOnly = 1, 
	ETextShapingMethod::FullShaping = 2, 
	ETextShapingMethod::ETextShapingMethod_MAX = 3, 
};
//Enum UMG.EVirtualKeyboardType
enum class FEVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType::Default = 0, 
	EVirtualKeyboardType::Number = 1, 
	EVirtualKeyboardType::Web = 2, 
	EVirtualKeyboardType::Email = 3, 
	EVirtualKeyboardType::Password = 4, 
	EVirtualKeyboardType::AlphaNumeric = 5, 
	EVirtualKeyboardType::EVirtualKeyboardType_MAX = 6, 
};
//Enum Slate.ETextWrappingPolicy
enum class FETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy::DefaultWrapping = 0, 
	ETextWrappingPolicy::AllowPerCharacterWrapping = 1, 
	ETextWrappingPolicy::ETextWrappingPolicy_MAX = 2, 
};
//Enum Slate.ETextJustify
enum class FETextJustify : uint8_t
{
	ETextJustify::Left = 0, 
	ETextJustify::Center = 1, 
	ETextJustify::Right = 2, 
	ETextJustify::ETextJustify_MAX = 3, 
};
//Enum Engine.EInputEvent
enum class FEInputEvent : uint8_t
{
	IE_Pressed = 0, 
	IE_Released = 1, 
	IE_Repeat = 2, 
	IE_DoubleClick = 3, 
	IE_Axis = 4, 
	IE_MAX = 5, 
};
//Enum UMG.EUMGSequencePlayMode
enum class FEUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode::Forward = 0, 
	EUMGSequencePlayMode::Reverse = 1, 
	EUMGSequencePlayMode::PingPong = 2, 
	EUMGSequencePlayMode::EUMGSequencePlayMode_MAX = 3, 
};
//Enum TslGame.EPopupButtonID
enum class FEPopupButtonID : uint8_t
{
	EPopupButtonID::Cancel_Or_No = 0, 
	EPopupButtonID::Yes_Or_OK = 1, 
	EPopupButtonID::EPopupButtonID_MAX = 2, 
};
//Enum TslGame.ESystemMessageType
enum class FESystemMessageType : uint8_t
{
	ESystemMessageType::Debug = 0, 
	ESystemMessageType::Notify = 1, 
	ESystemMessageType::Warning = 2, 
	ESystemMessageType::Error = 3, 
	ESystemMessageType::Important = 4, 
	ESystemMessageType::NotifyCommand = 5, 
	ESystemMessageType::ESystemMessageType_MAX = 6, 
};
//Enum TslGame.EOutGamePlatformProvider
enum class FEOutGamePlatformProvider : uint8_t
{
	EOutGamePlatformProvider::Unknown = 0, 
	EOutGamePlatformProvider::Bro = 1, 
	EOutGamePlatformProvider::PcSteam = 2, 
	EOutGamePlatformProvider::PcDmm = 3, 
	EOutGamePlatformProvider::PcMailRu = 4, 
	EOutGamePlatformProvider::PcKakao = 5, 
	EOutGamePlatformProvider::PcTencent = 6, 
	EOutGamePlatformProvider::ConsoleXbox = 7, 
	EOutGamePlatformProvider::ConsolePsn = 8, 
	EOutGamePlatformProvider::PcLiteGarena = 9, 
	EOutGamePlatformProvider::PcLiteGlobalAccount = 10, 
	EOutGamePlatformProvider::Max = 11, 
	EOutGamePlatformProvider::EOutGamePlatformProvider_MAX = 12, 
};
//Enum TslGame.EDamageReason
enum class FEDamageReason : uint8_t
{
	EDamageReason::None = 0, 
	EDamageReason::HeadShot = 1, 
	EDamageReason::TorsoShot = 2, 
	EDamageReason::PelvisShot = 3, 
	EDamageReason::ArmShot = 4, 
	EDamageReason::LegShot = 5, 
	EDamageReason::NonSpecific = 6, 
	EDamageReason::EDamageReason_MAX = 7, 
};
//Enum TslGame.EDamageTypeCategory
enum class FEDamageTypeCategory : uint8_t
{
	EDamageTypeCategory::Damage_None = 0, 
	EDamageTypeCategory::Damage_Instant = 1, 
	EDamageTypeCategory::Damage_Gun = 2, 
	EDamageTypeCategory::Damage_Melee = 3, 
	EDamageTypeCategory::Damage_Punch = 4, 
	EDamageTypeCategory::Damage_ZombiePunch = 5, 
	EDamageTypeCategory::Damage_Groggy = 6, 
	EDamageTypeCategory::Damage_BlueZone = 7, 
	EDamageTypeCategory::Damage_VehicleHit = 8, 
	EDamageTypeCategory::Damage_VehicleCrashHit = 9, 
	EDamageTypeCategory::Damage_Molotov = 10, 
	EDamageTypeCategory::Damage_Explosion = 11, 
	EDamageTypeCategory::Damage_Explosion_Grenade = 12, 
	EDamageTypeCategory::Damage_Explosion_RedZone = 13, 
	EDamageTypeCategory::Damage_Explosion_Vehicle = 14, 
	EDamageTypeCategory::Damage_Instant_Fall = 15, 
	EDamageTypeCategory::Damage_Drown = 16, 
	EDamageTypeCategory::Damage_BleedOut = 17, 
	EDamageTypeCategory::Damage_Explosion_JerryCan = 18, 
	EDamageTypeCategory::Damage_ZombieBuff = 19, 
	EDamageTypeCategory::Damage_CPPWinExit = 20, 
	EDamageTypeCategory::Damage_MeleeThrow = 21, 
	EDamageTypeCategory::Damage_Explosion_C4 = 22, 
	EDamageTypeCategory::Damage_Explosion_StickyBomb = 23, 
	EDamageTypeCategory::Damage_Explosion_Breach = 24, 
	EDamageTypeCategory::Damage_Explosion_PanzerFaustWarhead = 25, 
	EDamageTypeCategory::Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 26, 
	EDamageTypeCategory::Damage_Explosion_PanzerFaustBackBlast = 27, 
	EDamageTypeCategory::Damage_Explosion_BlackZone = 28, 
	EDamageTypeCategory::Damage_MAX = 29, 
};
//Enum Engine.EStanceMode
enum class FEStanceMode : uint8_t
{
	STANCE_None = 0, 
	STANCE_Stand = 1, 
	STANCE_Crouch = 2, 
	STANCE_Prone = 3, 
	STANCE_MAX = 4, 
};
//Enum TslGame.ESkydiveState
enum class FESkydiveState : uint8_t
{
	ESkydiveState::Skydive_None = 0, 
	ESkydiveState::Skydive_Freefall = 1, 
	ESkydiveState::Skydive_ParachuteDeploying = 2, 
	ESkydiveState::Skydive_ParachuteDeployed = 3, 
	ESkydiveState::Skydive_ParachuteCollapsing = 4, 
	ESkydiveState::Skydive_MAX = 5, 
};
//Enum TslGame.EMarkerType
enum class FEMarkerType : uint8_t
{
	EMarkerType::Normal = 0, 
	EMarkerType::Attack = 1, 
	EMarkerType::Danger = 2, 
	EMarkerType::Defend = 3, 
	EMarkerType::Loot = 4, 
	EMarkerType::Regroup = 5, 
	EMarkerType::Vehicle = 6, 
	EMarkerType::EMarkerType_MAX = 7, 
};
//Enum TslGame.EPlatoonSupportRequestEventType
enum class FEPlatoonSupportRequestEventType : uint8_t
{
	EPlatoonSupportRequestEventType::Start = 0, 
	EPlatoonSupportRequestEventType::Interactible = 1, 
	EPlatoonSupportRequestEventType::Finish = 2, 
	EPlatoonSupportRequestEventType::EPlatoonSupportRequestEventType_MAX = 3, 
};
//Enum TslGame.EPlatoonCarePackageType
enum class FEPlatoonCarePackageType : uint8_t
{
	EPlatoonCarePackageType::NotDesignated = 0, 
	EPlatoonCarePackageType::WeaponPackage = 1, 
	EPlatoonCarePackageType::HealingPackage = 2, 
	EPlatoonCarePackageType::EPlatoonCarePackageType_MAX = 3, 
};
//Enum TslGame.EWeaponAttachmentSlotID
enum class FEWeaponAttachmentSlotID : uint8_t
{
	EWeaponAttachmentSlotID::None = 0, 
	EWeaponAttachmentSlotID::Muzzle = 1, 
	EWeaponAttachmentSlotID::LowerRail = 2, 
	EWeaponAttachmentSlotID::UpperRail = 3, 
	EWeaponAttachmentSlotID::Magazine = 4, 
	EWeaponAttachmentSlotID::Stock = 5, 
	EWeaponAttachmentSlotID::Angled = 6, 
	EWeaponAttachmentSlotID::EWeaponAttachmentSlotID_MAX = 7, 
};
//Enum TslGame.EBreathType
enum class FEBreathType : uint8_t
{
	EBreathType::Apnea = 0, 
	EBreathType::ADS = 1, 
	EBreathType::EBreathType_MAX = 2, 
};
//Enum TslGame.ETargetingType
enum class FETargetingType : uint8_t
{
	ETargetingType::Targeting_None = 0, 
	ETargetingType::Targeting_Aiming = 1, 
	ETargetingType::Targeting_Scoping = 2, 
	ETargetingType::Targeting_MAX = 3, 
};
//Enum TslGame.ETslOvercastAction
enum class FETslOvercastAction : uint8_t
{
	ETslOvercastAction::Initialized = 0, 
	ETslOvercastAction::Prolonged = 1, 
	ETslOvercastAction::CreateThunder = 2, 
	ETslOvercastAction::ETslOvercastAction_MAX = 3, 
};
//Enum TslGame.EServerStatType
enum class FEServerStatType : uint8_t
{
	UE = 0, 
	NET = 1, 
	EServerStatType_MAX = 2, 
};
//Enum TslGame.EQualityType
enum class FEQualityType : uint8_t
{
	EQualityType::EMainQuality = 0, 
	EQualityType::EViewDistanceQuality = 1, 
	EQualityType::EShadowQuality = 2, 
	EQualityType::EAntiAliasingQuality = 3, 
	EQualityType::ETextureQuality = 4, 
	EQualityType::EVisualEffectQuality = 5, 
	EQualityType::EPostProcessingQuality = 6, 
	EQualityType::EFoliageQuality = 7, 
	EQualityType::EQualityType_MAX = 8, 
};
//Enum TslGame.EReadyToPlayState
enum class FEReadyToPlayState : uint8_t
{
	EReadyToPlayState::AllFinished = 0, 
	EReadyToPlayState::OnPreLoadMap = 1, 
	EReadyToPlayState::OnPostLoadMap = 2, 
	EReadyToPlayState::CheckMapLoadFinished = 3, 
	EReadyToPlayState::NotMapFullyLoaded = 4, 
	EReadyToPlayState::CheckPreloadingMap = 5, 
	EReadyToPlayState::EReadyToPlayState_MAX = 6, 
};
//Enum TslGame.EDistanceBasedEvent
enum class FEDistanceBasedEvent : uint8_t
{
	EDistanceBasedEvent::Weapon_Gun_Firing = 0, 
	EDistanceBasedEvent::Weapon_Grenade_Bounce = 1, 
	EDistanceBasedEvent::Weapon_Grenade_Explosion = 2, 
	EDistanceBasedEvent::Weapon_Grenade_ExplosionSound = 3, 
	EDistanceBasedEvent::Vehicle_Exhausting = 4, 
	EDistanceBasedEvent::Vehicle_Crash = 5, 
	EDistanceBasedEvent::Character_FootStep = 6, 
	EDistanceBasedEvent::Character_Landing = 7, 
	EDistanceBasedEvent::MAX = 8, 
	EDistanceBasedEvent::EDistanceBasedEvent_MAX = 9, 
};
//Enum TslGame.ERatingRankType
enum class FERatingRankType : uint8_t
{
	ERatingRankType::None = 0, 
	ERatingRankType::Bronze = 1, 
	ERatingRankType::Silver = 2, 
	ERatingRankType::Gold = 3, 
	ERatingRankType::Platinum = 4, 
	ERatingRankType::Diamond = 5, 
	ERatingRankType::Elite = 6, 
	ERatingRankType::Master = 7, 
	ERatingRankType::GrandMaster = 8, 
	ERatingRankType::ERatingRankType_MAX = 9, 
};
//Enum TslGame.EThrownWeaponType
enum class FEThrownWeaponType : uint8_t
{
	EThrownWeaponType::Thrown_Grenade = 0, 
	EThrownWeaponType::Thrown_Molotov = 1, 
	EThrownWeaponType::Thrown_Melee = 2, 
	EThrownWeaponType::Thrown_Trap = 3, 
	EThrownWeaponType::Thrown_StickyBomb = 4, 
	EThrownWeaponType::Thrown_C4 = 5, 
	EThrownWeaponType::Thrown_Other = 6, 
	EThrownWeaponType::Thrown_MAX = 7, 
};
//Enum TslGame.EHitDirection
enum class FEHitDirection : uint8_t
{
	EHitDirection::Hit_Front = 0, 
	EHitDirection::Hit_Back = 1, 
	EHitDirection::Hit_Left = 2, 
	EHitDirection::Hit_Right = 3, 
	EHitDirection::Hit_MAX = 4, 
};
//Enum TslGame.EPowerUpType
enum class FEPowerUpType : uint8_t
{
	PowerUp_None = 0, 
	Powerup_Bandage = 1, 
	PowerUp_FirstAid = 2, 
	Powerup_Medkit = 3, 
	PowerUp_EnergyDrink = 4, 
	Powerup_Painkillers = 5, 
	PowerUp_Adrenaline = 6, 
	PowerUp_MAX = 7, 
	EPowerUpType_MAX = 8, 
};
//Enum TslGame.ECastAnim
enum class FECastAnim : uint8_t
{
	ECastAnim::None = 0, 
	ECastAnim::Bandage = 1, 
	ECastAnim::FirstAid = 2, 
	ECastAnim::Medkit = 3, 
	ECastAnim::EnergyDrink = 4, 
	ECastAnim::Painkiller = 5, 
	ECastAnim::Adrenaline = 6, 
	ECastAnim::Door = 7, 
	ECastAnim::Battery = 8, 
	ECastAnim::ECastAnim_MAX = 9, 
};
//Enum TslGame.ECharacterNegativeEffects
enum class FECharacterNegativeEffects : uint8_t
{
	ECharacterNegativeEffects::Blind = 0, 
	ECharacterNegativeEffects::Burning = 1, 
	ECharacterNegativeEffects::Total = 2, 
	ECharacterNegativeEffects::ECharacterNegativeEffects_MAX = 3, 
};
//Enum TslGame.EEquipSlotID
enum class FEEquipSlotID : uint8_t
{
	EEquipSlotID::Head = 0, 
	EEquipSlotID::Eyes = 1, 
	EEquipSlotID::Mask = 2, 
	EEquipSlotID::Torso = 3, 
	EEquipSlotID::TorsoArmor = 4, 
	EEquipSlotID::Outer = 5, 
	EEquipSlotID::Backpack = 6, 
	EEquipSlotID::Hands = 7, 
	EEquipSlotID::Legs = 8, 
	EEquipSlotID::Feet = 9, 
	EEquipSlotID::Belt = 10, 
	EEquipSlotID::WeaponPrimary = 11, 
	EEquipSlotID::WeaponSecondary = 12, 
	EEquipSlotID::WeaponMelee = 13, 
	EEquipSlotID::WeaponThrowable = 14, 
	EEquipSlotID::MaxOrNone = 15, 
	EEquipSlotID::EEquipSlotID_MAX = 16, 
};
//Enum TslGame.ESubjectToReport
enum class FESubjectToReport : uint8_t
{
	ESubjectToReport::None = 0, 
	ESubjectToReport::Killer = 1, 
	ESubjectToReport::Spectating_Player = 2, 
	ESubjectToReport::Replay_Player = 3, 
	ESubjectToReport::Team_Member = 4, 
	ESubjectToReport::ESubjectToReport_MAX = 5, 
};
//Enum TslGame.ESwitcherHideWhen
enum class FESwitcherHideWhen : uint8_t
{
	ESwitcherHideWhen::UsingKeyboardMouse = 0, 
	ESwitcherHideWhen::UsingGamepad = 1, 
	ESwitcherHideWhen::ESwitcherHideWhen_MAX = 2, 
};
//Enum TslGame.EWelcomeState
enum class FEWelcomeState : uint8_t
{
	EWelcomeState::CopyrightAndWarning = 0, 
	EWelcomeState::PressAKey = 1, 
	EWelcomeState::NowLoading = 2, 
	EWelcomeState::EWelcomeState_MAX = 3, 
};
//Enum TslGame.EConsoleHitDirections
enum class FEConsoleHitDirections : uint8_t
{
	EConsoleHitDirections::None = 0, 
	EConsoleHitDirections::Front_Right = 1, 
	EConsoleHitDirections::Front_Left = 2, 
	EConsoleHitDirections::Rear = 3, 
	EConsoleHitDirections::EConsoleHitDirections_MAX = 4, 
};
//Enum TslGame.ERoundEndPointType
enum class FERoundEndPointType : uint8_t
{
	ERoundEndPointType::Empty = 0, 
	ERoundEndPointType::Lost = 1, 
	ERoundEndPointType::Won = 2, 
	ERoundEndPointType::ERoundEndPointType_MAX = 3, 
};
//Enum TslGame.eVehicleSpawnStatus
enum class FeVehicleSpawnStatus : uint8_t
{
	eVehicleSpawnStatus::SpawnNone = 0, 
	eVehicleSpawnStatus::SpawnAlived = 1, 
	eVehicleSpawnStatus::SpawnDestroyed = 2, 
	eVehicleSpawnStatus::eVehicleSpawnStatus_MAX = 3, 
};
//Enum TslGame.ESurfaceEffect
enum class FESurfaceEffect : uint8_t
{
	ESurfaceEffect::S_None = 0, 
	ESurfaceEffect::S_Concrete_Roll = 1, 
	ESurfaceEffect::S_Concrete_Skid = 2, 
	ESurfaceEffect::S_Concrete_Spin = 3, 
	ESurfaceEffect::S_Dirt_Roll = 4, 
	ESurfaceEffect::S_Dirt_Skid = 5, 
	ESurfaceEffect::S_Dirt_Spin = 6, 
	ESurfaceEffect::S_Water_Roll = 7, 
	ESurfaceEffect::S_Water_Skid = 8, 
	ESurfaceEffect::S_Water_Spin = 9, 
	ESurfaceEffect::S_Metal_Roll = 10, 
	ESurfaceEffect::S_Metal_Skid = 11, 
	ESurfaceEffect::S_Metal_Spin = 12, 
	ESurfaceEffect::S_Wood_Roll = 13, 
	ESurfaceEffect::S_Wood_Skid = 14, 
	ESurfaceEffect::S_Wood_Spin = 15, 
	ESurfaceEffect::S_Rock_Roll = 16, 
	ESurfaceEffect::S_Rock_Skid = 17, 
	ESurfaceEffect::S_Rock_Spin = 18, 
	ESurfaceEffect::S_Grass_Roll = 19, 
	ESurfaceEffect::S_Grass_Skid = 20, 
	ESurfaceEffect::S_Grass_Spin = 21, 
	ESurfaceEffect::S_Sand_Roll = 22, 
	ESurfaceEffect::S_Sand_Skid = 23, 
	ESurfaceEffect::S_Sand_Spin = 24, 
	ESurfaceEffect::S_Concrete_Brake = 25, 
	ESurfaceEffect::S_Dirt_Brake = 26, 
	ESurfaceEffect::S_Water_Brake = 27, 
	ESurfaceEffect::S_Metal_Brake = 28, 
	ESurfaceEffect::S_Wood_Brake = 29, 
	ESurfaceEffect::S_Rock_Brake = 30, 
	ESurfaceEffect::S_Grass_Brake = 31, 
	ESurfaceEffect::S_Sand_Brake = 32, 
	ESurfaceEffect::S_Snow_Brake = 33, 
	ESurfaceEffect::S_SnowRock_Brake = 34, 
	ESurfaceEffect::S_Ice_Brake = 35, 
	ESurfaceEffect::S_Common_BrakeDisc = 36, 
	ESurfaceEffect::S_Concrete_Punctured_Roll = 37, 
	ESurfaceEffect::S_Concrete_Punctured_Skid = 38, 
	ESurfaceEffect::S_Concrete_Punctured_Spin = 39, 
	ESurfaceEffect::S_Concrete_Punctured_Brake = 40, 
	ESurfaceEffect::S_Snow_Roll = 41, 
	ESurfaceEffect::S_Snow_Skid = 42, 
	ESurfaceEffect::S_Snow_Spin = 43, 
	ESurfaceEffect::S_SnowRock_Roll = 44, 
	ESurfaceEffect::S_SnowRock_Skid = 45, 
	ESurfaceEffect::S_SnowRock_Spin = 46, 
	ESurfaceEffect::S_Ice_Roll = 47, 
	ESurfaceEffect::S_Ice_Skid = 48, 
	ESurfaceEffect::S_Ice_Spin = 49, 
	ESurfaceEffect::S_Mud_Roll = 50, 
	ESurfaceEffect::S_Mud_Skid = 51, 
	ESurfaceEffect::S_Mud_Spin = 52, 
	ESurfaceEffect::S_Mud_Brake = 53, 
	ESurfaceEffect::S_Common_Neutral = 54, 
	ESurfaceEffect::S_MAX = 55, 
};
//Enum TslGame.EMeleeThrowState
enum class FEMeleeThrowState : uint8_t
{
	EMeleeThrowState::Idle = 0, 
	EMeleeThrowState::Prepare = 1, 
	EMeleeThrowState::Throw = 2, 
	EMeleeThrowState::EMeleeThrowState_MAX = 3, 
};
//Enum TslGame.EHitCheckType
enum class FEHitCheckType : uint8_t
{
	EHitCheckType::HitCheck_Once = 0, 
	EHitCheckType::HitCheck_Multi = 1, 
	EHitCheckType::HitCheck_MAX = 2, 
};
//Enum TslGame.EWeaponDisplayZoomState
enum class FEWeaponDisplayZoomState : uint8_t
{
	EWeaponDisplayZoomState::ZoomState_Default = 0, 
	EWeaponDisplayZoomState::ZoomState_Charm = 1, 
	EWeaponDisplayZoomState::ZoomState_MAX = 2, 
};
//Enum Foliage.EFoliageScaling
enum class FEFoliageScaling : uint8_t
{
	EFoliageScaling::Uniform = 0, 
	EFoliageScaling::Free = 1, 
	EFoliageScaling::LockXY = 2, 
	EFoliageScaling::LockXZ = 3, 
	EFoliageScaling::LockYZ = 4, 
	EFoliageScaling::EFoliageScaling_MAX = 5, 
};
//Enum Foliage.EVertexColorMaskChannel
enum class FEVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel::Red = 0, 
	EVertexColorMaskChannel::Green = 1, 
	EVertexColorMaskChannel::Blue = 2, 
	EVertexColorMaskChannel::Alpha = 3, 
	EVertexColorMaskChannel::MAX_None = 4, 
	EVertexColorMaskChannel::EVertexColorMaskChannel_MAX = 5, 
};
//Enum Foliage.FoliageVertexColorMask
enum class FFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0, 
	FOLIAGEVERTEXCOLORMASK_Red = 1, 
	FOLIAGEVERTEXCOLORMASK_Green = 2, 
	FOLIAGEVERTEXCOLORMASK_Blue = 3, 
	FOLIAGEVERTEXCOLORMASK_Alpha = 4, 
	FOLIAGEVERTEXCOLORMASK_MAX = 5, 
};
//Enum Foliage.ESimulationQuery
enum class FESimulationQuery : uint8_t
{
	ESimulationQuery::CollisionOverlap = 0, 
	ESimulationQuery::ShadeOverlap = 1, 
	ESimulationQuery::AnyOverlap = 2, 
	ESimulationQuery::ESimulationQuery_MAX = 3, 
};
//Enum Foliage.ESimulationOverlap
enum class FESimulationOverlap : uint8_t
{
	ESimulationOverlap::CollisionOverlap = 0, 
	ESimulationOverlap::ShadeOverlap = 1, 
	ESimulationOverlap::None = 2, 
	ESimulationOverlap::ESimulationOverlap_MAX = 3, 
};
//Enum CinematicCamera.ECameraFocusMethod
enum class FECameraFocusMethod : uint8_t
{
	ECameraFocusMethod::None = 0, 
	ECameraFocusMethod::Manual = 1, 
	ECameraFocusMethod::Tracking = 2, 
	ECameraFocusMethod::ECameraFocusMethod_MAX = 3, 
};
//Enum BuildPatchServices.EManifestFileHeader
enum class FEManifestFileHeader : uint8_t
{
	EManifestFileHeader::STORED_RAW = 0, 
	EManifestFileHeader::STORED_COMPRESSED = 1, 
	EManifestFileHeader::STORED_MAX = 2, 
};
//Enum CoreUObject.EUnit
enum class FEUnit : uint8_t
{
	EUnit::Micrometers = 0, 
	EUnit::Millimeters = 1, 
	EUnit::Centimeters = 2, 
	EUnit::Meters = 3, 
	EUnit::Kilometers = 4, 
	EUnit::Inches = 5, 
	EUnit::Feet = 6, 
	EUnit::Yards = 7, 
	EUnit::Miles = 8, 
	EUnit::Lightyears = 9, 
	EUnit::Degrees = 10, 
	EUnit::Radians = 11, 
	EUnit::MetersPerSecond = 12, 
	EUnit::KilometersPerHour = 13, 
	EUnit::MilesPerHour = 14, 
	EUnit::Celsius = 15, 
	EUnit::Farenheit = 16, 
	EUnit::Kelvin = 17, 
	EUnit::Micrograms = 18, 
	EUnit::Milligrams = 19, 
	EUnit::Grams = 20, 
	EUnit::Kilograms = 21, 
	EUnit::MetricTons = 22, 
	EUnit::Ounces = 23, 
	EUnit::Pounds = 24, 
	EUnit::Stones = 25, 
	EUnit::Newtons = 26, 
	EUnit::PoundsForce = 27, 
	EUnit::KilogramsForce = 28, 
	EUnit::Hertz = 29, 
	EUnit::Kilohertz = 30, 
	EUnit::Megahertz = 31, 
	EUnit::Gigahertz = 32, 
	EUnit::RevolutionsPerMinute = 33, 
	EUnit::Bytes = 34, 
	EUnit::Kilobytes = 35, 
	EUnit::Megabytes = 36, 
	EUnit::Gigabytes = 37, 
	EUnit::Terabytes = 38, 
	EUnit::Lumens = 39, 
	EUnit::Milliseconds = 40, 
	EUnit::Seconds = 41, 
	EUnit::Minutes = 42, 
	EUnit::Hours = 43, 
	EUnit::Days = 44, 
	EUnit::Months = 45, 
	EUnit::Years = 46, 
	EUnit::Multiplier = 47, 
	EUnit::Unspecified = 48, 
	EUnit::EUnit_MAX = 49, 
};
//Enum CoreUObject.EPixelFormat
enum class FEPixelFormat : uint8_t
{
	PF_Unknown = 0, 
	PF_A32B32G32R32F = 1, 
	PF_B8G8R8A8 = 2, 
	PF_G8 = 3, 
	PF_G16 = 4, 
	PF_DXT1 = 5, 
	PF_DXT3 = 6, 
	PF_DXT5 = 7, 
	PF_UYVY = 8, 
	PF_FloatRGB = 9, 
	PF_FloatRGBA = 10, 
	PF_DepthStencil = 11, 
	PF_ShadowDepth = 12, 
	PF_R32_FLOAT = 13, 
	PF_G16R16 = 14, 
	PF_G16R16F = 15, 
	PF_G16R16F_FILTER = 16, 
	PF_G32R32F = 17, 
	PF_A2B10G10R10 = 18, 
	PF_A16B16G16R16 = 19, 
	PF_D24 = 20, 
	PF_R16F = 21, 
	PF_R16F_FILTER = 22, 
	PF_BC5 = 23, 
	PF_V8U8 = 24, 
	PF_A1 = 25, 
	PF_FloatR11G11B10 = 26, 
	PF_A8 = 27, 
	PF_R32_UINT = 28, 
	PF_R32_SINT = 29, 
	PF_PVRTC2 = 30, 
	PF_PVRTC4 = 31, 
	PF_R16_UINT = 32, 
	PF_R16_SINT = 33, 
	PF_R16G16B16A16_UINT = 34, 
	PF_R16G16B16A16_SINT = 35, 
	PF_R5G6B5_UNORM = 36, 
	PF_R8G8B8A8 = 37, 
	PF_A8R8G8B8 = 38, 
	PF_BC4 = 39, 
	PF_R8G8 = 40, 
	PF_ATC_RGB = 41, 
	PF_ATC_RGBA_E = 42, 
	PF_ATC_RGBA_I = 43, 
	PF_X24_G8 = 44, 
	PF_ETC1 = 45, 
	PF_ETC2_RGB = 46, 
	PF_ETC2_RGBA = 47, 
	PF_R32G32B32A32_UINT = 48, 
	PF_R16G16_UINT = 49, 
	PF_ASTC_4x4 = 50, 
	PF_ASTC_6x6 = 51, 
	PF_ASTC_8x8 = 52, 
	PF_ASTC_10x10 = 53, 
	PF_ASTC_12x12 = 54, 
	PF_BC6H = 55, 
	PF_BC7 = 56, 
	PF_R8_UINT = 57, 
	PF_L8 = 58, 
	PF_XGXR8 = 59, 
	PF_MAX = 60, 
};
//Enum CoreUObject.EAxis
enum class FEAxis : uint8_t
{
	EAxis::None = 0, 
	EAxis::X = 1, 
	EAxis::Y = 2, 
	EAxis::Z = 3, 
	EAxis::EAxis_MAX = 4, 
};
//Enum CoreUObject.ELogTimes
enum class FELogTimes : uint8_t
{
	ELogTimes::None = 0, 
	ELogTimes::UTC = 1, 
	ELogTimes::SinceGStartTime = 2, 
	ELogTimes::ELogTimes_MAX = 3, 
};
//Enum CoreUObject.ESearchDir
enum class FESearchDir : uint8_t
{
	ESearchDir::FromStart = 0, 
	ESearchDir::FromEnd = 1, 
	ESearchDir::ESearchDir_MAX = 2, 
};
//Enum CoreUObject.ESearchCase
enum class FESearchCase : uint8_t
{
	ESearchCase::CaseSensitive = 0, 
	ESearchCase::IgnoreCase = 1, 
	ESearchCase::ESearchCase_MAX = 2, 
};
//Enum CoreUObject.ELifetimeCondition
enum class FELifetimeCondition : uint8_t
{
	COND_None = 0, 
	COND_InitialOnly = 1, 
	COND_OwnerOnly = 2, 
	COND_SkipOwner = 3, 
	COND_SimulatedOnly = 4, 
	COND_AutonomousOnly = 5, 
	COND_SimulatedOrPhysics = 6, 
	COND_InitialOrOwner = 7, 
	COND_Custom = 8, 
	COND_ReplayOrOwner = 9, 
	COND_ReplayOnly = 10, 
	COND_SimulatedOnlyNoReplay = 11, 
	COND_SimulatedOrPhysicsNoReplay = 12, 
	COND_SkipReplay = 13, 
	COND_Max = 14, 
};
//Enum MediaAssets.EMediaPlayerTrack
enum class FEMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack::Audio = 0, 
	EMediaPlayerTrack::Binary = 1, 
	EMediaPlayerTrack::Caption = 2, 
	EMediaPlayerTrack::Script = 3, 
	EMediaPlayerTrack::Subtitle = 4, 
	EMediaPlayerTrack::Text = 5, 
	EMediaPlayerTrack::Video = 6, 
	EMediaPlayerTrack::EMediaPlayerTrack_MAX = 7, 
};
//Enum MovieScene.ESpawnOwnership
enum class FESpawnOwnership : uint8_t
{
	ESpawnOwnership::InnerSequence = 0, 
	ESpawnOwnership::MasterSequence = 1, 
	ESpawnOwnership::External = 2, 
	ESpawnOwnership::ESpawnOwnership_MAX = 3, 
};
//Enum MovieScene.EMovieSceneObjectBindingSpace
enum class FEMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace::Local = 0, 
	EMovieSceneObjectBindingSpace::Root = 1, 
	EMovieSceneObjectBindingSpace::EMovieSceneObjectBindingSpace_MAX = 2, 
};
//Enum MovieScene.EMovieSceneKeyInterpolation
enum class FEMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation::Auto = 0, 
	EMovieSceneKeyInterpolation::User = 1, 
	EMovieSceneKeyInterpolation::Break = 2, 
	EMovieSceneKeyInterpolation::Linear = 3, 
	EMovieSceneKeyInterpolation::Constant = 4, 
	EMovieSceneKeyInterpolation::EMovieSceneKeyInterpolation_MAX = 5, 
};
//Enum MovieScene.EMovieSceneCompletionMode
enum class FEMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode::KeepState = 0, 
	EMovieSceneCompletionMode::RestoreState = 1, 
	EMovieSceneCompletionMode::EMovieSceneCompletionMode_MAX = 2, 
};
//Enum MovieScene.ESectionEvaluationFlags
enum class FESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags::None = 0, 
	ESectionEvaluationFlags::PreRoll = 1, 
	ESectionEvaluationFlags::PostRoll = 2, 
	ESectionEvaluationFlags::ESectionEvaluationFlags_MAX = 3, 
};
//Enum MovieScene.EEvaluationMethod
enum class FEEvaluationMethod : uint8_t
{
	EEvaluationMethod::Static = 0, 
	EEvaluationMethod::Swept = 1, 
	EEvaluationMethod::EEvaluationMethod_MAX = 2, 
};
//Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class FESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode::MeanSquared = 0, 
	ESubmixEffectDynamicsPeakMode::RootMeanSquared = 1, 
	ESubmixEffectDynamicsPeakMode::Peak = 2, 
	ESubmixEffectDynamicsPeakMode::Count = 3, 
	ESubmixEffectDynamicsPeakMode::ESubmixEffectDynamicsPeakMode_MAX = 4, 
};
//Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class FESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType::Compressor = 0, 
	ESubmixEffectDynamicsProcessorType::Limiter = 1, 
	ESubmixEffectDynamicsProcessorType::Expander = 2, 
	ESubmixEffectDynamicsProcessorType::Gate = 3, 
	ESubmixEffectDynamicsProcessorType::Count = 4, 
	ESubmixEffectDynamicsProcessorType::ESubmixEffectDynamicsProcessorType_MAX = 5, 
};
//Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class FMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis::X = 0, 
	MovieScene3DPathSection_Axis::Y = 1, 
	MovieScene3DPathSection_Axis::Z = 2, 
	MovieScene3DPathSection_Axis::NEG_X = 3, 
	MovieScene3DPathSection_Axis::NEG_Y = 4, 
	MovieScene3DPathSection_Axis::NEG_Z = 5, 
	MovieScene3DPathSection_Axis::MovieScene3DPathSection_MAX = 6, 
};
//Enum MovieSceneTracks.EShow3DTrajectory
enum class FEShow3DTrajectory : uint8_t
{
	EShow3DTrajectory::EST_OnlyWhenSelected = 0, 
	EShow3DTrajectory::EST_Always = 1, 
	EShow3DTrajectory::EST_Never = 2, 
	EShow3DTrajectory::EST_MAX = 3, 
};
//Enum MovieSceneTracks.EFireEventsAtPosition
enum class FEFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition::AtStartOfEvaluation = 0, 
	EFireEventsAtPosition::AtEndOfEvaluation = 1, 
	EFireEventsAtPosition::AfterSpawn = 2, 
	EFireEventsAtPosition::EFireEventsAtPosition_MAX = 3, 
};
//Enum MovieSceneTracks.ELevelVisibility
enum class FELevelVisibility : uint8_t
{
	ELevelVisibility::Visible = 0, 
	ELevelVisibility::Hidden = 1, 
	ELevelVisibility::ELevelVisibility_MAX = 2, 
};
//Enum MovieSceneTracks.EParticleKey
enum class FEParticleKey : uint8_t
{
	EParticleKey::Activate = 0, 
	EParticleKey::Deactivate = 1, 
	EParticleKey::Trigger = 2, 
	EParticleKey::EParticleKey_MAX = 3, 
};
//Enum AIModule.EPathFollowingResult
enum class FEPathFollowingResult : uint8_t
{
	EPathFollowingResult::Success = 0, 
	EPathFollowingResult::Blocked = 1, 
	EPathFollowingResult::OffPath = 2, 
	EPathFollowingResult::Aborted = 3, 
	EPathFollowingResult::Skipped_DEPRECATED = 4, 
	EPathFollowingResult::Invalid = 5, 
	EPathFollowingResult::EPathFollowingResult_MAX = 6, 
};
//Enum AIModule.EEnvQueryStatus
enum class FEEnvQueryStatus : uint8_t
{
	EEnvQueryStatus::Processing = 0, 
	EEnvQueryStatus::Success = 1, 
	EEnvQueryStatus::Failed = 2, 
	EEnvQueryStatus::Aborted = 3, 
	EEnvQueryStatus::OwnerLost = 4, 
	EEnvQueryStatus::MissingParam = 5, 
	EEnvQueryStatus::EEnvQueryStatus_MAX = 6, 
};
//Enum AIModule.EAILockSource
enum class FEAILockSource : uint8_t
{
	EAILockSource::Animation = 0, 
	EAILockSource::Logic = 1, 
	EAILockSource::Script = 2, 
	EAILockSource::Gameplay = 3, 
	EAILockSource::MAX = 4, 
	EAILockSource::EAILockSource_MAX = 5, 
};
//Enum AIModule.EAIRequestPriority
enum class FEAIRequestPriority : uint8_t
{
	EAIRequestPriority::SoftScript = 0, 
	EAIRequestPriority::Logic = 1, 
	EAIRequestPriority::HardScript = 2, 
	EAIRequestPriority::Reaction = 3, 
	EAIRequestPriority::Ultimate = 4, 
	EAIRequestPriority::MAX = 5, 
	EAIRequestPriority::EAIRequestPriority_MAX = 6, 
};
//Enum AIModule.EPawnActionEventType
enum class FEPawnActionEventType : uint8_t
{
	EPawnActionEventType::Invalid = 0, 
	EPawnActionEventType::FailedToStart = 1, 
	EPawnActionEventType::InstantAbort = 2, 
	EPawnActionEventType::FinishedAborting = 3, 
	EPawnActionEventType::FinishedExecution = 4, 
	EPawnActionEventType::Push = 5, 
	EPawnActionEventType::EPawnActionEventType_MAX = 6, 
};
//Enum AIModule.EPawnActionResult
enum class FEPawnActionResult : uint8_t
{
	EPawnActionResult::NotStarted = 0, 
	EPawnActionResult::InProgress = 1, 
	EPawnActionResult::Success = 2, 
	EPawnActionResult::Failed = 3, 
	EPawnActionResult::Aborted = 4, 
	EPawnActionResult::EPawnActionResult_MAX = 5, 
};
//Enum AIModule.EPawnActionAbortState
enum class FEPawnActionAbortState : uint8_t
{
	EPawnActionAbortState::NeverStarted = 0, 
	EPawnActionAbortState::NotBeingAborted = 1, 
	EPawnActionAbortState::MarkPendingAbort = 2, 
	EPawnActionAbortState::LatentAbortInProgress = 3, 
	EPawnActionAbortState::AbortDone = 4, 
	EPawnActionAbortState::MAX = 5, 
	EPawnActionAbortState::EPawnActionAbortState_MAX = 6, 
};
//Enum AIModule.FAIDistanceType
enum class FFAIDistanceType : uint8_t
{
	FAIDistanceType::Distance3D = 0, 
	FAIDistanceType::Distance2D = 1, 
	FAIDistanceType::DistanceZ = 2, 
	FAIDistanceType::MAX = 3, 
	FAIDistanceType::FAIDistanceType_MAX = 4, 
};
//Enum AIModule.EAIOptionFlag
enum class FEAIOptionFlag : uint8_t
{
	EAIOptionFlag::Default = 0, 
	EAIOptionFlag::Enable = 1, 
	EAIOptionFlag::Disable = 2, 
	EAIOptionFlag::MAX = 3, 
	EAIOptionFlag::EAIOptionFlag_MAX = 4, 
};
//Enum AIModule.EPathFollowingRequestResult
enum class FEPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult::Failed = 0, 
	EPathFollowingRequestResult::AlreadyAtGoal = 1, 
	EPathFollowingRequestResult::RequestSuccessful = 2, 
	EPathFollowingRequestResult::EPathFollowingRequestResult_MAX = 3, 
};
//Enum AIModule.EPathFollowingAction
enum class FEPathFollowingAction : uint8_t
{
	EPathFollowingAction::Error = 0, 
	EPathFollowingAction::NoMove = 1, 
	EPathFollowingAction::DirectMove = 2, 
	EPathFollowingAction::PartialPath = 3, 
	EPathFollowingAction::PathToGoal = 4, 
	EPathFollowingAction::EPathFollowingAction_MAX = 5, 
};
//Enum AIModule.EPathFollowingStatus
enum class FEPathFollowingStatus : uint8_t
{
	EPathFollowingStatus::Idle = 0, 
	EPathFollowingStatus::Waiting = 1, 
	EPathFollowingStatus::Paused = 2, 
	EPathFollowingStatus::Moving = 3, 
	EPathFollowingStatus::EPathFollowingStatus_MAX = 4, 
};
//Enum AIModule.ETeamAttitude
enum class FETeamAttitude : uint8_t
{
	ETeamAttitude::Friendly = 0, 
	ETeamAttitude::Neutral = 1, 
	ETeamAttitude::Hostile = 2, 
	ETeamAttitude::ETeamAttitude_MAX = 3, 
};
//Enum AIModule.EAISenseNotifyType
enum class FEAISenseNotifyType : uint8_t
{
	EAISenseNotifyType::OnEveryPerception = 0, 
	EAISenseNotifyType::OnPerceptionChange = 1, 
	EAISenseNotifyType::EAISenseNotifyType_MAX = 2, 
};
//Enum GameplayTags.EGameplayTagQueryExprType
enum class FEGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType::Undefined = 0, 
	EGameplayTagQueryExprType::AnyTagsMatch = 1, 
	EGameplayTagQueryExprType::AllTagsMatch = 2, 
	EGameplayTagQueryExprType::NoTagsMatch = 3, 
	EGameplayTagQueryExprType::AnyExprMatch = 4, 
	EGameplayTagQueryExprType::AllExprMatch = 5, 
	EGameplayTagQueryExprType::NoExprMatch = 6, 
	EGameplayTagQueryExprType::EGameplayTagQueryExprType_MAX = 7, 
};
//Enum GameplayTags.EGameplayContainerMatchType
enum class FEGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType::Any = 0, 
	EGameplayContainerMatchType::All = 1, 
	EGameplayContainerMatchType::EGameplayContainerMatchType_MAX = 2, 
};
//Enum GameplayTags.EGameplayTagMatchType
enum class FEGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType::Explicit = 0, 
	EGameplayTagMatchType::IncludeParentTags = 1, 
	EGameplayTagMatchType::EGameplayTagMatchType_MAX = 2, 
};
//Enum GameplayTags.EGameplayTagSourceType
enum class FEGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType::Native = 0, 
	EGameplayTagSourceType::DefaultTagList = 1, 
	EGameplayTagSourceType::TagList = 2, 
	EGameplayTagSourceType::DataTable = 3, 
	EGameplayTagSourceType::Invalid = 4, 
	EGameplayTagSourceType::EGameplayTagSourceType_MAX = 5, 
};
//Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class FETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy::StartOnTop = 0, 
	ETaskResourceOverlapPolicy::StartAtEnd = 1, 
	ETaskResourceOverlapPolicy::ETaskResourceOverlapPolicy_MAX = 2, 
};
//Enum GameplayTasks.EGameplayTaskState
enum class FEGameplayTaskState : uint8_t
{
	EGameplayTaskState::Uninitialized = 0, 
	EGameplayTaskState::AwaitingActivation = 1, 
	EGameplayTaskState::Paused = 2, 
	EGameplayTaskState::Active = 3, 
	EGameplayTaskState::Finished = 4, 
	EGameplayTaskState::EGameplayTaskState_MAX = 5, 
};
//Enum GameplayTasks.EGameplayTaskRunResult
enum class FEGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult::Error = 0, 
	EGameplayTaskRunResult::Failed = 1, 
	EGameplayTaskRunResult::Success_Paused = 2, 
	EGameplayTaskRunResult::Success_Active = 3, 
	EGameplayTaskRunResult::Success_Finished = 4, 
	EGameplayTaskRunResult::EGameplayTaskRunResult_MAX = 5, 
};
//Enum ZipUtility.EZipUtilityCompletionState
enum class FEZipUtilityCompletionState : uint8_t
{
	SUCCESS = 0, 
	FAILURE_NOT_FOUND = 1, 
	FAILURE_UNKNOWN = 2, 
	EZipUtilityCompletionState_MAX = 3, 
};
//Enum ZipUtility.ZipUtilityCompressionLevel
enum class FZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE = 0, 
	COMPRESSION_LEVEL_FAST = 1, 
	COMPRESSION_LEVEL_NORMAL = 2, 
	COMPRESSION_LEVEL_MAX = 3, 
};
//Enum ZipUtility.ZipUtilityCompressionFormat
enum class FZipUtilityCompressionFormat : uint8_t
{
	COMPRESSION_FORMAT_UNKNOWN = 0, 
	COMPRESSION_FORMAT_SEVEN_ZIP = 1, 
	COMPRESSION_FORMAT_ZIP = 2, 
	COMPRESSION_FORMAT_GZIP = 3, 
	COMPRESSION_FORMAT_BZIP2 = 4, 
	COMPRESSION_FORMAT_RAR = 5, 
	COMPRESSION_FORMAT_TAR = 6, 
	COMPRESSION_FORMAT_ISO = 7, 
	COMPRESSION_FORMAT_CAB = 8, 
	COMPRESSION_FORMAT_LZMA = 9, 
	COMPRESSION_FORMAT_LZMA86 = 10, 
	COMPRESSION_FORMAT_MAX = 11, 
};
//Enum Engine.EViewModeIndex
enum class FEViewModeIndex : uint8_t
{
	VMI_BrushWireframe = 0, 
	VMI_Wireframe = 1, 
	VMI_Unlit = 2, 
	VMI_Lit = 3, 
	VMI_Lit_DetailLighting = 4, 
	VMI_LightingOnly = 5, 
	VMI_LightComplexity = 6, 
	VMI_ShaderComplexity = 7, 
	VMI_LightmapDensity = 8, 
	VMI_LitLightmapDensity = 9, 
	VMI_ReflectionOverride = 10, 
	VMI_VisualizeBuffer = 11, 
	VMI_StationaryLightOverlap = 12, 
	VMI_CollisionPawn = 13, 
	VMI_CollisionVisibility = 14, 
	VMI_LODColoration = 15, 
	VMI_QuadOverdraw = 16, 
	VMI_PrimitiveDistanceAccuracy = 17, 
	VMI_MeshUVDensityAccuracy = 18, 
	VMI_ShaderComplexityWithQuadOverdraw = 19, 
	VMI_HLODColoration = 20, 
	VMI_GroupLODColoration = 21, 
	VMI_MaterialTextureScaleAccuracy = 22, 
	VMI_RequiredTextureResolution = 23, 
	VMI_Max = 24, 
	VMI_Unknown = 25, 
};
//Enum Engine.EDemoFailure
enum class FEDemoFailure : uint8_t
{
	EDemoFailure::None = 0, 
	EDemoFailure::PlayCommand = 1, 
	EDemoFailure::PlayNoWorld = 2, 
	EDemoFailure::PlayPIE = 3, 
	EDemoFailure::PlayCreateDemoDriver = 4, 
	EDemoFailure::Connect = 5, 
	EDemoFailure::ConnectNoWorld = 6, 
	EDemoFailure::ConnectNoGameInstance = 7, 
	EDemoFailure::ConnectInitBase = 8, 
	EDemoFailure::ConnectStreamingReady = 9, 
	EDemoFailure::ConnectDemoNotFound = 10, 
	EDemoFailure::ConnectCorrupt = 11, 
	EDemoFailure::ConnectSpecificCorrupt = 12, 
	EDemoFailure::ConnectPostNoWorld = 13, 
	EDemoFailure::ConnectLoadMap = 14, 
	EDemoFailure::TickDispatchStreamer = 15, 
	EDemoFailure::TickDispatchFileAr = 16, 
	EDemoFailure::ConditionallyReadFrame = 17, 
	EDemoFailure::ConditionallyReadFrameFileAr = 18, 
	EDemoFailure::ConditionallyReadFrameStreamer = 19, 
	EDemoFailure::ConditionallyReadFrameTimeChecksum = 20, 
	EDemoFailure::ConditionallyReadFrameFileAr2 = 21, 
	EDemoFailure::ConditionallyReadFrameExternalData = 22, 
	EDemoFailure::ConditionallyReadFramePacket = 23, 
	EDemoFailure::ConditionallyProcessPacket = 24, 
	EDemoFailure::DownloadHeader = 25, 
	EDemoFailure::DownloadHeaderDemoNotFound = 26, 
	EDemoFailure::DownloadHeaderCorrupt = 27, 
	EDemoFailure::DownloadHeaderSpecificCorrupt = 28, 
	EDemoFailure::DownloadHeaderLevelNamesAndTimes = 29, 
	EDemoFailure::CheckpointReady = 30, 
	EDemoFailure::CheckpointArchiveEmpty = 31, 
	EDemoFailure::CheckpointReadFrame = 32, 
	EDemoFailure::CheckpointReadFrameFileAr = 33, 
	EDemoFailure::CheckpointReadFrameStreamer = 34, 
	EDemoFailure::CheckpointReadFrameTimeChecksum = 35, 
	EDemoFailure::CheckpointReadFrameFileAr2 = 36, 
	EDemoFailure::CheckpointReadFrameExternalData = 37, 
	EDemoFailure::CheckpointReadFramePacket = 38, 
	EDemoFailure::CheckpointProcessPacket = 39, 
	EDemoFailure::RecCommand = 40, 
	EDemoFailure::RecNoReplays = 41, 
	EDemoFailure::RecNoWorld = 42, 
	EDemoFailure::RecPIE = 43, 
	EDemoFailure::RecAlreadyPlay = 44, 
	EDemoFailure::RecCreateDemoDriver = 45, 
	EDemoFailure::Listen = 46, 
	EDemoFailure::ListenInitBase = 47, 
	EDemoFailure::ListenNoWorldSettings = 48, 
	EDemoFailure::ListenWriteHeader = 49, 
	EDemoFailure::ListenStreamingReady = 50, 
	EDemoFailure::TickFlushStreamer = 51, 
	EDemoFailure::TickFlushFileAr = 52, 
	EDemoFailure::SeamlessTravelWriteHeader = 53, 
	EDemoFailure::EDemoFailure_MAX = 54, 
};
//Enum Engine.ETravelType
enum class FETravelType : uint8_t
{
	TRAVEL_Absolute = 0, 
	TRAVEL_Partial = 1, 
	TRAVEL_Relative = 2, 
	TRAVEL_MAX = 3, 
};
//Enum Engine.ENetworkLagState
enum class FENetworkLagState : uint8_t
{
	ENetworkLagState::NotLagging = 0, 
	ENetworkLagState::Lagging = 1, 
	ENetworkLagState::ENetworkLagState_MAX = 2, 
};
//Enum Engine.EMouseLockMode
enum class FEMouseLockMode : uint8_t
{
	EMouseLockMode::DoNotLock = 0, 
	EMouseLockMode::LockOnCapture = 1, 
	EMouseLockMode::LockAlways = 2, 
	EMouseLockMode::EMouseLockMode_MAX = 3, 
};
//Enum Engine.EMouseCaptureMode
enum class FEMouseCaptureMode : uint8_t
{
	EMouseCaptureMode::NoCapture = 0, 
	EMouseCaptureMode::CapturePermanently = 1, 
	EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown = 2, 
	EMouseCaptureMode::CaptureDuringMouseDown = 3, 
	EMouseCaptureMode::CaptureDuringRightMouseDown = 4, 
	EMouseCaptureMode::EMouseCaptureMode_MAX = 5, 
};
//Enum Engine.ENodeEnabledState
enum class FENodeEnabledState : uint8_t
{
	ENodeEnabledState::Enabled = 0, 
	ENodeEnabledState::Disabled = 1, 
	ENodeEnabledState::DevelopmentOnly = 2, 
	ENodeEnabledState::ENodeEnabledState_MAX = 3, 
};
//Enum Engine.ENodeAdvancedPins
enum class FENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins::NoPins = 0, 
	ENodeAdvancedPins::Shown = 1, 
	ENodeAdvancedPins::Hidden = 2, 
	ENodeAdvancedPins::ENodeAdvancedPins_MAX = 3, 
};
//Enum Engine.ENodeTitleType
enum class FENodeTitleType : uint8_t
{
	ENodeTitleType::FullTitle = 0, 
	ENodeTitleType::ListView = 1, 
	ENodeTitleType::EditableTitle = 2, 
	ENodeTitleType::MenuTitle = 3, 
	ENodeTitleType::MAX_TitleTypes = 4, 
	ENodeTitleType::ENodeTitleType_MAX = 5, 
};
//Enum Engine.EEdGraphPinDirection
enum class FEEdGraphPinDirection : uint8_t
{
	EGPD_Input = 0, 
	EGPD_Output = 1, 
	EGPD_MAX = 2, 
};
//Enum Engine.EBlueprintPinStyleType
enum class FEBlueprintPinStyleType : uint8_t
{
	BPST_Original = 0, 
	BPST_VariantA = 1, 
	BPST_MAX = 2, 
};
//Enum Engine.ERelativeTransformSpace
enum class FERelativeTransformSpace : uint8_t
{
	RTS_World = 0, 
	RTS_Actor = 1, 
	RTS_Component = 2, 
	RTS_ParentBoneSpace = 3, 
	RTS_MAX = 4, 
};
//Enum Engine.EDetailMode
enum class FEDetailMode : uint8_t
{
	DM_Low = 0, 
	DM_Medium = 1, 
	DM_High = 2, 
	DM_MAX = 3, 
};
//Enum Engine.ESimplygonMaterialChannel
enum class FESimplygonMaterialChannel : uint8_t
{
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_AMBIENT = 0, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_DIFFUSE = 1, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_SPECULAR = 2, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_OPACITY = 3, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_EMISSIVE = 4, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_NORMALS = 5, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_DISPLACEMENT = 6, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_BASECOLOR = 7, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_ROUGHNESS = 8, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_METALLIC = 9, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_AO = 10, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_SUBSURFACE = 11, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_OPACITYMASK = 12, 
	ESimplygonMaterialChannel::SG_MATERIAL_CHANNEL_MAX = 13, 
};
//Enum Engine.ESimplygonTextureResolution
enum class FESimplygonTextureResolution : uint8_t
{
	ESimplygonTextureResolution::TextureResolution = 0, 
	ESimplygonTextureResolution::TextureResolution = 1, 
	ESimplygonTextureResolution::TextureResolution = 2, 
	ESimplygonTextureResolution::TextureResolution = 3, 
	ESimplygonTextureResolution::TextureResolution = 4, 
	ESimplygonTextureResolution::TextureResolution = 5, 
	ESimplygonTextureResolution::TextureResolution = 6, 
	ESimplygonTextureResolution::TextureResolution = 7, 
	ESimplygonTextureResolution::TextureResolution_MAX = 8, 
};
//Enum Engine.ESimplygonColorChannels
enum class FESimplygonColorChannels : uint8_t
{
	ESimplygonColorChannels::RGBA = 0, 
	ESimplygonColorChannels::RGB = 1, 
	ESimplygonColorChannels::L = 2, 
	ESimplygonColorChannels::ESimplygonColorChannels_MAX = 3, 
};
//Enum Engine.ESimplygonTextureSamplingQuality
enum class FESimplygonTextureSamplingQuality : uint8_t
{
	ESimplygonTextureSamplingQuality::Poor = 0, 
	ESimplygonTextureSamplingQuality::Low = 1, 
	ESimplygonTextureSamplingQuality::Medium = 2, 
	ESimplygonTextureSamplingQuality::High = 3, 
	ESimplygonTextureSamplingQuality::ESimplygonTextureSamplingQuality_MAX = 4, 
};
//Enum Engine.ESimplygonCasterType
enum class FESimplygonCasterType : uint8_t
{
	ESimplygonCasterType::None = 0, 
	ESimplygonCasterType::Color = 1, 
	ESimplygonCasterType::Normals = 2, 
	ESimplygonCasterType::Opacity = 3, 
	ESimplygonCasterType::ESimplygonCasterType_MAX = 4, 
};
//Enum Engine.ESimplygonTextureStrech
enum class FESimplygonTextureStrech : uint8_t
{
	ESimplygonTextureStrech::None = 0, 
	ESimplygonTextureStrech::VerySmall = 1, 
	ESimplygonTextureStrech::Small = 2, 
	ESimplygonTextureStrech::Medium = 3, 
	ESimplygonTextureStrech::Large = 4, 
	ESimplygonTextureStrech::VeryLarge = 5, 
	ESimplygonTextureStrech::ESimplygonTextureStrech_MAX = 6, 
};
//Enum Engine.EMaterialLODType
enum class FEMaterialLODType : uint8_t
{
	EMaterialLODType::Off = 0, 
	EMaterialLODType::BakeTexture = 1, 
	EMaterialLODType::BakeVertexColor = 2, 
	EMaterialLODType::Replace = 3, 
	EMaterialLODType::EMaterialLODType_MAX = 4, 
};
//Enum Engine.ESimplygonLODType
enum class FESimplygonLODType : uint8_t
{
	ESimplygonLODType::Reduction = 0, 
	ESimplygonLODType::Remeshing = 1, 
	ESimplygonLODType::ESimplygonLODType_MAX = 2, 
};
//Enum Engine.EOptimizationMetric
enum class FEOptimizationMetric : uint8_t
{
	EOptimizationMetric::TrianglePercentage = 0, 
	EOptimizationMetric::OnScreenSize = 1, 
	EOptimizationMetric::MaxDeviation = 2, 
	EOptimizationMetric::EOptimizationMetric_MAX = 3, 
};
//Enum Engine.EMaterialProxySmaplingQuality
enum class FEMaterialProxySmaplingQuality : uint8_t
{
	EMaterialProxySmaplingQuality::Poor = 0, 
	EMaterialProxySmaplingQuality::Low = 1, 
	EMaterialProxySmaplingQuality::Medium = 2, 
	EMaterialProxySmaplingQuality::High = 3, 
	EMaterialProxySmaplingQuality::EMaterialProxySmaplingQuality_MAX = 4, 
};
//Enum Engine.EUVStrech
enum class FEUVStrech : uint8_t
{
	EUVStrech::Small = 0, 
	EUVStrech::Medium = 1, 
	EUVStrech::Large = 2, 
	EUVStrech::VeryLarge = 3, 
	EUVStrech::EUVStrech_MAX = 4, 
};
//Enum Engine.EMaterialMergeType
enum class FEMaterialMergeType : uint8_t
{
	MaterialMergeType_Default = 0, 
	MaterialMergeType_Simplygon = 1, 
	MaterialMergeType_MAX = 2, 
};
//Enum Engine.ETextureSizingType
enum class FETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0, 
	TextureSizingType_UseAutomaticBiasedSizes = 1, 
	TextureSizingType_UseManualOverrideTextureSize = 2, 
	TextureSizingType_UseSimplygonAutomaticSizing = 3, 
	TextureSizingType_MAX = 4, 
};
//Enum Engine.EMeshMergeType
enum class FEMeshMergeType : uint8_t
{
	EMeshMergeType::MeshMergeType_Default = 0, 
	EMeshMergeType::MeshMergeType_MergeActor = 1, 
	EMeshMergeType::MeshMergeType_MAX = 2, 
};
//Enum Engine.EMeshLODSelectionType
enum class FEMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType::AllLODs = 0, 
	EMeshLODSelectionType::SpecificLOD = 1, 
	EMeshLODSelectionType::CalculateLOD = 2, 
	EMeshLODSelectionType::LowestDetailLOD = 3, 
	EMeshLODSelectionType::EMeshLODSelectionType_MAX = 4, 
};
//Enum Engine.EProxyNormalComputationMethod
enum class FEProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod::AngleWeighted = 0, 
	EProxyNormalComputationMethod::AreaWeighted = 1, 
	EProxyNormalComputationMethod::EqualWeighted = 2, 
	EProxyNormalComputationMethod::EProxyNormalComputationMethod_MAX = 3, 
};
//Enum Engine.ELandscapeCullingPrecision
enum class FELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision::High = 0, 
	ELandscapeCullingPrecision::Medium = 1, 
	ELandscapeCullingPrecision::Low = 2, 
	ELandscapeCullingPrecision::ELandscapeCullingPrecision_MAX = 3, 
};
//Enum Engine.EPhysXAggregationMode
enum class FEPhysXAggregationMode : uint8_t
{
	EPhysXAggregationMode::NoCollision = 0, 
	EPhysXAggregationMode::BlockAllWithComplexAsSimple = 1, 
	EPhysXAggregationMode::EPhysXAggregationMode_MAX = 2, 
};
//Enum Engine.EChartAggregationMode
enum class FEChartAggregationMode : uint8_t
{
	EChartAggregationMode::TextureSize = 0, 
	EChartAggregationMode::SurfaceArea = 1, 
	EChartAggregationMode::PixelDensity = 2, 
	EChartAggregationMode::UVSize = 3, 
	EChartAggregationMode::EChartAggregationMode_MAX = 4, 
};
//Enum Engine.EStaticMeshReductionTerimationCriterion
enum class FEStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion::Triangles = 0, 
	EStaticMeshReductionTerimationCriterion::Vertices = 1, 
	EStaticMeshReductionTerimationCriterion::Any = 2, 
	EStaticMeshReductionTerimationCriterion::EStaticMeshReductionTerimationCriterion_MAX = 3, 
};
//Enum Engine.EMeshFeatureImportance
enum class FEMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance::Off = 0, 
	EMeshFeatureImportance::Lowest = 1, 
	EMeshFeatureImportance::Low = 2, 
	EMeshFeatureImportance::Normal = 3, 
	EMeshFeatureImportance::High = 4, 
	EMeshFeatureImportance::Highest = 5, 
	EMeshFeatureImportance::EMeshFeatureImportance_MAX = 6, 
};
//Enum Engine.EBrushType
enum class FEBrushType : uint8_t
{
	Brush_Default = 0, 
	Brush_Add = 1, 
	Brush_Subtract = 2, 
	Brush_MAX = 3, 
};
//Enum Engine.ECsgOper
enum class FECsgOper : uint8_t
{
	CSG_Active = 0, 
	CSG_Add = 1, 
	CSG_Subtract = 2, 
	CSG_Intersect = 3, 
	CSG_Deintersect = 4, 
	CSG_None = 5, 
	CSG_MAX = 6, 
};
//Enum Engine.ReverbPreset
enum class FReverbPreset : uint8_t
{
	REVERB_Default = 0, 
	REVERB_Bathroom = 1, 
	REVERB_StoneRoom = 2, 
	REVERB_Auditorium = 3, 
	REVERB_ConcertHall = 4, 
	REVERB_Cave = 5, 
	REVERB_Hallway = 6, 
	REVERB_StoneCorridor = 7, 
	REVERB_Alley = 8, 
	REVERB_Forest = 9, 
	REVERB_City = 10, 
	REVERB_Mountains = 11, 
	REVERB_Quarry = 12, 
	REVERB_Plain = 13, 
	REVERB_ParkingLot = 14, 
	REVERB_SewerPipe = 15, 
	REVERB_Underwater = 16, 
	REVERB_SmallRoom = 17, 
	REVERB_MediumRoom = 18, 
	REVERB_LargeRoom = 19, 
	REVERB_MediumHall = 20, 
	REVERB_LargeHall = 21, 
	REVERB_Plate = 22, 
	REVERB_MAX = 23, 
};
//Enum Engine.EBlendableLocation
enum class FEBlendableLocation : uint8_t
{
	BL_AfterTonemapping = 0, 
	BL_BeforeTonemapping = 1, 
	BL_BeforeTranslucency = 2, 
	BL_ReplacingTonemapper = 3, 
	BL_MAX = 4, 
};
//Enum Engine.EHBAOBlurRadius
enum class FEHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0 = 0, 
	AOBR_BlurRadius4 = 1, 
	AOBR_BlurRadius8 = 2, 
	AOBR_MAX = 3, 
};
//Enum Engine.EBloomMethod
enum class FEBloomMethod : uint8_t
{
	BM_SOG = 0, 
	BM_FFT = 1, 
	BM_MAX = 2, 
};
//Enum Engine.EAutoExposureMethod
enum class FEAutoExposureMethod : uint8_t
{
	AEM_Histogram = 0, 
	AEM_Basic = 1, 
	AEM_MAX = 2, 
};
//Enum Engine.EAntiAliasingMethod
enum class FEAntiAliasingMethod : uint8_t
{
	AAM_None = 0, 
	AAM_FXAA = 1, 
	AAM_TemporalAA = 2, 
	AAM_MSAA = 3, 
	AAM_MAX = 4, 
};
//Enum Engine.EDepthOfFieldMethod
enum class FEDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF = 0, 
	DOFM_Gaussian = 1, 
	DOFM_CircleDOF = 2, 
	DOFM_MAX = 3, 
};
//Enum Engine.EIndoorLightVolumeShape
enum class FEIndoorLightVolumeShape : uint8_t
{
	EIndoorLightVolumeShape::ILVS_Cube = 0, 
	EIndoorLightVolumeShape::ILVS_Sphere = 1, 
	EIndoorLightVolumeShape::ILVS_MAX = 2, 
};
//Enum Engine.EStreamingVolumeUsage
enum class FEStreamingVolumeUsage : uint8_t
{
	SVB_Loading = 0, 
	SVB_LoadingAndVisibility = 1, 
	SVB_VisibilityBlockingOnLoad = 2, 
	SVB_BlockingOnLoad = 3, 
	SVB_LoadingNotVisible = 4, 
	SVB_MAX = 5, 
};
//Enum Engine.ENavigationQueryResult
enum class FENavigationQueryResult : uint8_t
{
	ENavigationQueryResult::Invalid = 0, 
	ENavigationQueryResult::Error = 1, 
	ENavigationQueryResult::Fail = 2, 
	ENavigationQueryResult::Success = 3, 
	ENavigationQueryResult::ENavigationQueryResult_MAX = 4, 
};
//Enum Engine.ENavDataGatheringModeConfig
enum class FENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig::Invalid = 0, 
	ENavDataGatheringModeConfig::Instant = 1, 
	ENavDataGatheringModeConfig::Lazy = 2, 
	ENavDataGatheringModeConfig::ENavDataGatheringModeConfig_MAX = 3, 
};
//Enum Engine.ENavDataGatheringMode
enum class FENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode::Default = 0, 
	ENavDataGatheringMode::Instant = 1, 
	ENavDataGatheringMode::Lazy = 2, 
	ENavDataGatheringMode::ENavDataGatheringMode_MAX = 3, 
};
//Enum Engine.ENavigationOptionFlag
enum class FENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag::Default = 0, 
	ENavigationOptionFlag::Enable = 1, 
	ENavigationOptionFlag::Disable = 2, 
	ENavigationOptionFlag::MAX = 3, 
	ENavigationOptionFlag::ENavigationOptionFlag_MAX = 4, 
};
//Enum Engine.EMaterialProperty
enum class FEMaterialProperty : uint8_t
{
	MP_EmissiveColor = 0, 
	MP_Opacity = 1, 
	MP_OpacityMask = 2, 
	MP_DiffuseColor = 3, 
	MP_SpecularColor = 4, 
	MP_BaseColor = 5, 
	MP_Metallic = 6, 
	MP_Specular = 7, 
	MP_Roughness = 8, 
	MP_Normal = 9, 
	MP_WorldPositionOffset = 10, 
	MP_WorldDisplacement = 11, 
	MP_TessellationMultiplier = 12, 
	MP_SubsurfaceColor = 13, 
	MP_SubsurfaceProfile = 14, 
	MP_CustomData0 = 15, 
	MP_CustomData1 = 16, 
	MP_AmbientOcclusion = 17, 
	MP_Refraction = 18, 
	MP_CustomizedUVs0 = 19, 
	MP_CustomizedUVs1 = 20, 
	MP_CustomizedUVs2 = 21, 
	MP_CustomizedUVs3 = 22, 
	MP_CustomizedUVs4 = 23, 
	MP_CustomizedUVs5 = 24, 
	MP_CustomizedUVs6 = 25, 
	MP_CustomizedUVs7 = 26, 
	MP_PixelDepthOffset = 27, 
	MP_MaterialAttributes = 28, 
	MP_CustomOutput = 29, 
	MP_MAX = 30, 
};
//Enum Engine.ECameraAnimPlaySpace
enum class FECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace::CameraLocal = 0, 
	ECameraAnimPlaySpace::World = 1, 
	ECameraAnimPlaySpace::UserDefined = 2, 
	ECameraAnimPlaySpace::ECameraAnimPlaySpace_MAX = 3, 
};
//Enum Engine.ECameraProjectionMode
enum class FECameraProjectionMode : uint8_t
{
	ECameraProjectionMode::Perspective = 0, 
	ECameraProjectionMode::Orthographic = 1, 
	ECameraProjectionMode::ECameraProjectionMode_MAX = 2, 
};
//Enum Engine.EInitialOscillatorOffset
enum class FEInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom = 0, 
	EOO_OffsetZero = 1, 
	EOO_MAX = 2, 
};
//Enum Engine.EViewTargetBlendFunction
enum class FEViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear = 0, 
	VTBlend_Cubic = 1, 
	VTBlend_EaseIn = 2, 
	VTBlend_EaseOut = 3, 
	VTBlend_EaseInOut = 4, 
	VTBlend_MAX = 5, 
};
//Enum Engine.EControllerAnalogStick
enum class FEControllerAnalogStick : uint8_t
{
	EControllerAnalogStick::CAS_LeftStick = 0, 
	EControllerAnalogStick::CAS_RightStick = 1, 
	EControllerAnalogStick::CAS_MAX = 2, 
};
//Enum Engine.ERichCurveExtrapolation
enum class FERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle = 0, 
	RCCE_CycleWithOffset = 1, 
	RCCE_Oscillate = 2, 
	RCCE_Linear = 3, 
	RCCE_Constant = 4, 
	RCCE_None = 5, 
	RCCE_MAX = 6, 
};
//Enum Engine.ERichCurveTangentWeightMode
enum class FERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone = 0, 
	RCTWM_WeightedArrive = 1, 
	RCTWM_WeightedLeave = 2, 
	RCTWM_WeightedBoth = 3, 
	RCTWM_MAX = 4, 
};
//Enum Engine.ERichCurveTangentMode
enum class FERichCurveTangentMode : uint8_t
{
	RCTM_Auto = 0, 
	RCTM_User = 1, 
	RCTM_Break = 2, 
	RCTM_None = 3, 
	RCTM_MAX = 4, 
};
//Enum Engine.ERichCurveInterpMode
enum class FERichCurveInterpMode : uint8_t
{
	RCIM_Linear = 0, 
	RCIM_Constant = 1, 
	RCIM_Cubic = 2, 
	RCIM_None = 3, 
	RCIM_MAX = 4, 
};
//Enum Engine.EDynamicForceFeedbackAction
enum class FEDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction::Start = 0, 
	EDynamicForceFeedbackAction::Update = 1, 
	EDynamicForceFeedbackAction::Stop = 2, 
	EDynamicForceFeedbackAction::EDynamicForceFeedbackAction_MAX = 3, 
};
//Enum Engine.EStandbyType
enum class FEStandbyType : uint8_t
{
	STDBY_Rx = 0, 
	STDBY_Tx = 1, 
	STDBY_BadPing = 2, 
	STDBY_MAX = 3, 
};
//Enum Engine.EVisibilityAggressiveness
enum class FEVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive = 0, 
	VIS_ModeratelyAggressive = 1, 
	VIS_MostAggressive = 2, 
	VIS_Max = 3, 
};
//Enum Engine.EDynamicActorScene
enum class FEDynamicActorScene : uint8_t
{
	EDynamicActorScene::Default = 0, 
	EDynamicActorScene::UseSyncScene = 1, 
	EDynamicActorScene::UseAsyncScene = 2, 
	EDynamicActorScene::EDynamicActorScene_MAX = 3, 
};
//Enum Engine.EDOFMode
enum class FEDOFMode : uint8_t
{
	EDOFMode::Default = 0, 
	EDOFMode::SixDOF = 1, 
	EDOFMode::YZPlane = 2, 
	EDOFMode::XZPlane = 3, 
	EDOFMode::XYPlane = 4, 
	EDOFMode::CustomPlane = 5, 
	EDOFMode::None = 6, 
	EDOFMode::EDOFMode_MAX = 7, 
};
//Enum Engine.ERendererStencilMask
enum class FERendererStencilMask : uint8_t
{
	ERendererStencilMask::ERSM_Default = 0, 
	ERendererStencilMask::ERSM = 1, 
	ERendererStencilMask::ERSM = 2, 
	ERendererStencilMask::ERSM = 3, 
	ERendererStencilMask::ERSM = 4, 
	ERendererStencilMask::ERSM = 5, 
	ERendererStencilMask::ERSM = 6, 
	ERendererStencilMask::ERSM = 7, 
	ERendererStencilMask::ERSM = 8, 
	ERendererStencilMask::ERSM = 9, 
	ERendererStencilMask::ERSM_MAX = 10, 
};
//Enum Engine.EHasCustomNavigableGeometry
enum class FEHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry::No = 0, 
	EHasCustomNavigableGeometry::Yes = 1, 
	EHasCustomNavigableGeometry::EvenIfNotCollidable = 2, 
	EHasCustomNavigableGeometry::DontExport = 3, 
	EHasCustomNavigableGeometry::EHasCustomNavigableGeometry_MAX = 4, 
};
//Enum Engine.ECanBeCharacterBase
enum class FECanBeCharacterBase : uint8_t
{
	ECB_No = 0, 
	ECB_Yes = 1, 
	ECB_Owner = 2, 
	ECB_MAX = 3, 
};
//Enum Engine.EMaterialClipVolumeImportance
enum class FEMaterialClipVolumeImportance : uint8_t
{
	MCVI_Low = 0, 
	MCVI_Medium = 1, 
	MCVI_High = 2, 
	MCVI_Critical = 3, 
	MCVI_MAX = 4, 
};
//Enum Engine.EMaterialDomain
enum class FEMaterialDomain : uint8_t
{
	MD_Surface = 0, 
	MD_DeferredDecal = 1, 
	MD_LightFunction = 2, 
	MD_Volume = 3, 
	MD_PostProcess = 4, 
	MD_UI = 5, 
	MD_MAX = 6, 
};
//Enum Engine.ERuntimeGenerationType
enum class FERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType::Static = 0, 
	ERuntimeGenerationType::DynamicModifiersOnly = 1, 
	ERuntimeGenerationType::Dynamic = 2, 
	ERuntimeGenerationType::LegacyGeneration = 3, 
	ERuntimeGenerationType::ERuntimeGenerationType_MAX = 4, 
};
//Enum Engine.ERecastPartitioning
enum class FERecastPartitioning : uint8_t
{
	ERecastPartitioning::Monotone = 0, 
	ERecastPartitioning::Watershed = 1, 
	ERecastPartitioning::ChunkyMonotone = 2, 
	ERecastPartitioning::ERecastPartitioning_MAX = 3, 
};
//Enum Engine.ENavCostDisplay
enum class FENavCostDisplay : uint8_t
{
	ENavCostDisplay::TotalCost = 0, 
	ENavCostDisplay::HeuristicOnly = 1, 
	ENavCostDisplay::RealCostOnly = 2, 
	ENavCostDisplay::ENavCostDisplay_MAX = 3, 
};
//Enum Engine.ENavLinkDirection
enum class FENavLinkDirection : uint8_t
{
	ENavLinkDirection::BothWays = 0, 
	ENavLinkDirection::LeftToRight = 1, 
	ENavLinkDirection::RightToLeft = 2, 
	ENavLinkDirection::ENavLinkDirection_MAX = 3, 
};
//Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class FEParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None = 0, 
	EPSOBM_ParticleBounds = 1, 
	EPSOBM_CustomBounds = 2, 
	EPSOBM_MAX = 3, 
};
//Enum Engine.ParticleSystemLODMethod
enum class FParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0, 
	PARTICLESYSTEMLODMETHOD_DirectSet = 1, 
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2, 
	PARTICLESYSTEMLODMETHOD_MAX = 3, 
};
//Enum Engine.EParticleSystemUpdateMode
enum class FEParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime = 0, 
	EPSUM_FixedTime = 1, 
	EPSUM_MAX = 2, 
};
//Enum Engine.EParticleEventType
enum class FEParticleEventType : uint8_t
{
	EPET_Any = 0, 
	EPET_Spawn = 1, 
	EPET_Death = 2, 
	EPET_Collision = 3, 
	EPET_Burst = 4, 
	EPET_Blueprint = 5, 
	EPET_MAX = 6, 
};
//Enum Engine.ParticleReplayState
enum class FParticleReplayState : uint8_t
{
	PRS_Disabled = 0, 
	PRS_Capturing = 1, 
	PRS_Replaying = 2, 
	PRS_MAX = 3, 
};
//Enum Engine.EParticleSysParamType
enum class FEParticleSysParamType : uint8_t
{
	PSPT_None = 0, 
	PSPT_Scalar = 1, 
	PSPT_ScalarRand = 2, 
	PSPT_Vector = 3, 
	PSPT_VectorRand = 4, 
	PSPT_Color = 5, 
	PSPT_Actor = 6, 
	PSPT_Material = 7, 
	PSPT_MAX = 8, 
};
//Enum Engine.EAnimLinkMethod
enum class FEAnimLinkMethod : uint8_t
{
	EAnimLinkMethod::Absolute = 0, 
	EAnimLinkMethod::Relative = 1, 
	EAnimLinkMethod::Proportional = 2, 
	EAnimLinkMethod::EAnimLinkMethod_MAX = 3, 
};
//Enum Engine.EAxisOption
enum class FEAxisOption : uint8_t
{
	EAxisOption::X = 0, 
	EAxisOption::Y = 1, 
	EAxisOption::Z = 2, 
	EAxisOption::X_Neg = 3, 
	EAxisOption::Y_Neg = 4, 
	EAxisOption::Z_Neg = 5, 
	EAxisOption::Custom = 6, 
	EAxisOption::EAxisOption_MAX = 7, 
};
//Enum Engine.EAnimInterpolationType
enum class FEAnimInterpolationType : uint8_t
{
	EAnimInterpolationType::Linear = 0, 
	EAnimInterpolationType::Step = 1, 
	EAnimInterpolationType::EAnimInterpolationType_MAX = 2, 
};
//Enum Engine.ECurveBlendOption
enum class FECurveBlendOption : uint8_t
{
	ECurveBlendOption::MaxWeight = 0, 
	ECurveBlendOption::NormalizeByWeight = 1, 
	ECurveBlendOption::BlendByWeight = 2, 
	ECurveBlendOption::ECurveBlendOption_MAX = 3, 
};
//Enum Engine.EAdditiveAnimationType
enum class FEAdditiveAnimationType : uint8_t
{
	AAT_None = 0, 
	AAT_LocalSpaceBase = 1, 
	AAT_RotationOffsetMeshSpace = 2, 
	AAT_MAX = 3, 
};
//Enum Engine.ENotifyFilterType
enum class FENotifyFilterType : uint8_t
{
	ENotifyFilterType::NoFiltering = 0, 
	ENotifyFilterType::LOD = 1, 
	ENotifyFilterType::ENotifyFilterType_MAX = 2, 
};
//Enum Engine.EMontageNotifyTickType
enum class FEMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType::Queued = 0, 
	EMontageNotifyTickType::BranchingPoint = 1, 
	EMontageNotifyTickType::EMontageNotifyTickType_MAX = 2, 
};
//Enum Engine.EBoneRotationSource
enum class FEBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0, 
	BRS_KeepLocalSpaceRotation = 1, 
	BRS_CopyFromTarget = 2, 
	BRS_MAX = 3, 
};
//Enum Engine.EBoneControlSpace
enum class FEBoneControlSpace : uint8_t
{
	BCS_WorldSpace = 0, 
	BCS_ComponentSpace = 1, 
	BCS_ParentBoneSpace = 2, 
	BCS_BoneSpace = 3, 
	BCS_MAX = 4, 
};
//Enum Engine.EBoneAxis
enum class FEBoneAxis : uint8_t
{
	BA_X = 0, 
	BA_Y = 1, 
	BA_Z = 2, 
	BA_MAX = 3, 
};
//Enum Engine.ESkeletalMeshLODType
enum class FESkeletalMeshLODType : uint8_t
{
	ESkeletalMeshLODType::Reduction = 0, 
	ESkeletalMeshLODType::Proxy = 1, 
	ESkeletalMeshLODType::ESkeletalMeshLODType_MAX = 2, 
};
//Enum Engine.SkeletalMeshOptimizationType
enum class FSkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles = 0, 
	SMOT_MaxDeviation = 1, 
	SMOT_ScreenSize = 2, 
	SMOT_MAX = 3, 
};
//Enum Engine.SkeletalMeshOptimizationImportance
enum class FSkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off = 0, 
	SMOI_Lowest = 1, 
	SMOI_Low = 2, 
	SMOI_Normal = 3, 
	SMOI_High = 4, 
	SMOI_Highest = 5, 
	SMOI_MAX = 6, 
};
//Enum Engine.SkeletalMeshTerminationCriterion
enum class FSkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles = 0, 
	SMTC_NumOfVerts = 1, 
	SMTC_TriangleOrVert = 2, 
	SMTC_AbsNumOfTriangles = 3, 
	SMTC_AbsNumOfVerts = 4, 
	SMTC_AbsTriangleOrVert = 5, 
	SMTC_MAX = 6, 
};
//Enum Engine.AnimationCompressionFormat
enum class FAnimationCompressionFormat : uint8_t
{
	ACF_None = 0, 
	ACF_Float96NoW = 1, 
	ACF_Fixed48NoW = 2, 
	ACF_IntervalFixed32NoW = 3, 
	ACF_Fixed32NoW = 4, 
	ACF_Float32NoW = 5, 
	ACF_Identity = 6, 
	ACF_MAX = 7, 
};
//Enum Engine.EAdditiveBasePoseType
enum class FEAdditiveBasePoseType : uint8_t
{
	ABPT_None = 0, 
	ABPT_RefPose = 1, 
	ABPT_AnimScaled = 2, 
	ABPT_AnimFrame = 3, 
	ABPT_MAX = 4, 
};
//Enum Engine.ERootMotionMode
enum class FERootMotionMode : uint8_t
{
	ERootMotionMode::NoRootMotionExtraction = 0, 
	ERootMotionMode::IgnoreRootMotion = 1, 
	ERootMotionMode::RootMotionFromEverything = 2, 
	ERootMotionMode::RootMotionFromMontagesOnly = 3, 
	ERootMotionMode::ERootMotionMode_MAX = 4, 
};
//Enum Engine.ERootMotionRootLock
enum class FERootMotionRootLock : uint8_t
{
	ERootMotionRootLock::RefPose = 0, 
	ERootMotionRootLock::AnimFirstFrame = 1, 
	ERootMotionRootLock::Zero = 2, 
	ERootMotionRootLock::ERootMotionRootLock_MAX = 3, 
};
//Enum Engine.EAnimGroupRole
enum class FEAnimGroupRole : uint8_t
{
	EAnimGroupRole::CanBeLeader = 0, 
	EAnimGroupRole::AlwaysFollower = 1, 
	EAnimGroupRole::AlwaysLeader = 2, 
	EAnimGroupRole::TransitionLeader = 3, 
	EAnimGroupRole::EAnimGroupRole_MAX = 4, 
};
//Enum Engine.ERootMotionFinishVelocityMode
enum class FERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity = 0, 
	ERootMotionFinishVelocityMode::SetVelocity = 1, 
	ERootMotionFinishVelocityMode::ClampVelocity = 2, 
	ERootMotionFinishVelocityMode::ERootMotionFinishVelocityMode_MAX = 3, 
};
//Enum Engine.ERootMotionSourceSettingsFlags
enum class FERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck = 0, 
	ERootMotionSourceSettingsFlags::DisablePartialEndTick = 1, 
	ERootMotionSourceSettingsFlags::ERootMotionSourceSettingsFlags_MAX = 2, 
};
//Enum Engine.ERootMotionSourceStatusFlags
enum class FERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags::Prepared = 0, 
	ERootMotionSourceStatusFlags::Finished = 1, 
	ERootMotionSourceStatusFlags::MarkedForRemoval = 2, 
	ERootMotionSourceStatusFlags::ERootMotionSourceStatusFlags_MAX = 3, 
};
//Enum Engine.ERootMotionAccumulateMode
enum class FERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode::Override = 0, 
	ERootMotionAccumulateMode::Additive = 1, 
	ERootMotionAccumulateMode::ERootMotionAccumulateMode_MAX = 2, 
};
//Enum Engine.EBoneTranslationRetargetingMode
enum class FEBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode::Animation = 0, 
	EBoneTranslationRetargetingMode::Skeleton = 1, 
	EBoneTranslationRetargetingMode::AnimationScaled = 2, 
	EBoneTranslationRetargetingMode::AnimationRelative = 3, 
	EBoneTranslationRetargetingMode::EBoneTranslationRetargetingMode_MAX = 4, 
};
//Enum Engine.EAlphaBlendOption
enum class FEAlphaBlendOption : uint8_t
{
	EAlphaBlendOption::Linear = 0, 
	EAlphaBlendOption::Cubic = 1, 
	EAlphaBlendOption::HermiteCubic = 2, 
	EAlphaBlendOption::Sinusoidal = 3, 
	EAlphaBlendOption::QuadraticInOut = 4, 
	EAlphaBlendOption::CubicInOut = 5, 
	EAlphaBlendOption::QuarticInOut = 6, 
	EAlphaBlendOption::QuinticInOut = 7, 
	EAlphaBlendOption::CircularIn = 8, 
	EAlphaBlendOption::CircularOut = 9, 
	EAlphaBlendOption::CircularInOut = 10, 
	EAlphaBlendOption::ExpIn = 11, 
	EAlphaBlendOption::ExpOut = 12, 
	EAlphaBlendOption::ExpInOut = 13, 
	EAlphaBlendOption::Custom = 14, 
	EAlphaBlendOption::EAlphaBlendOption_MAX = 15, 
};
//Enum Engine.ERawCurveTrackTypes
enum class FERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes::RCT_Float = 0, 
	ERawCurveTrackTypes::RCT_Vector = 1, 
	ERawCurveTrackTypes::RCT_Transform = 2, 
	ERawCurveTrackTypes::RCT_MAX = 3, 
};
//Enum Engine.EAnimAssetCurveFlags
enum class FEAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0, 
	AACF_DriveAttribute_DEPRECATED = 1, 
	AACF_Editable = 2, 
	AACF_DriveMaterial_DEPRECATED = 3, 
	AACF_Metadata = 4, 
	AACF_DriveTrack = 5, 
	AACF_Disabled = 6, 
	AACF_MAX = 7, 
};
//Enum Engine.ETypeAdvanceAnim
enum class FETypeAdvanceAnim : uint8_t
{
	ETAA_Default = 0, 
	ETAA_Finished = 1, 
	ETAA_Looped = 2, 
	ETAA_MAX = 3, 
};
//Enum Engine.EAnimNotifyEventType
enum class FEAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType::Begin = 0, 
	EAnimNotifyEventType::End = 1, 
	EAnimNotifyEventType::EAnimNotifyEventType_MAX = 2, 
};
//Enum Engine.ELinearConstraintMotion
enum class FELinearConstraintMotion : uint8_t
{
	LCM_Free = 0, 
	LCM_Limited = 1, 
	LCM_Locked = 2, 
	LCM_MAX = 3, 
};
//Enum Engine.EAngularDriveMode
enum class FEAngularDriveMode : uint8_t
{
	EAngularDriveMode::SLERP = 0, 
	EAngularDriveMode::TwistAndSwing = 1, 
	EAngularDriveMode::EAngularDriveMode_MAX = 2, 
};
//Enum Engine.EAttenuationShape
enum class FEAttenuationShape : uint8_t
{
	EAttenuationShape::Sphere = 0, 
	EAttenuationShape::Capsule = 1, 
	EAttenuationShape::Box = 2, 
	EAttenuationShape::Cone = 3, 
	EAttenuationShape::EAttenuationShape_MAX = 4, 
};
//Enum Engine.EAttenuationDistanceModel
enum class FEAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel::Linear = 0, 
	EAttenuationDistanceModel::Logarithmic = 1, 
	EAttenuationDistanceModel::Inverse = 2, 
	EAttenuationDistanceModel::LogReverse = 3, 
	EAttenuationDistanceModel::NaturalSound = 4, 
	EAttenuationDistanceModel::Custom = 5, 
	EAttenuationDistanceModel::EAttenuationDistanceModel_MAX = 6, 
};
//Enum Engine.ESoundSpatializationAlgorithm
enum class FESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default = 0, 
	SPATIALIZATION_HRTF = 1, 
	SPATIALIZATION_MAX = 2, 
};
//Enum Engine.ESoundDistanceCalc
enum class FESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal = 0, 
	SOUNDDISTANCE_InfiniteXYPlane = 1, 
	SOUNDDISTANCE_InfiniteXZPlane = 2, 
	SOUNDDISTANCE_InfiniteYZPlane = 3, 
	SOUNDDISTANCE_MAX = 4, 
};
//Enum Engine.EUserDefinedStructureStatus
enum class FEUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate = 0, 
	UDSS_Dirty = 1, 
	UDSS_Error = 2, 
	UDSS_Duplicate = 3, 
	UDSS_MAX = 4, 
};
//Enum Engine.EVectorFieldConstructionOp
enum class FEVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude = 0, 
	VFCO_Revolve = 1, 
	VFCO_MAX = 2, 
};
//Enum Engine.EPostCopyOperation
enum class FEPostCopyOperation : uint8_t
{
	EPostCopyOperation::None = 0, 
	EPostCopyOperation::LogicalNegateBool = 1, 
	EPostCopyOperation::Dereference = 2, 
	EPostCopyOperation::EPostCopyOperation_MAX = 3, 
};
//Enum Engine.EPinHidingMode
enum class FEPinHidingMode : uint8_t
{
	EPinHidingMode::NeverAsPin = 0, 
	EPinHidingMode::PinHiddenByDefault = 1, 
	EPinHidingMode::PinShownByDefault = 2, 
	EPinHidingMode::AlwaysAsPin = 3, 
	EPinHidingMode::EPinHidingMode_MAX = 4, 
};
//Enum Engine.EAnimAlphaInputType
enum class FEAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType::Float = 0, 
	EAnimAlphaInputType::Bool = 1, 
	EAnimAlphaInputType::Curve = 2, 
	EAnimAlphaInputType::EAnimAlphaInputType_MAX = 3, 
};
//Enum Engine.EEvaluatorMode
enum class FEEvaluatorMode : uint8_t
{
	EEvaluatorMode::EM_Standard = 0, 
	EEvaluatorMode::EM_Freeze = 1, 
	EEvaluatorMode::EM_DelayedFreeze = 2, 
	EEvaluatorMode::EM_MAX = 3, 
};
//Enum Engine.EEvaluatorDataSource
enum class FEEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource::EDS_SourcePose = 0, 
	EEvaluatorDataSource::EDS_DestinationPose = 1, 
	EEvaluatorDataSource::EDS_MAX = 2, 
};
//Enum Engine.ECameraAlphaBlendMode
enum class FECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode::CABM_Linear = 0, 
	ECameraAlphaBlendMode::CABM_Cubic = 1, 
	ECameraAlphaBlendMode::CABM_MAX = 2, 
};
//Enum Engine.EVertexPaintAxis
enum class FEVertexPaintAxis : uint8_t
{
	EVertexPaintAxis::X = 0, 
	EVertexPaintAxis::Y = 1, 
	EVertexPaintAxis::Z = 2, 
	EVertexPaintAxis::EVertexPaintAxis_MAX = 3, 
};
//Enum Engine.EDrawDebugItemType
enum class FEDrawDebugItemType : uint8_t
{
	EDrawDebugItemType::DirectionalArrow = 0, 
	EDrawDebugItemType::Sphere = 1, 
	EDrawDebugItemType::Line = 2, 
	EDrawDebugItemType::OnScreenMessage = 3, 
	EDrawDebugItemType::CoordinateSystem = 4, 
	EDrawDebugItemType::EDrawDebugItemType_MAX = 5, 
};
//Enum Engine.AnimPhysCollisionType
enum class FAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType::CoM = 0, 
	AnimPhysCollisionType::CustomSphere = 1, 
	AnimPhysCollisionType::InnerSphere = 2, 
	AnimPhysCollisionType::OuterSphere = 3, 
	AnimPhysCollisionType::AnimPhysCollisionType_MAX = 4, 
};
//Enum Engine.AnimPhysTwistAxis
enum class FAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis::AxisX = 0, 
	AnimPhysTwistAxis::AxisY = 1, 
	AnimPhysTwistAxis::AxisZ = 2, 
	AnimPhysTwistAxis::AnimPhysTwistAxis_MAX = 3, 
};
//Enum Engine.EWindowTitleBarMode
enum class FEWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode::Overlay = 0, 
	EWindowTitleBarMode::VerticalBox = 1, 
	EWindowTitleBarMode::EWindowTitleBarMode_MAX = 2, 
};
//Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class FEModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode::Add = 0, 
	EModifyCurveApplyMode::Scale = 1, 
	EModifyCurveApplyMode::Blend = 2, 
	EModifyCurveApplyMode::EModifyCurveApplyMode_MAX = 3, 
};
//Enum AnimGraphRuntime.ERBFDistanceMethod
enum class FERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod::Euclidean = 0, 
	ERBFDistanceMethod::Quaternion = 1, 
	ERBFDistanceMethod::SwingAngle = 2, 
	ERBFDistanceMethod::ERBFDistanceMethod_MAX = 3, 
};
//Enum AnimGraphRuntime.ERBFFunctionType
enum class FERBFFunctionType : uint8_t
{
	ERBFFunctionType::Gaussian = 0, 
	ERBFFunctionType::Exponential = 1, 
	ERBFFunctionType::Linear = 2, 
	ERBFFunctionType::Cubic = 3, 
	ERBFFunctionType::Quintic = 4, 
	ERBFFunctionType::ERBFFunctionType_MAX = 5, 
};
//Enum AnimGraphRuntime.EPoseDriverOutput
enum class FEPoseDriverOutput : uint8_t
{
	EPoseDriverOutput::DrivePoses = 0, 
	EPoseDriverOutput::DriveCurves = 1, 
	EPoseDriverOutput::EPoseDriverOutput_MAX = 2, 
};
//Enum AnimGraphRuntime.EPoseDriverSource
enum class FEPoseDriverSource : uint8_t
{
	EPoseDriverSource::Rotation = 0, 
	EPoseDriverSource::Translation = 1, 
	EPoseDriverSource::EPoseDriverSource_MAX = 2, 
};
//Enum AnimGraphRuntime.EPoseDriverType
enum class FEPoseDriverType : uint8_t
{
	EPoseDriverType::SwingAndTwist = 0, 
	EPoseDriverType::SwingOnly = 1, 
	EPoseDriverType::Translation = 2, 
	EPoseDriverType::EPoseDriverType_MAX = 3, 
};
//Enum AnimGraphRuntime.ESnapshotSourceMode
enum class FESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode::NamedSnapshot = 0, 
	ESnapshotSourceMode::SnapshotPin = 1, 
	ESnapshotSourceMode::ESnapshotSourceMode_MAX = 2, 
};
//Enum AnimGraphRuntime.ERefPoseType
enum class FERefPoseType : uint8_t
{
	EIT_LocalSpace = 0, 
	EIT_Additive = 1, 
	EIT_MAX = 2, 
};
//Enum AnimGraphRuntime.ESequenceEvalReinit
enum class FESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit::NoReset = 0, 
	ESequenceEvalReinit::StartPosition = 1, 
	ESequenceEvalReinit::ExplicitTime = 2, 
	ESequenceEvalReinit::ESequenceEvalReinit_MAX = 3, 
};
//Enum AnimGraphRuntime.ESphericalLimitType
enum class FESphericalLimitType : uint8_t
{
	ESphericalLimitType::Inner = 0, 
	ESphericalLimitType::Outer = 1, 
	ESphericalLimitType::ESphericalLimitType_MAX = 2, 
};
//Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class FAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType::Component = 0, 
	AnimPhysSimSpaceType::Actor = 1, 
	AnimPhysSimSpaceType::World = 2, 
	AnimPhysSimSpaceType::RootRelative = 3, 
	AnimPhysSimSpaceType::BoneRelative = 4, 
	AnimPhysSimSpaceType::AnimPhysSimSpaceType_MAX = 5, 
};
//Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class FAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType::Free = 0, 
	AnimPhysLinearConstraintType::Limited = 1, 
	AnimPhysLinearConstraintType::AnimPhysLinearConstraintType_MAX = 2, 
};
//Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class FAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType::Angular = 0, 
	AnimPhysAngularConstraintType::Cone = 1, 
	AnimPhysAngularConstraintType::AnimPhysAngularConstraintType_MAX = 2, 
};
//Enum AnimGraphRuntime.EDrivenDestinationMode
enum class FEDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode::Bone = 0, 
	EDrivenDestinationMode::MorphTarget = 1, 
	EDrivenDestinationMode::MaterialParameter = 2, 
	EDrivenDestinationMode::EDrivenDestinationMode_MAX = 3, 
};
//Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class FEDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode::AddToInput = 0, 
	EDrivenBoneModificationMode::ReplaceComponent = 1, 
	EDrivenBoneModificationMode::AddToRefPose = 2, 
	EDrivenBoneModificationMode::EDrivenBoneModificationMode_MAX = 3, 
};
//Enum AnimGraphRuntime.EComponentType
enum class FEComponentType : uint8_t
{
	EComponentType::None = 0, 
	EComponentType::TranslationX = 1, 
	EComponentType::TranslationY = 2, 
	EComponentType::TranslationZ = 3, 
	EComponentType::RotationX = 4, 
	EComponentType::RotationY = 5, 
	EComponentType::RotationZ = 6, 
	EComponentType::Scale = 7, 
	EComponentType::ScaleX = 8, 
	EComponentType::ScaleY = 9, 
	EComponentType::ScaleZ = 10, 
	EComponentType::EComponentType_MAX = 11, 
};
//Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class FCopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode::Accumulate = 0, 
	CopyBoneDeltaMode::Copy = 1, 
	CopyBoneDeltaMode::CopyBoneDeltaMode_MAX = 2, 
};
//Enum AnimGraphRuntime.EInterpolationBlend
enum class FEInterpolationBlend : uint8_t
{
	EInterpolationBlend::Linear = 0, 
	EInterpolationBlend::Cubic = 1, 
	EInterpolationBlend::Sinusoidal = 2, 
	EInterpolationBlend::EaseInOutExponent2 = 3, 
	EInterpolationBlend::EaseInOutExponent3 = 4, 
	EInterpolationBlend::EaseInOutExponent4 = 5, 
	EInterpolationBlend::EaseInOutExponent5 = 6, 
	EInterpolationBlend::MAX = 7, 
	EInterpolationBlend::EInterpolationBlend_MAX = 8, 
};
//Enum AnimGraphRuntime.EBoneModificationMode
enum class FEBoneModificationMode : uint8_t
{
	BMM_Ignore = 0, 
	BMM_Replace = 1, 
	BMM_Additive = 2, 
	BMM_MAX = 3, 
};
//Enum AnimGraphRuntime.ESplineBoneAxis
enum class FESplineBoneAxis : uint8_t
{
	ESplineBoneAxis::X = 0, 
	ESplineBoneAxis::Y = 1, 
	ESplineBoneAxis::Z = 2, 
	ESplineBoneAxis::ESplineBoneAxis_MAX = 3, 
};
//Enum UMG.EDragPivot
enum class FEDragPivot : uint8_t
{
	EDragPivot::MouseDown = 0, 
	EDragPivot::TopLeft = 1, 
	EDragPivot::TopCenter = 2, 
	EDragPivot::TopRight = 3, 
	EDragPivot::CenterLeft = 4, 
	EDragPivot::CenterCenter = 5, 
	EDragPivot::CenterRight = 6, 
	EDragPivot::BottomLeft = 7, 
	EDragPivot::BottomCenter = 8, 
	EDragPivot::BottomRight = 9, 
	EDragPivot::EDragPivot_MAX = 10, 
};
//Enum UMG.ESlateSizeRule
enum class FESlateSizeRule : uint8_t
{
	ESlateSizeRule::Automatic = 0, 
	ESlateSizeRule::Fill = 1, 
	ESlateSizeRule::ESlateSizeRule_MAX = 2, 
};
//Enum UMG.EWidgetDesignFlags
enum class FEWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags::None = 0, 
	EWidgetDesignFlags::Designing = 1, 
	EWidgetDesignFlags::ShowOutline = 2, 
	EWidgetDesignFlags::ExecutePreConstruct = 3, 
	EWidgetDesignFlags::EWidgetDesignFlags_MAX = 4, 
};
//Enum UMG.EBindingKind
enum class FEBindingKind : uint8_t
{
	EBindingKind::Function = 0, 
	EBindingKind::Property = 1, 
	EBindingKind::EBindingKind_MAX = 2, 
};
//Enum UMG.EDesignPreviewSizeMode
enum class FEDesignPreviewSizeMode : uint8_t
{
	EDesignPreviewSizeMode::FillScreen = 0, 
	EDesignPreviewSizeMode::Custom = 1, 
	EDesignPreviewSizeMode::CustomOnScreen = 2, 
	EDesignPreviewSizeMode::Desired = 3, 
	EDesignPreviewSizeMode::DesiredOnScreen = 4, 
	EDesignPreviewSizeMode::EDesignPreviewSizeMode_MAX = 5, 
};
//Enum TslGame.ECharFlagsNormal
enum class FECharFlagsNormal : uint8_t
{
	ECharFlagsNormal::IsGroggying = 0, 
	ECharFlagsNormal::IsActiveRagdollActive = 1, 
	ECharFlagsNormal::HasShieldEquipped = 2, 
	ECharFlagsNormal::IsOutsideBluezone = 3, 
	ECharFlagsNormal::ECharFlagsNormal_MAX = 4, 
};
//Enum TslGame.ELandingState
enum class FELandingState : uint8_t
{
	ELandingState::None = 0, 
	ELandingState::Falling = 1, 
	ELandingState::HeavyFalling = 2, 
	ELandingState::ExtremeFalling = 3, 
	ELandingState::FallingRecovery = 4, 
	ELandingState::PostLandingRecovery = 5, 
	ELandingState::ELandingState_MAX = 6, 
};
//Enum TslGame.ECharFlagsSkipOwner
enum class FECharFlagsSkipOwner : uint8_t
{
	ECharFlagsSkipOwner::WantsToRun = 0, 
	ECharFlagsSkipOwner::WantsToSprint = 1, 
	ECharFlagsSkipOwner::WantsToSprintingAuto = 2, 
	ECharFlagsSkipOwner::WantsToRollingLeft = 3, 
	ECharFlagsSkipOwner::WantsToRollingRight = 4, 
	ECharFlagsSkipOwner::AimStateActive = 5, 
	ECharFlagsSkipOwner::IsThirdPerson = 6, 
	ECharFlagsSkipOwner::IsReviving = 7, 
	ECharFlagsSkipOwner::IgnoreRotation = 8, 
	ECharFlagsSkipOwner::IsWeaponObstructed = 9, 
	ECharFlagsSkipOwner::IsCoatEquipped = 10, 
	ECharFlagsSkipOwner::IsThrowHigh = 11, 
	ECharFlagsSkipOwner::WantsToCancelVault = 12, 
	ECharFlagsSkipOwner::IsScopingRemote = 13, 
	ECharFlagsSkipOwner::IsAimingRemote = 14, 
	ECharFlagsSkipOwner::IsFirstPersonRemote = 15, 
	ECharFlagsSkipOwner::IsInVehicleRemote = 16, 
	ECharFlagsSkipOwner::IsPeekLeftRemote = 17, 
	ECharFlagsSkipOwner::IsPeekRightRemote = 18, 
	ECharFlagsSkipOwner::IsHoldingAngled = 19, 
	ECharFlagsSkipOwner::ECharFlagsSkipOwner_MAX = 20, 
};
//Enum TslGame.EPunchDamageType
enum class FEPunchDamageType : uint8_t
{
	PunchDamage_Light = 0, 
	PunchDamage_Heavy = 1, 
	PunchDamage_MAX = 2, 
};
//Enum TslGame.EMovementType
enum class FEMovementType : uint8_t
{
	M_StandWalk = 0, 
	M_StandRun = 1, 
	M_StandSprint = 2, 
	M_CrouchWalk = 3, 
	M_CrouchRun = 4, 
	M_CrouchSprint = 5, 
	M_ProneWalk = 6, 
	M_ProneRun = 7, 
	M_ProneSprint = 8, 
	M_StandScope = 9, 
	M_CrouchScope = 10, 
	M_ProneScope = 11, 
	M_StandAim = 12, 
	M_CrouchAim = 13, 
	M_ProneAim = 14, 
	M_Swim = 15, 
	M_UnderwaterSwim = 16, 
	M_DBNO = 17, 
	M_MAX = 18, 
};
//Enum TslGame.EMovementDirection
enum class FEMovementDirection : uint8_t
{
	EMovementDirection::F_Direction = 0, 
	EMovementDirection::L_Direction = 1, 
	EMovementDirection::R_Direction = 2, 
	EMovementDirection::B_Direction = 3, 
	EMovementDirection::FL_Direction = 4, 
	EMovementDirection::FR_Direction = 5, 
	EMovementDirection::BL_Direction = 6, 
	EMovementDirection::BR_Direction = 7, 
	EMovementDirection::EMovementDirection_MAX = 8, 
};
//Enum TslGame.EAnimStanceType
enum class FEAnimStanceType : uint8_t
{
	AnimType_Stand = 0, 
	AnimType_Crouch = 1, 
	AnimType_Prone = 2, 
	AnimType_MAX = 3, 
};
//Enum TslGame.ERaycastDirection
enum class FERaycastDirection : uint8_t
{
	ERaycastDirection::Forward = 0, 
	ERaycastDirection::Down_45_Degrees = 1, 
	ERaycastDirection::Down = 2, 
	ERaycastDirection::ERaycastDirection_MAX = 3, 
};
//Enum TslGame.ESurviveWeaponPropSlot
enum class FESurviveWeaponPropSlot : uint8_t
{
	ESurviveWeaponPropSlot::SWPS_MainShootWeapon1 = 0, 
	ESurviveWeaponPropSlot::SWPS_MainShootWeapon2 = 1, 
	ESurviveWeaponPropSlot::SWPS_SubShootWeapon = 2, 
	ESurviveWeaponPropSlot::SWPS_MeleeWeapon = 3, 
	ESurviveWeaponPropSlot::SWPS_HandProp = 4, 
	ESurviveWeaponPropSlot::SWPS_Max = 5, 
};
//Enum TslGame.EWeatherStatusType
enum class FEWeatherStatusType : uint8_t
{
	EWeatherStatusType::EWeatherStatusType_None = 0, 
	EWeatherStatusType::EWeatherStatusType_SunnyDay = 1, 
	EWeatherStatusType::EWeatherStatusType_Night = 2, 
	EWeatherStatusType::EWeatherStatusType_Fog = 3, 
	EWeatherStatusType::EWeatherStatusType_Rain = 4, 
	EWeatherStatusType::EWeatherStatusType_Snow = 5, 
	EWeatherStatusType::EWeatherStatusType_Blizzard = 6, 
	EWeatherStatusType::EWeatherStatusType_MAX = 7, 
};
//Enum TslGame.UTPickerTargetType
enum class FUTPickerTargetType : uint8_t
{
	UTPickerTargetType::PTT_FRIEND = 0, 
	UTPickerTargetType::PTT_ENEMY = 1, 
	UTPickerTargetType::PTT_ALL = 2, 
	UTPickerTargetType::PTT_Self = 3, 
	UTPickerTargetType::PTT_MAX = 4, 
};
//Enum TslGame.ExtraPlayerLiveState
enum class FExtraPlayerLiveState : uint8_t
{
	ExtraPlayerLiveState::InDefault = 0, 
	ExtraPlayerLiveState::InPlane = 1, 
	ExtraPlayerLiveState::InParachute = 2, 
	ExtraPlayerLiveState::InVehicle = 3, 
	ExtraPlayerLiveState::InDying = 4, 
	ExtraPlayerLiveState::InDied = 5, 
	ExtraPlayerLiveState::Offline = 6, 
	ExtraPlayerLiveState::ExtraPlayerLiveState_MAX = 7, 
};
//Enum TslGame.EAIMoveType
enum class FEAIMoveType : uint8_t
{
	EAIMoveType::StraightMove = 0, 
	EAIMoveType::CurveMove = 1, 
	EAIMoveType::EAIMoveType_MAX = 2, 
};
//Enum TslGame.EAIWeaponShootType
enum class FEAIWeaponShootType : uint8_t
{
	EAIWeaponShootType::SingleShot = 0, 
	EAIWeaponShootType::Auto = 1, 
	EAIWeaponShootType::EAIWeaponShootType_MAX = 2, 
};
//Enum TslGame.EAINewFocusPriority
enum class FEAINewFocusPriority : uint8_t
{
	EAINewFocusPriority::Default = 0, 
	EAINewFocusPriority::Move = 1, 
	EAINewFocusPriority::Gameplay = 2, 
	EAINewFocusPriority::EAINewFocusPriority_MAX = 3, 
};
//Enum TslGame.EAIMovePose
enum class FEAIMovePose : uint8_t
{
	EAIMovePose::Walk = 0, 
	EAIMovePose::Run = 1, 
	EAIMovePose::CrouchSprint = 2, 
	EAIMovePose::KeepCurrentPose = 3, 
	EAIMovePose::EAIMovePose_MAX = 4, 
};
//Enum TslGame.EAIPoseState
enum class FEAIPoseState : uint8_t
{
	EAIPoseState::Stand = 0, 
	EAIPoseState::Crouch = 1, 
	EAIPoseState::Prone = 2, 
	EAIPoseState::Jump = 3, 
	EAIPoseState::Reload = 4, 
	EAIPoseState::EAIPoseState_MAX = 5, 
};
//Enum TslGame.EAITriggerAttrType
enum class FEAITriggerAttrType : uint8_t
{
	EAITriggerAttrType::None = 0, 
	EAITriggerAttrType::Health = 1, 
	EAITriggerAttrType::Energy = 2, 
	EAITriggerAttrType::EAITriggerAttrType_MAX = 3, 
};
//Enum TslGame.EAIAttrCompareType
enum class FEAIAttrCompareType : uint8_t
{
	EAIAttrCompareType::None = 0, 
	EAIAttrCompareType::Great = 1, 
	EAIAttrCompareType::Less = 2, 
	EAIAttrCompareType::EAIAttrCompareType_MAX = 3, 
};
//Enum TslGame.EAIEquipSpawnItemType
enum class FEAIEquipSpawnItemType : uint8_t
{
	EAIEquipSpawnItemType::Shoot_Weap = 0, 
	EAIEquipSpawnItemType::Backpack = 1, 
	EAIEquipSpawnItemType::other = 2, 
	EAIEquipSpawnItemType::EAIEquipSpawnItemType_MAX = 3, 
};
//Enum TslGame.EModifyBlackboardDataValueType
enum class FEModifyBlackboardDataValueType : uint8_t
{
	EModifyBlackboardDataValueType::Int = 0, 
	EModifyBlackboardDataValueType::Float = 1, 
	EModifyBlackboardDataValueType::Bool = 2, 
	EModifyBlackboardDataValueType::String = 3, 
	EModifyBlackboardDataValueType::Object = 4, 
	EModifyBlackboardDataValueType::Vector3 = 5, 
	EModifyBlackboardDataValueType::EModifyBlackboardDataValueType_MAX = 6, 
};
//Enum TslGame.EFlareDeploymentType
enum class FEFlareDeploymentType : uint8_t
{
	EFlareDeploymentType::Deploy_None = 0, 
	EFlareDeploymentType::Deploy_InWhite = 1, 
	EFlareDeploymentType::Deploy_InBlue = 2, 
	EFlareDeploymentType::Deploy_Outside = 3, 
	EFlareDeploymentType::Deploy_MAX = 4, 
};
//Enum TslGame.ECustomCarepackageState
enum class FECustomCarepackageState : uint8_t
{
	ECustomCarepackageState::Transporting = 0, 
	ECustomCarepackageState::Falling = 1, 
	ECustomCarepackageState::Landing = 2, 
	ECustomCarepackageState::ECustomCarepackageState_MAX = 3, 
};
//Enum TslGame.EFlashbangDebuffCurveValueTypes
enum class FEFlashbangDebuffCurveValueTypes : uint8_t
{
	EFlashbangDebuffCurveValueTypes::Blindness_Duration_Direct = 0, 
	EFlashbangDebuffCurveValueTypes::Blindness_Duration_Indirect = 1, 
	EFlashbangDebuffCurveValueTypes::Tinnitus_Level = 2, 
	EFlashbangDebuffCurveValueTypes::EFlashbangDebuffCurveValueTypes_MAX = 3, 
};
//Enum TslGame.ETslWeatherAction
enum class FETslWeatherAction : uint8_t
{
	ETslWeatherAction::NotDefined = 0, 
	ETslWeatherAction::Initialized = 1, 
	ETslWeatherAction::Prolonged = 2, 
	ETslWeatherAction::ETslWeatherAction_MAX = 3, 
};
//Enum TslGame.EBluezoneType
enum class FEBluezoneType : uint8_t
{
	EBluezoneType::Normal = 0, 
	EBluezoneType::Fast = 1, 
	EBluezoneType::EBluezoneType_MAX = 2, 
};
//Enum TslGame.EVendingMachineType
enum class FEVendingMachineType : uint8_t
{
	EVendingMachineType::AMMUNITION = 0, 
	EVendingMachineType::BOOSTING = 1, 
	EVendingMachineType::THROWABLE = 2, 
	EVendingMachineType::WEAPON = 3, 
	EVendingMachineType::HEALING = 4, 
	EVendingMachineType::EVendingMachineType_MAX = 5, 
};
//Enum TslGame.EPlayerAuthState
enum class FEPlayerAuthState : uint8_t
{
	EPlayerAuthState::None = 0, 
	EPlayerAuthState::Login = 1, 
	EPlayerAuthState::Logout = 2, 
	EPlayerAuthState::EPlayerAuthState_MAX = 3, 
};
//Enum TslGame.EInteractionPhase
enum class FEInteractionPhase : uint8_t
{
	EInteractionPhase::First = 0, 
	EInteractionPhase::Second = 1, 
	EInteractionPhase::EInteractionPhase_MAX = 2, 
};
//Enum TslGame.ELobbyItemBundleType
enum class FELobbyItemBundleType : uint8_t
{
	ELobbyItemBundleType::Bundle = 0, 
	ELobbyItemBundleType::Generator = 1, 
	ELobbyItemBundleType::ELobbyItemBundleType_MAX = 2, 
};
//Enum TslGame.EItemSpawnType
enum class FEItemSpawnType : uint8_t
{
	EItemSpawnType::FixedRatioAndAdjustableTotalNumber = 0, 
	EItemSpawnType::AdjustableRatioAndFixedTotalNumber = 1, 
	EItemSpawnType::AdjustableRatioAndAdjustableTotalNumber = 2, 
	EItemSpawnType::EItemSpawnType_MAX = 3, 
};
//Enum TslGame.ELocationType
enum class FELocationType : uint8_t
{
	ELocationType::LANDMARK = 0, 
	ELocationType::EXTRA_LANDMARK = 1, 
	ELocationType::CITY = 2, 
	ELocationType::CITY_DETAIL = 3, 
	ELocationType::TOWN = 4, 
	ELocationType::COMPOUNDS = 5, 
	ELocationType::EXTRA = 6, 
	ELocationType::TEST_SHOW_ALL = 7, 
	ELocationType::ELocationType_MAX = 8, 
};
//Enum TslGame.EClimate
enum class FEClimate : uint8_t
{
	Climate_Normal = 0, 
	Climate_Hot = 1, 
	Climate_Cold = 2, 
	Climate_Warm = 3, 
	Climate_Humid = 4, 
	Climate_HotAndHumid = 5, 
	Climate_ColdAndHumid = 6, 
	Climate_WarmAndHumid = 7, 
	Climate_Dry = 8, 
	Climate_HotAndDry = 9, 
	Climate_ColdAndDry = 10, 
	Climate_WarmAndDry = 11, 
	Climate_MAX = 12, 
};
//Enum TslGame.ELobbyLinkState
enum class FELobbyLinkState : uint8_t
{
	ELobbyLinkState::Disconnect = 0, 
	ELobbyLinkState::WaitInitialize = 1, 
	ELobbyLinkState::WaitStart = 2, 
	ELobbyLinkState::Gaming = 3, 
	ELobbyLinkState::Finished = 4, 
	ELobbyLinkState::ELobbyLinkState_MAX = 5, 
};
//Enum TslGame.ELobbyCharacterAnimationType
enum class FELobbyCharacterAnimationType : uint8_t
{
	ELobbyCharacterAnimationType::Default = 0, 
	ELobbyCharacterAnimationType::Wardrobe = 1, 
	ELobbyCharacterAnimationType::Appearance = 2, 
	ELobbyCharacterAnimationType::ELobbyCharacterAnimationType_MAX = 3, 
};
//Enum TslGame.EParameterLUTChannel
enum class FEParameterLUTChannel : uint8_t
{
	EParameterLUTChannel::R = 0, 
	EParameterLUTChannel::G = 1, 
	EParameterLUTChannel::B = 2, 
	EParameterLUTChannel::A = 3, 
	EParameterLUTChannel::RGBA = 4, 
	EParameterLUTChannel::Undefined = 5, 
	EParameterLUTChannel::EParameterLUTChannel_MAX = 6, 
};
//Enum TslGame.EMaterialParameterType
enum class FEMaterialParameterType : uint8_t
{
	EMaterialParameterType::Bool = 0, 
	EMaterialParameterType::Scalar = 1, 
	EMaterialParameterType::Vector = 2, 
	EMaterialParameterType::Texture = 3, 
	EMaterialParameterType::Undefined = 4, 
	EMaterialParameterType::EMaterialParameterType_MAX = 5, 
};
//Enum TslGame.EBlackZoneState
enum class FEBlackZoneState : uint8_t
{
	EBlackZoneState::BZ_WaitingForMatchStart = 0, 
	EBlackZoneState::BZ_SelectNewBlackZone = 1, 
	EBlackZoneState::BZ_BeginStrike = 2, 
	EBlackZoneState::BZ_FireMisile = 3, 
	EBlackZoneState::BZ_EndBombing = 4, 
	EBlackZoneState::BZ_MAX = 5, 
};
//Enum TslGame.EVendingMachineState
enum class FEVendingMachineState : uint8_t
{
	EVendingMachineState::ACTIVATED = 0, 
	EVendingMachineState::DEACTIVATED_TEMPORARILY_BY_PICK_DELAY = 1, 
	EVendingMachineState::DEACTIVATED_TEMPORARILY_BY_DAMAGE = 2, 
	EVendingMachineState::DEACTIVATED_TEMPORARILY_BY_JACKPOT = 3, 
	EVendingMachineState::DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT = 4, 
	EVendingMachineState::EVendingMachineState_MAX = 5, 
};
//Enum TslGame.EOutGameMontageState
enum class FEOutGameMontageState : uint8_t
{
	EOutGameMontageState::Default = 0, 
	EOutGameMontageState::Playing = 1, 
	EOutGameMontageState::Interrupted = 2, 
	EOutGameMontageState::Finished = 3, 
	EOutGameMontageState::EOutGameMontageState_MAX = 4, 
};
//Enum TslGame.EItemRequestType
enum class FEItemRequestType : uint8_t
{
	EItemRequestType::None = 0, 
	EItemRequestType::Heal = 1, 
	EItemRequestType::Ammo = 2, 
	EItemRequestType::EItemRequestType_MAX = 3, 
};
//Enum TslGame.JukeBoxAnimState
enum class FJukeBoxAnimState : uint8_t
{
	JukeBoxAnimState::OPEN = 0, 
	JukeBoxAnimState::CLOSED = 1, 
	JukeBoxAnimState::JukeBoxAnimState_MAX = 2, 
};
//Enum TslGame.ELivingThingThreatLevel
enum class FELivingThingThreatLevel : uint8_t
{
	ELivingThingThreatLevel::NoChanged = 0, 
	ELivingThingThreatLevel::IncrementThreatLevel = 1, 
	ELivingThingThreatLevel::DecrementThreatLevel = 2, 
	ELivingThingThreatLevel::Calm = 3, 
	ELivingThingThreatLevel::Fear = 4, 
	ELivingThingThreatLevel::Panic = 5, 
	ELivingThingThreatLevel::Dead = 6, 
	ELivingThingThreatLevel::MAX = 7, 
	ELivingThingThreatLevel::ELivingThingThreatLevel_MAX = 8, 
};
//Enum TslGame.ELivingThingCustomEvent
enum class FELivingThingCustomEvent : uint8_t
{
	ELivingThingCustomEvent::DeadByBullet = 0, 
	ELivingThingCustomEvent::DeadByExplosion = 1, 
	ELivingThingCustomEvent::HittedByCar = 2, 
	ELivingThingCustomEvent::Custom1 = 3, 
	ELivingThingCustomEvent::Custom2 = 4, 
	ELivingThingCustomEvent::Custom3 = 5, 
	ELivingThingCustomEvent::Custom4 = 6, 
	ELivingThingCustomEvent::Custom5 = 7, 
	ELivingThingCustomEvent::Custom6 = 8, 
	ELivingThingCustomEvent::Custom7 = 9, 
	ELivingThingCustomEvent::Custom8 = 10, 
	ELivingThingCustomEvent::Custom9 = 11, 
	ELivingThingCustomEvent::Custom10 = 12, 
	ELivingThingCustomEvent::Custom11 = 13, 
	ELivingThingCustomEvent::Custom12 = 14, 
	ELivingThingCustomEvent::Custom13 = 15, 
	ELivingThingCustomEvent::Custom14 = 16, 
	ELivingThingCustomEvent::Custom15 = 17, 
	ELivingThingCustomEvent::Custom16 = 18, 
	ELivingThingCustomEvent::Custom17 = 19, 
	ELivingThingCustomEvent::Custom18 = 20, 
	ELivingThingCustomEvent::Custom19 = 21, 
	ELivingThingCustomEvent::Custom20 = 22, 
	ELivingThingCustomEvent::MAX = 23, 
	ELivingThingCustomEvent::ELivingThingCustomEvent_MAX = 24, 
};
//Enum TslGame.ELobbyCharacterPosition
enum class FELobbyCharacterPosition : uint8_t
{
	ELobbyCharacterPosition::Position1 = 0, 
	ELobbyCharacterPosition::Position2 = 1, 
	ELobbyCharacterPosition::Position3 = 2, 
	ELobbyCharacterPosition::Position4 = 3, 
	ELobbyCharacterPosition::ELobbyCharacterPosition_MAX = 4, 
};
//Enum TslGame.ELobbyCharacterReadyType
enum class FELobbyCharacterReadyType : uint8_t
{
	ELobbyCharacterReadyType::Ready = 0, 
	ELobbyCharacterReadyType::NotReady = 1, 
	ELobbyCharacterReadyType::ReadyToNotReady = 2, 
	ELobbyCharacterReadyType::NotReadyToReady = 3, 
	ELobbyCharacterReadyType::ELobbyCharacterReadyType_MAX = 4, 
};
//Enum TslGame.EObserverHudAnimType
enum class FEObserverHudAnimType : uint8_t
{
	EObserverHudAnimType::TeamWipeOutAnim = 0, 
	EObserverHudAnimType::PersonalKillingSpreeAnim = 1, 
	EObserverHudAnimType::TeamTotalKillingSpreeAnim = 2, 
	EObserverHudAnimType::EObserverHudAnimType_MAX = 3, 
};
//Enum TslGame.EObserverPlayerListType
enum class FEObserverPlayerListType : uint8_t
{
	EObserverPlayerListType::Distance = 0, 
	EObserverPlayerListType::Kill = 1, 
	EObserverPlayerListType::Survivor = 2, 
	EObserverPlayerListType::Score = 3, 
	EObserverPlayerListType::Max = 4, 
	EObserverPlayerListType::EObserverPlayerListType_MAX = 5, 
};
//Enum TslGame.ETslParticleCullType
enum class FETslParticleCullType : uint8_t
{
	ETslParticleCullType::None = 0, 
	ETslParticleCullType::Distance = 1, 
	ETslParticleCullType::Frustum = 2, 
	ETslParticleCullType::LastRenderedTime = 3, 
	ETslParticleCullType::SameTransform = 4, 
	ETslParticleCullType::NearbyTransform = 5, 
	ETslParticleCullType::DistAndFrustumAndNear = 6, 
	ETslParticleCullType::All = 7, 
	ETslParticleCullType::ETslParticleCullType_MAX = 8, 
};
//Enum TslGame.ETslParticleGroupPriority
enum class FETslParticleGroupPriority : uint8_t
{
	ETslParticleGroupPriority::High = 0, 
	ETslParticleGroupPriority::Low = 1, 
	ETslParticleGroupPriority::ETslParticleGroupPriority_MAX = 2, 
};
//Enum TslGame.ECustomDamageZoneType
enum class FECustomDamageZoneType : uint8_t
{
	ECustomDamageZoneType::Head = 0, 
	ECustomDamageZoneType::UpperBody = 1, 
	ECustomDamageZoneType::LowerBody = 2, 
	ECustomDamageZoneType::Arms = 3, 
	ECustomDamageZoneType::Legs = 4, 
	ECustomDamageZoneType::ECustomDamageZoneType_MAX = 5, 
};
//Enum TslGame.ECustomDamageWeaponClass
enum class FECustomDamageWeaponClass : uint8_t
{
	ECustomDamageWeaponClass::Bullet = 0, 
	ECustomDamageWeaponClass::Melee = 1, 
	ECustomDamageWeaponClass::ECustomDamageWeaponClass_MAX = 2, 
};
//Enum TslGame.EMolotovSimulationType
enum class FEMolotovSimulationType : uint8_t
{
	EMolotovSimulationType::Molotov_SimulationImpact = 0, 
	EMolotovSimulationType::Molotov_SimulationProjectile = 1, 
	EMolotovSimulationType::Molotov_SimulationFragment = 2, 
	EMolotovSimulationType::Molotov_SimulationVolumetric = 3, 
	EMolotovSimulationType::Molotov_MAX = 4, 
};
//Enum TslGame.ESpikeDeploymentState
enum class FESpikeDeploymentState : uint8_t
{
	ESpikeDeploymentState::PreDeploy = 0, 
	ESpikeDeploymentState::Deploying = 1, 
	ESpikeDeploymentState::PostDeploy = 2, 
	ESpikeDeploymentState::Popped = 3, 
	ESpikeDeploymentState::Idle = 4, 
	ESpikeDeploymentState::ESpikeDeploymentState_MAX = 5, 
};
//Enum TslGame.EWarheadExplodedState
enum class FEWarheadExplodedState : uint8_t
{
	EWarheadExplodedState::NotExploded = 0, 
	EWarheadExplodedState::Exploded = 1, 
	EWarheadExplodedState::EWarheadExplodedState_MAX = 2, 
};
//Enum TslGame.ETslReferenceObjType
enum class FETslReferenceObjType : uint8_t
{
	ETslReferenceObjType::GameMode = 0, 
	ETslReferenceObjType::Character = 1, 
	ETslReferenceObjType::Preload = 2, 
	ETslReferenceObjType::ETslReferenceObjType_MAX = 3, 
};
//Enum TslGame.EReplayTimelineMode
enum class FEReplayTimelineMode : uint8_t
{
	EReplayTimelineMode::ReplayPlay = 0, 
	EReplayTimelineMode::ReplayEditor = 1, 
	EReplayTimelineMode::ReplayRender = 2, 
	EReplayTimelineMode::EReplayTimelineMode_MAX = 3, 
};
//Enum TslGame.ETrainHeadingDir
enum class FETrainHeadingDir : uint8_t
{
	ETrainHeadingDir::XPositive = 0, 
	ETrainHeadingDir::XNegative = 1, 
	ETrainHeadingDir::YPositive = 2, 
	ETrainHeadingDir::YNegative = 3, 
	ETrainHeadingDir::ETrainHeadingDir_MAX = 4, 
};
//Enum TslGame.EConditionOfDeath
enum class FEConditionOfDeath : uint8_t
{
	EConditionOfDeath::HeatShot = 0, 
	EConditionOfDeath::DBNO = 1, 
	EConditionOfDeath::DBNOByHeadShot = 2, 
	EConditionOfDeath::None = 3, 
	EConditionOfDeath::EConditionOfDeath_MAX = 4, 
};
//Enum TslGame.ETslWheelWidgetMouseCursorDirectionType
enum class FETslWheelWidgetMouseCursorDirectionType : uint8_t
{
	ETslWheelWidgetMouseCursorDirectionType::ABSOLUTE_COORD = 0, 
	ETslWheelWidgetMouseCursorDirectionType::AREA_RESTRICTED_COORD = 1, 
	ETslWheelWidgetMouseCursorDirectionType::CIRCULAR_RESTRICTED_COORD = 2, 
	ETslWheelWidgetMouseCursorDirectionType::ETslWheelWidgetMouseCursorDirectionType_MAX = 3, 
};
//Enum TslGame.ETslWheelWidgetSelectType
enum class FETslWheelWidgetSelectType : uint8_t
{
	ETslWheelWidgetSelectType::BY_CLICK = 0, 
	ETslWheelWidgetSelectType::BY_RELEASE = 1, 
	ETslWheelWidgetSelectType::BY_MAX = 2, 
};
//Enum TslGame.EBluezoneState
enum class FEBluezoneState : uint8_t
{
	EBluezoneState::None = 0, 
	EBluezoneState::Wait = 1, 
	EBluezoneState::Release = 2, 
	EBluezoneState::EBluezoneState_MAX = 3, 
};
//Enum TslGame.EMinimapFocus
enum class FEMinimapFocus : uint8_t
{
	EMinimapFocus::CharacterFocus = 0, 
	EMinimapFocus::NextPlayzoneFocus = 1, 
	EMinimapFocus::None = 2, 
	EMinimapFocus::EMinimapFocus_MAX = 3, 
};
//Enum TslGame.EDisplayPlayerInfoType
enum class FEDisplayPlayerInfoType : uint8_t
{
	EDisplayPlayerInfoType::PlayerList = 0, 
	EDisplayPlayerInfoType::EngagedEnemies = 1, 
	EDisplayPlayerInfoType::NearbyPlayers = 2, 
	EDisplayPlayerInfoType::OtherEngagements = 3, 
	EDisplayPlayerInfoType::ObserverTeamInfoList = 4, 
	EDisplayPlayerInfoType::EDisplayPlayerInfoType_MAX = 5, 
};
//Enum TslGame.EMarkStates
enum class FEMarkStates : uint8_t
{
	EMarkStates::Normal = 0, 
	EMarkStates::Groggy = 1, 
	EMarkStates::Dead = 2, 
	EMarkStates::Vehicle = 3, 
	EMarkStates::Parachute = 4, 
	EMarkStates::Quitter = 5, 
	EMarkStates::Aircraft = 6, 
	EMarkStates::ItemRequest = 7, 
	EMarkStates::EMarkStates_MAX = 8, 
};
//Enum TslGame.EBinaryStepperType
enum class FEBinaryStepperType : uint8_t
{
	EBinaryStepperType::OFF = 0, 
	EBinaryStepperType::ON = 1, 
	EBinaryStepperType::EBinaryStepperType_MAX = 2, 
};
//Enum TslGame.EGuideKeyType
enum class FEGuideKeyType : uint8_t
{
	EGuideKeyType::None = 0, 
	EGuideKeyType::PickUp = 1, 
	EGuideKeyType::PickUpAndEquip = 2, 
	EGuideKeyType::PickUpAndPickUpAmount = 3, 
	EGuideKeyType::Unequip = 4, 
	EGuideKeyType::DetachAll = 5, 
	EGuideKeyType::DetachAndDetachAll = 6, 
	EGuideKeyType::Drop = 7, 
	EGuideKeyType::DropAndEquip = 8, 
	EGuideKeyType::DropAndDropAmount = 9, 
	EGuideKeyType::DropAndDropAll = 10, 
	EGuideKeyType::Equip = 11, 
	EGuideKeyType::EquipAndQuickEquip = 12, 
	EGuideKeyType::XQuickEquip = 13, 
	EGuideKeyType::XHoldQuickEquip = 14, 
	EGuideKeyType::Swap = 15, 
	EGuideKeyType::Use = 16, 
	EGuideKeyType::Confirm = 17, 
	EGuideKeyType::Cancel = 18, 
	EGuideKeyType::SwitchSlot = 19, 
	EGuideKeyType::Charm = 20, 
	EGuideKeyType::CharmAndDetachAll = 21, 
	EGuideKeyType::EGuideKeyType_MAX = 22, 
};
//Enum TslGame.EGuideLineType
enum class FEGuideLineType : uint8_t
{
	EGuideLineType::Switch = 0, 
	EGuideLineType::Upper = 1, 
	EGuideLineType::Lower = 2, 
	EGuideLineType::EGuideLineType_MAX = 3, 
};
//Enum TslGame.ENoReloadGuideType
enum class FENoReloadGuideType : uint8_t
{
	ENoReloadGuideType::Alwyas = 0, 
	ENoReloadGuideType::WhenCurrentWeapon = 1, 
	ENoReloadGuideType::ENoReloadGuideType_MAX = 2, 
};
//Enum TslGame.EFiremode
enum class FEFiremode : uint8_t
{
	EFiremode::FullAuto = 0, 
	EFiremode::ThreeRoundBurst = 1, 
	EFiremode::TwoRoundBurst = 2, 
	EFiremode::SemiAuto = 3, 
	EFiremode::Single = 4, 
	EFiremode::EFiremode_MAX = 5, 
};
//Enum Engine.ERoundingMode
enum class FERoundingMode : uint8_t
{
	HalfToEven = 0, 
	HalfFromZero = 1, 
	HalfToZero = 2, 
	FromZero = 3, 
	ToZero = 4, 
	ToNegativeInfinity = 5, 
	ToPositiveInfinity = 6, 
	ERoundingMode_MAX = 7, 
};
//Enum Engine.FNavigationSystemRunMode
enum class FFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode::InvalidMode = 0, 
	FNavigationSystemRunMode::GameMode = 1, 
	FNavigationSystemRunMode::EditorMode = 2, 
	FNavigationSystemRunMode::SimulationMode = 3, 
	FNavigationSystemRunMode::PIEMode = 4, 
	FNavigationSystemRunMode::FNavigationSystemRunMode_MAX = 5, 
};
//Enum Engine.EBodyCollisionResponse
enum class FEBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse::BodyCollision_Enabled = 0, 
	EBodyCollisionResponse::BodyCollision_Disabled = 1, 
	EBodyCollisionResponse::BodyCollision_MAX = 2, 
};
//Enum Engine.EPhysicsType
enum class FEPhysicsType : uint8_t
{
	PhysType_Default = 0, 
	PhysType_Kinematic = 1, 
	PhysType_Simulated = 2, 
	PhysType_MAX = 3, 
};
//Enum Engine.ECollisionTraceFlag
enum class FECollisionTraceFlag : uint8_t
{
	CTF_UseDefault = 0, 
	CTF_UseSimpleAndComplex = 1, 
	CTF_UseSimpleAsComplex = 2, 
	CTF_UseComplexAsSimple = 3, 
	CTF_MAX = 4, 
};
//Enum Engine.EFrictionCombineMode
enum class FEFrictionCombineMode : uint8_t
{
	EFrictionCombineMode::Average = 0, 
	EFrictionCombineMode::Min = 1, 
	EFrictionCombineMode::Multiply = 2, 
	EFrictionCombineMode::Max = 3, 
	EFrictionCombineMode::EFrictionCombineMode_MAX = 4, 
};
//Enum Engine.ESettingsLockedAxis
enum class FESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis::None = 0, 
	ESettingsLockedAxis::X = 1, 
	ESettingsLockedAxis::Y = 2, 
	ESettingsLockedAxis::Z = 3, 
	ESettingsLockedAxis::Invalid = 4, 
	ESettingsLockedAxis::ESettingsLockedAxis_MAX = 5, 
};
//Enum Engine.ESettingsDOF
enum class FESettingsDOF : uint8_t
{
	ESettingsDOF::Full3D = 0, 
	ESettingsDOF::YZPlane = 1, 
	ESettingsDOF::XZPlane = 2, 
	ESettingsDOF::XYPlane = 3, 
	ESettingsDOF::ESettingsDOF_MAX = 4, 
};
//Enum Engine.EAutoExposureMethodUI
enum class FEAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI::AEM_Histogram = 0, 
	EAutoExposureMethodUI::AEM_Basic = 1, 
	EAutoExposureMethodUI::AEM_MAX = 2, 
};
//Enum Engine.EEarlyZPass
enum class FEEarlyZPass : uint8_t
{
	EEarlyZPass::None = 0, 
	EEarlyZPass::OpaqueOnly = 1, 
	EEarlyZPass::OpaqueAndMasked = 2, 
	EEarlyZPass::Auto = 3, 
	EEarlyZPass::EEarlyZPass_MAX = 4, 
};
//Enum Engine.ECustomDepthStencil
enum class FECustomDepthStencil : uint8_t
{
	ECustomDepthStencil::Disabled = 0, 
	ECustomDepthStencil::Enabled = 1, 
	ECustomDepthStencil::EnabledOnDemand = 2, 
	ECustomDepthStencil::EnabledWithStencil = 3, 
	ECustomDepthStencil::ECustomDepthStencil_MAX = 4, 
};
//Enum Engine.EMobileMSAASampleCount
enum class FEMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount::One = 0, 
	EMobileMSAASampleCount::Two = 1, 
	EMobileMSAASampleCount::Four = 2, 
	EMobileMSAASampleCount::Eight = 3, 
	EMobileMSAASampleCount::EMobileMSAASampleCount_MAX = 4, 
};
//Enum Engine.ECompositingSampleCount
enum class FECompositingSampleCount : uint8_t
{
	ECompositingSampleCount::One = 0, 
	ECompositingSampleCount::Two = 1, 
	ECompositingSampleCount::Four = 2, 
	ECompositingSampleCount::Eight = 3, 
	ECompositingSampleCount::ECompositingSampleCount_MAX = 4, 
};
//Enum Engine.EClearSceneOptions
enum class FEClearSceneOptions : uint8_t
{
	EClearSceneOptions::NoClear = 0, 
	EClearSceneOptions::HardwareClear = 1, 
	EClearSceneOptions::QuadAtMaxZ = 2, 
	EClearSceneOptions::EClearSceneOptions_MAX = 3, 
};
//Enum Engine.EUIScalingRule
enum class FEUIScalingRule : uint8_t
{
	EUIScalingRule::ShortestSide = 0, 
	EUIScalingRule::LongestSide = 1, 
	EUIScalingRule::Horizontal = 2, 
	EUIScalingRule::Vertical = 3, 
	EUIScalingRule::Custom = 4, 
	EUIScalingRule::EUIScalingRule_MAX = 5, 
};
//Enum Engine.ERenderFocusRule
enum class FERenderFocusRule : uint8_t
{
	ERenderFocusRule::Always = 0, 
	ERenderFocusRule::NonPointer = 1, 
	ERenderFocusRule::NavigationOnly = 2, 
	ERenderFocusRule::Never = 3, 
	ERenderFocusRule::ERenderFocusRule_MAX = 4, 
};
//Enum Engine.DistributionParamMode
enum class FDistributionParamMode : uint8_t
{
	DPM_Normal = 0, 
	DPM_Abs = 1, 
	DPM_Direct = 2, 
	DPM_MAX = 3, 
};
//Enum Engine.EDistributionVectorMirrorFlags
enum class FEDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same = 0, 
	EDVMF_Different = 1, 
	EDVMF_Mirror = 2, 
	EDVMF_MAX = 3, 
};
//Enum Engine.EDistributionVectorLockFlags
enum class FEDistributionVectorLockFlags : uint8_t
{
	EDVLF_None = 0, 
	EDVLF_XY = 1, 
	EDVLF_XZ = 2, 
	EDVLF_YZ = 3, 
	EDVLF_XYZ = 4, 
	EDVLF_MAX = 5, 
};
//Enum Engine.ECanCreateConnectionResponse
enum class FECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE = 0, 
	CONNECT_RESPONSE_DISALLOW = 1, 
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2, 
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3, 
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4, 
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5, 
	CONNECT_RESPONSE_MAX = 6, 
};
//Enum Engine.EGraphType
enum class FEGraphType : uint8_t
{
	GT_Function = 0, 
	GT_Ubergraph = 1, 
	GT_Macro = 2, 
	GT_Animation = 3, 
	GT_StateMachine = 4, 
	GT_MAX = 5, 
};
//Enum Engine.EBackgroundTask
enum class FEBackgroundTask : uint8_t
{
	BT_ShaderCompile = 0, 
	BT_RenderGrassMap = 1, 
	BT_BuildLighting = 2, 
	BT_MAX = 3, 
};
//Enum Engine.EConsoleType
enum class FEConsoleType : uint8_t
{
	CONSOLE_Any = 0, 
	CONSOLE_Mobile = 1, 
	CONSOLE_MAX = 2, 
};
//Enum Engine.ETransitionType
enum class FETransitionType : uint8_t
{
	TT_None = 0, 
	TT_Paused = 1, 
	TT_Loading = 2, 
	TT_Saving = 3, 
	TT_Connecting = 4, 
	TT_Precaching = 5, 
	TT_WaitingToConnect = 6, 
	TT_MAX = 7, 
};
//Enum Engine.EFullyLoadPackageType
enum class FEFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map = 0, 
	FULLYLOAD_Game_PreLoadClass = 1, 
	FULLYLOAD_Game_PostLoadClass = 2, 
	FULLYLOAD_Always = 3, 
	FULLYLOAD_Mutator = 4, 
	FULLYLOAD_MAX = 5, 
};
//Enum Engine.EFontImportCharacterSet
enum class FEFontImportCharacterSet : uint8_t
{
	FontICS_Default = 0, 
	FontICS_Ansi = 1, 
	FontICS_Symbol = 2, 
	FontICS_MAX = 3, 
};
//Enum Engine.EFontCacheType
enum class FEFontCacheType : uint8_t
{
	EFontCacheType::Offline = 0, 
	EFontCacheType::Runtime = 1, 
	EFontCacheType::EFontCacheType_MAX = 2, 
};
//Enum Engine.EWindowMode
enum class FEWindowMode : uint8_t
{
	EWindowMode::Fullscreen = 0, 
	EWindowMode::WindowedFullscreen = 1, 
	EWindowMode::Windowed = 2, 
	EWindowMode::EWindowMode_MAX = 3, 
};
//Enum Engine.ETrackActiveCondition
enum class FETrackActiveCondition : uint8_t
{
	ETAC_Always = 0, 
	ETAC_GoreEnabled = 1, 
	ETAC_GoreDisabled = 2, 
	ETAC_MAX = 3, 
};
//Enum Engine.EInterpTrackMoveRotMode
enum class FEInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed = 0, 
	IMR_LookAtGroup = 1, 
	IMR_Ignore = 2, 
	IMR_MAX = 3, 
};
//Enum Engine.EInterpMoveAxis
enum class FEInterpMoveAxis : uint8_t
{
	AXIS_TranslationX = 0, 
	AXIS_TranslationY = 1, 
	AXIS_TranslationZ = 2, 
	AXIS_RotationX = 3, 
	AXIS_RotationY = 4, 
	AXIS_RotationZ = 5, 
	AXIS_MAX = 6, 
};
//Enum Engine.ETrackToggleAction
enum class FETrackToggleAction : uint8_t
{
	ETTA_Off = 0, 
	ETTA_On = 1, 
	ETTA_Toggle = 2, 
	ETTA_Trigger = 3, 
	ETTA_MAX = 4, 
};
//Enum Engine.EVisibilityTrackCondition
enum class FEVisibilityTrackCondition : uint8_t
{
	EVTC_Always = 0, 
	EVTC_GoreEnabled = 1, 
	EVTC_GoreDisabled = 2, 
	EVTC_MAX = 3, 
};
//Enum Engine.EVisibilityTrackAction
enum class FEVisibilityTrackAction : uint8_t
{
	EVTA_Hide = 0, 
	EVTA_Show = 1, 
	EVTA_Toggle = 2, 
	EVTA_MAX = 3, 
};
//Enum Engine.EMaterialAttributeBlend
enum class FEMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend::Blend = 0, 
	EMaterialAttributeBlend::UseA = 1, 
	EMaterialAttributeBlend::UseB = 2, 
	EMaterialAttributeBlend::EMaterialAttributeBlend_MAX = 3, 
};
//Enum Engine.EClampMode
enum class FEClampMode : uint8_t
{
	CMODE_Clamp = 0, 
	CMODE_ClampMin = 1, 
	CMODE_ClampMax = 2, 
	CMODE_MAX = 3, 
};
//Enum Engine.ECustomMaterialOutputType
enum class FECustomMaterialOutputType : uint8_t
{
	CMOT_Float1 = 0, 
	CMOT_Float2 = 1, 
	CMOT_Float3 = 2, 
	CMOT_Float4 = 3, 
	CMOT_MAX = 4, 
};
//Enum Engine.EDepthOfFieldFunctionValue
enum class FEDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask = 0, 
	TDOF_NearMask = 1, 
	TDOF_FarMask = 2, 
	TDOF_CircleOfConfusionRadius = 3, 
	TDOF_MAX = 4, 
};
//Enum Engine.EFunctionInputType
enum class FEFunctionInputType : uint8_t
{
	FunctionInput_Scalar = 0, 
	FunctionInput_Vector2 = 1, 
	FunctionInput_Vector3 = 2, 
	FunctionInput_Vector4 = 3, 
	FunctionInput_Texture2D = 4, 
	FunctionInput_TextureCube = 5, 
	FunctionInput_StaticBool = 6, 
	FunctionInput_MaterialAttributes = 7, 
	FunctionInput_MAX = 8, 
};
//Enum Engine.ENoiseFunction
enum class FENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex = 0, 
	NOISEFUNCTION_GradientTex = 1, 
	NOISEFUNCTION_GradientTex3D = 2, 
	NOISEFUNCTION_GradientALU = 3, 
	NOISEFUNCTION_ValueALU = 4, 
	NOISEFUNCTION_VoronoiALU = 5, 
	NOISEFUNCTION_MAX = 6, 
};
//Enum Engine.EMaterialSceneAttributeInputMode
enum class FEMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode::Coordinates = 0, 
	EMaterialSceneAttributeInputMode::OffsetFraction = 1, 
	EMaterialSceneAttributeInputMode::EMaterialSceneAttributeInputMode_MAX = 2, 
};
//Enum Engine.ESceneTextureId
enum class FESceneTextureId : uint8_t
{
	PPI_SceneColor = 0, 
	PPI_SceneDepth = 1, 
	PPI_DiffuseColor = 2, 
	PPI_SpecularColor = 3, 
	PPI_SubsurfaceColor = 4, 
	PPI_BaseColor = 5, 
	PPI_Specular = 6, 
	PPI_Metallic = 7, 
	PPI_WorldNormal = 8, 
	PPI_SeparateTranslucency = 9, 
	PPI_Opacity = 10, 
	PPI_Roughness = 11, 
	PPI_MaterialAO = 12, 
	PPI_CustomDepth = 13, 
	PPI_PostProcessInput0 = 14, 
	PPI_PostProcessInput1 = 15, 
	PPI_PostProcessInput2 = 16, 
	PPI_PostProcessInput3 = 17, 
	PPI_PostProcessInput4 = 18, 
	PPI_PostProcessInput5 = 19, 
	PPI_PostProcessInput6 = 20, 
	PPI_DecalMask = 21, 
	PPI_ShadingModel = 22, 
	PPI_AmbientOcclusion = 23, 
	PPI_CustomStencil = 24, 
	PPI_StoredBaseColor = 25, 
	PPI_StoredSpecular = 26, 
	PPI_ScreenCopy = 27, 
	PPI_SceneStencil = 28, 
	PPI_MAX = 29, 
};
//Enum Engine.ESpeedTreeLODType
enum class FESpeedTreeLODType : uint8_t
{
	STLOD_Pop = 0, 
	STLOD_Smooth = 1, 
	STLOD_MAX = 2, 
};
//Enum Engine.ESpeedTreeWindType
enum class FESpeedTreeWindType : uint8_t
{
	STW_None = 0, 
	STW_Fastest = 1, 
	STW_Fast = 2, 
	STW_Better = 3, 
	STW_Best = 4, 
	STW_Palm = 5, 
	STW_BestPlus = 6, 
	STW_MAX = 7, 
};
//Enum Engine.ESpeedTreeGeometryType
enum class FESpeedTreeGeometryType : uint8_t
{
	STG_Branch = 0, 
	STG_Frond = 1, 
	STG_Leaf = 2, 
	STG_FacingLeaf = 3, 
	STG_Billboard = 4, 
	STG_MAX = 5, 
};
//Enum Engine.ETextureChannel
enum class FETextureChannel : uint8_t
{
	ETextureChannel::R = 0, 
	ETextureChannel::G = 1, 
	ETextureChannel::B = 2, 
	ETextureChannel::A = 3, 
	ETextureChannel::ETextureChannel_MAX = 4, 
};
//Enum Engine.ETextureMipValueMode
enum class FETextureMipValueMode : uint8_t
{
	TMVM_None = 0, 
	TMVM_MipLevel = 1, 
	TMVM_MipBias = 2, 
	TMVM_Derivative = 3, 
	TMVM_MAX = 4, 
};
//Enum Engine.ETextureColorChannel
enum class FETextureColorChannel : uint8_t
{
	TCC_Red = 0, 
	TCC_Green = 1, 
	TCC_Blue = 2, 
	TCC_Alpha = 3, 
	TCC_MAX = 4, 
};
//Enum Engine.EMaterialExposedTextureProperty
enum class FEMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize = 0, 
	TMTM_TexelSize = 1, 
	TMTM_MAX = 2, 
};
//Enum Engine.EMaterialVectorCoordTransform
enum class FEMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent = 0, 
	TRANSFORM_Local = 1, 
	TRANSFORM_World = 2, 
	TRANSFORM_View = 3, 
	TRANSFORM_Camera = 4, 
	TRANSFORM_ParticleWorld = 5, 
	TRANSFORM_MAX = 6, 
};
//Enum Engine.EMaterialVectorCoordTransformSource
enum class FEMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent = 0, 
	TRANSFORMSOURCE_Local = 1, 
	TRANSFORMSOURCE_World = 2, 
	TRANSFORMSOURCE_View = 3, 
	TRANSFORMSOURCE_Camera = 4, 
	TRANSFORMSOURCE_ParticleWorld = 5, 
	TRANSFORMSOURCE_MAX = 6, 
};
//Enum Engine.EMaterialPositionTransformSource
enum class FEMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local = 0, 
	TRANSFORMPOSSOURCE_World = 1, 
	TRANSFORMPOSSOURCE_TranslatedWorld = 2, 
	TRANSFORMPOSSOURCE_View = 3, 
	TRANSFORMPOSSOURCE_Camera = 4, 
	TRANSFORMPOSSOURCE_Particle = 5, 
	TRANSFORMPOSSOURCE_MAX = 6, 
};
//Enum Engine.EVectorNoiseFunction
enum class FEVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU = 0, 
	VNF_VectorALU = 1, 
	VNF_GradientALU = 2, 
	VNF_CurlALU = 3, 
	VNF_VoronoiALU = 4, 
	VNF_MAX = 5, 
};
//Enum Engine.EMaterialExposedViewProperty
enum class FEMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize = 0, 
	MEVP_FieldOfView = 1, 
	MEVP_TanHalfFieldOfView = 2, 
	MEVP_ViewSize = 3, 
	MEVP_WorldSpaceViewPosition = 4, 
	MEVP_WorldSpaceCameraPosition = 5, 
	MEVP_ViewportOffset = 6, 
	MEVP_MAX = 7, 
};
//Enum Engine.EWorldPositionIncludedOffsets
enum class FEWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default = 0, 
	WPT_Full = 1, 
	WPT_ExcludeAllShaderOffsets = 2, 
	WPT_FullNoOffsets = 3, 
	WPT_CameraRelative = 4, 
	WPT_CameraRelativeNoOffsets = 5, 
	WPT_MAX = 6, 
};
//Enum Engine.EMaterialDecalResponse
enum class FEMaterialDecalResponse : uint8_t
{
	MDR_None = 0, 
	MDR_ColorNormalRoughness = 1, 
	MDR_Color = 2, 
	MDR_ColorNormal = 3, 
	MDR_ColorRoughness = 4, 
	MDR_Normal = 5, 
	MDR_NormalRoughness = 6, 
	MDR_Roughness = 7, 
	MDR_MAX = 8, 
};
//Enum Engine.EDecalBlendMode
enum class FEDecalBlendMode : uint8_t
{
	DBM_Translucent = 0, 
	DBM_Stain = 1, 
	DBM_Normal = 2, 
	DBM_Emissive = 3, 
	DBM_DBuffer_ColorNormalRoughness = 4, 
	DBM_DBuffer_Color = 5, 
	DBM_DBuffer_ColorNormal = 6, 
	DBM_DBuffer_ColorRoughness = 7, 
	DBM_DBuffer_Normal = 8, 
	DBM_DBuffer_NormalRoughness = 9, 
	DBM_DBuffer_Roughness = 10, 
	DBM_Volumetric_DistanceFunction = 11, 
	DBM_MAX = 12, 
};
//Enum Engine.EEmitterRenderMode
enum class FEEmitterRenderMode : uint8_t
{
	ERM_Normal = 0, 
	ERM_Point = 1, 
	ERM_Cross = 2, 
	ERM_LightsOnly = 3, 
	ERM_None = 4, 
	ERM_MAX = 5, 
};
//Enum Engine.EParticleSubUVInterpMethod
enum class FEParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None = 0, 
	PSUVIM_Linear = 1, 
	PSUVIM_Linear_Blend = 2, 
	PSUVIM_Random = 3, 
	PSUVIM_Random_Blend = 4, 
	PSUVIM_MAX = 5, 
};
//Enum Engine.EParticleBurstMethod
enum class FEParticleBurstMethod : uint8_t
{
	EPBM_Instant = 0, 
	EPBM_Interpolated = 1, 
	EPBM_MAX = 2, 
};
//Enum Engine.EParticleScreenAlignment
enum class FEParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition = 0, 
	PSA_Square = 1, 
	PSA_Rectangle = 2, 
	PSA_Velocity = 3, 
	PSA_AwayFromCenter = 4, 
	PSA_TypeSpecific = 5, 
	PSA_FacingCameraDistanceBlend = 6, 
	PSA_MAX = 7, 
};
//Enum Engine.EParticleSystemInsignificanceReaction
enum class FEParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction::Auto = 0, 
	EParticleSystemInsignificanceReaction::Complete = 1, 
	EParticleSystemInsignificanceReaction::DisableTick = 2, 
	EParticleSystemInsignificanceReaction::DisableTickAndKill = 3, 
	EParticleSystemInsignificanceReaction::Num = 4, 
	EParticleSystemInsignificanceReaction::EParticleSystemInsignificanceReaction_MAX = 5, 
};
//Enum Engine.EParticleSignificanceLevel
enum class FEParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel::Low = 0, 
	EParticleSignificanceLevel::Medium = 1, 
	EParticleSignificanceLevel::High = 2, 
	EParticleSignificanceLevel::Critical = 3, 
	EParticleSignificanceLevel::Num = 4, 
	EParticleSignificanceLevel::EParticleSignificanceLevel_MAX = 5, 
};
//Enum Engine.EParticleSourceSelectionMethod
enum class FEParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random = 0, 
	EPSSM_Sequential = 1, 
	EPSSM_MAX = 2, 
};
//Enum Engine.EModuleType
enum class FEModuleType : uint8_t
{
	EPMT_General = 0, 
	EPMT_TypeData = 1, 
	EPMT_Beam = 2, 
	EPMT_Trail = 3, 
	EPMT_Spawn = 4, 
	EPMT_Required = 5, 
	EPMT_Event = 6, 
	EPMT_Light = 7, 
	EPMT_SubUV = 8, 
	EPMT_MAX = 9, 
};
//Enum Engine.EAttractorParticleSelectionMethod
enum class FEAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random = 0, 
	EAPSM_Sequential = 1, 
	EAPSM_MAX = 2, 
};
//Enum Engine.Beam2SourceTargetTangentMethod
enum class FBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct = 0, 
	PEB2STTM_UserSet = 1, 
	PEB2STTM_Distribution = 2, 
	PEB2STTM_Emitter = 3, 
	PEB2STTM_MAX = 4, 
};
//Enum Engine.Beam2SourceTargetMethod
enum class FBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default = 0, 
	PEB2STM_UserSet = 1, 
	PEB2STM_Emitter = 2, 
	PEB2STM_Particle = 3, 
	PEB2STM_Actor = 4, 
	PEB2STM_MAX = 5, 
};
//Enum Engine.BeamModifierType
enum class FBeamModifierType : uint8_t
{
	PEB2MT_Source = 0, 
	PEB2MT_Target = 1, 
	PEB2MT_MAX = 2, 
};
//Enum Engine.EParticleCameraOffsetUpdateMethod
enum class FEParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet = 0, 
	EPCOUM_Additive = 1, 
	EPCOUM_Scalar = 2, 
	EPCOUM_MAX = 3, 
};
//Enum Engine.EParticleCollisionComplete
enum class FEParticleCollisionComplete : uint8_t
{
	EPCC_Kill = 0, 
	EPCC_Freeze = 1, 
	EPCC_HaltCollisions = 2, 
	EPCC_FreezeTranslation = 3, 
	EPCC_FreezeRotation = 4, 
	EPCC_FreezeMovement = 5, 
	EPCC_MAX = 6, 
};
//Enum Engine.EParticleCollisionResponse
enum class FEParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse::Bounce = 0, 
	EParticleCollisionResponse::Stop = 1, 
	EParticleCollisionResponse::Kill = 2, 
	EParticleCollisionResponse::EParticleCollisionResponse_MAX = 3, 
};
//Enum Engine.ELocationBoneSocketSelectionMethod
enum class FELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential = 0, 
	BONESOCKETSEL_Random = 1, 
	BONESOCKETSEL_MAX = 2, 
};
//Enum Engine.ELocationBoneSocketSource
enum class FELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones = 0, 
	BONESOCKETSOURCE_Sockets = 1, 
	BONESOCKETSOURCE_MAX = 2, 
};
//Enum Engine.ELocationEmitterSelectionMethod
enum class FELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random = 0, 
	ELESM_Sequential = 1, 
	ELESM_MAX = 2, 
};
//Enum Engine.CylinderHeightAxis
enum class FCylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X = 0, 
	PMLPC_HEIGHTAXIS_Y = 1, 
	PMLPC_HEIGHTAXIS_Z = 2, 
	PMLPC_HEIGHTAXIS_MAX = 3, 
};
//Enum Engine.ELocationSkelVertSurfaceSource
enum class FELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert = 0, 
	VERTSURFACESOURCE_Surface = 1, 
	VERTSURFACESOURCE_MAX = 2, 
};
//Enum Engine.EOrbitChainMode
enum class FEOrbitChainMode : uint8_t
{
	EOChainMode_Add = 0, 
	EOChainMode_Scale = 1, 
	EOChainMode_Link = 2, 
	EOChainMode_MAX = 3, 
};
//Enum Engine.EParticleAxisLock
enum class FEParticleAxisLock : uint8_t
{
	EPAL_NONE = 0, 
	EPAL_X = 1, 
	EPAL_Y = 2, 
	EPAL_Z = 3, 
	EPAL_NEGATIVE_X = 4, 
	EPAL_NEGATIVE_Y = 5, 
	EPAL_NEGATIVE_Z = 6, 
	EPAL_ROTATE_X = 7, 
	EPAL_ROTATE_Y = 8, 
	EPAL_ROTATE_Z = 9, 
	EPAL_MAX = 10, 
};
//Enum Engine.EEmitterDynamicParameterValue
enum class FEEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet = 0, 
	EDPV_AutoSet = 1, 
	EDPV_VelocityX = 2, 
	EDPV_VelocityY = 3, 
	EDPV_VelocityZ = 4, 
	EDPV_VelocityMag = 5, 
	EDPV_MAX = 6, 
};
//Enum Engine.EOpacitySourceMode
enum class FEOpacitySourceMode : uint8_t
{
	OSM_Alpha = 0, 
	OSM_ColorBrightness = 1, 
	OSM_RedChannel = 2, 
	OSM_GreenChannel = 3, 
	OSM_BlueChannel = 4, 
	OSM_MAX = 5, 
};
//Enum Engine.ESubUVBoundingVertexCount
enum class FESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices = 0, 
	BVC_EightVertices = 1, 
	BVC_MAX = 2, 
};
//Enum Engine.EEmitterNormalsMode
enum class FEEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing = 0, 
	ENM_Spherical = 1, 
	ENM_Cylindrical = 2, 
	ENM_MAX = 3, 
};
//Enum Engine.EParticleSortMode
enum class FEParticleSortMode : uint8_t
{
	PSORTMODE_None = 0, 
	PSORTMODE_ViewProjDepth = 1, 
	PSORTMODE_DistanceToView = 2, 
	PSORTMODE_Age_OldestFirst = 3, 
	PSORTMODE_Age_NewestFirst = 4, 
	PSORTMODE_MAX = 5, 
};
//Enum Engine.EParticleUVFlipMode
enum class FEParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode::None = 0, 
	EParticleUVFlipMode::FlipUV = 1, 
	EParticleUVFlipMode::FlipUOnly = 2, 
	EParticleUVFlipMode::FlipVOnly = 3, 
	EParticleUVFlipMode::RandomFlipUV = 4, 
	EParticleUVFlipMode::RandomFlipUOnly = 5, 
	EParticleUVFlipMode::RandomFlipVOnly = 6, 
	EParticleUVFlipMode::RandomFlipUVIndependent = 7, 
	EParticleUVFlipMode::EParticleUVFlipMode_MAX = 8, 
};
//Enum Engine.ETrail2SourceMethod
enum class FETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default = 0, 
	PET2SRCM_Particle = 1, 
	PET2SRCM_Actor = 2, 
	PET2SRCM_MAX = 3, 
};
//Enum Engine.EBeamTaperMethod
enum class FEBeamTaperMethod : uint8_t
{
	PEBTM_None = 0, 
	PEBTM_Full = 1, 
	PEBTM_Partial = 2, 
	PEBTM_MAX = 3, 
};
//Enum Engine.EBeam2Method
enum class FEBeam2Method : uint8_t
{
	PEB2M_Distance = 0, 
	PEB2M_Target = 1, 
	PEB2M_Branch = 2, 
	PEB2M_MAX = 3, 
};
//Enum Engine.EMeshCameraFacingOptions
enum class FEMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp = 0, 
	XAxisFacing_ZUp = 1, 
	XAxisFacing_NegativeZUp = 2, 
	XAxisFacing_YUp = 3, 
	XAxisFacing_NegativeYUp = 4, 
	LockedAxis_ZAxisFacing = 5, 
	LockedAxis_NegativeZAxisFacing = 6, 
	LockedAxis_YAxisFacing = 7, 
	LockedAxis_NegativeYAxisFacing = 8, 
	VelocityAligned_ZAxisFacing = 9, 
	VelocityAligned_NegativeZAxisFacing = 10, 
	VelocityAligned_YAxisFacing = 11, 
	VelocityAligned_NegativeYAxisFacing = 12, 
	EMeshCameraFacingOptions_MAX = 13, 
};
//Enum Engine.EMeshCameraFacingUpAxis
enum class FEMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP = 0, 
	CameraFacing_ZUp = 1, 
	CameraFacing_NegativeZUp = 2, 
	CameraFacing_YUp = 3, 
	CameraFacing_NegativeYUp = 4, 
	CameraFacing_MAX = 5, 
};
//Enum Engine.EMeshScreenAlignment
enum class FEMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll = 0, 
	PSMA_MeshFaceCameraWithSpin = 1, 
	PSMA_MeshFaceCameraWithLockedAxis = 2, 
	PSMA_MAX = 3, 
};
//Enum Engine.ETrailsRenderAxisOption
enum class FETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp = 0, 
	Trails_SourceUp = 1, 
	Trails_WorldUp = 2, 
	Trails_MAX = 3, 
};
//Enum Engine.ECloudStorageDelegate
enum class FECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete = 0, 
	CSD_KeyValueWriteComplete = 1, 
	CSD_ValueChanged = 2, 
	CSD_DocumentQueryComplete = 3, 
	CSD_DocumentReadComplete = 4, 
	CSD_DocumentWriteComplete = 5, 
	CSD_DocumentConflictDetected = 6, 
	CSD_MAX = 7, 
};
//Enum Engine.EAdManagerDelegate
enum class FEAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner = 0, 
	AMD_UserClosedAd = 1, 
	AMD_MAX = 2, 
};
//Enum Engine.EMicroTransactionResult
enum class FEMicroTransactionResult : uint8_t
{
	MTR_Succeeded = 0, 
	MTR_Failed = 1, 
	MTR_Canceled = 2, 
	MTR_RestoredFromServer = 3, 
	MTR_MAX = 4, 
};
//Enum Engine.EMicroTransactionDelegate
enum class FEMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete = 0, 
	MTD_PurchaseComplete = 1, 
	MTD_MAX = 2, 
};
//Enum Engine.ETwitterIntegrationDelegate
enum class FETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete = 0, 
	TID_TweetUIComplete = 1, 
	TID_RequestComplete = 2, 
	TID_MAX = 3, 
};
//Enum Engine.ETwitterRequestMethod
enum class FETwitterRequestMethod : uint8_t
{
	TRM_Get = 0, 
	TRM_Post = 1, 
	TRM_Delete = 2, 
	TRM_MAX = 3, 
};
//Enum Engine.EReporterLineStyle
enum class FEReporterLineStyle : uint8_t
{
	EReporterLineStyle::Line = 0, 
	EReporterLineStyle::Dash = 1, 
	EReporterLineStyle::EReporterLineStyle_MAX = 2, 
};
//Enum Engine.ELegendPosition
enum class FELegendPosition : uint8_t
{
	ELegendPosition::Outside = 0, 
	ELegendPosition::Inside = 1, 
	ELegendPosition::ELegendPosition_MAX = 2, 
};
//Enum Engine.EGraphDataStyle
enum class FEGraphDataStyle : uint8_t
{
	EGraphDataStyle::Lines = 0, 
	EGraphDataStyle::Filled = 1, 
	EGraphDataStyle::EGraphDataStyle_MAX = 2, 
};
//Enum Engine.EGraphAxisStyle
enum class FEGraphAxisStyle : uint8_t
{
	EGraphAxisStyle::Lines = 0, 
	EGraphAxisStyle::Notches = 1, 
	EGraphAxisStyle::Grid = 2, 
	EGraphAxisStyle::EGraphAxisStyle_MAX = 3, 
};
//Enum Engine.EConstraintTransform
enum class FEConstraintTransform : uint8_t
{
	EConstraintTransform::Absolute = 0, 
	EConstraintTransform::Relative = 1, 
	EConstraintTransform::EConstraintTransform_MAX = 2, 
};
//Enum Engine.EControlConstraint
enum class FEControlConstraint : uint8_t
{
	EControlConstraint::Orientation = 0, 
	EControlConstraint::Translation = 1, 
	EControlConstraint::Max = 2, 
	EControlConstraint::EControlConstraint_MAX = 3, 
};
//Enum Engine.EImpactDamageOverride
enum class FEImpactDamageOverride : uint8_t
{
	IDO_None = 0, 
	IDO_On = 1, 
	IDO_Off = 2, 
	IDO_MAX = 3, 
};
//Enum Engine.ETextureSamplerFilter
enum class FETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter::Point = 0, 
	ETextureSamplerFilter::Bilinear = 1, 
	ETextureSamplerFilter::Trilinear = 2, 
	ETextureSamplerFilter::AnisotropicPoint = 3, 
	ETextureSamplerFilter::AnisotropicLinear = 4, 
	ETextureSamplerFilter::ETextureSamplerFilter_MAX = 5, 
};
//Enum Engine.ETexturePowerOfTwoSetting
enum class FETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting::None = 0, 
	ETexturePowerOfTwoSetting::PadToPowerOfTwo = 1, 
	ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo = 2, 
	ETexturePowerOfTwoSetting::ETexturePowerOfTwoSetting_MAX = 3, 
};
//Enum Engine.TextureMipGenSettings
enum class FTextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup = 0, 
	TMGS_SimpleAverage = 1, 
	TMGS_Sharpen0 = 2, 
	TMGS_Sharpen1 = 3, 
	TMGS_Sharpen2 = 4, 
	TMGS_Sharpen3 = 5, 
	TMGS_Sharpen4 = 6, 
	TMGS_Sharpen5 = 7, 
	TMGS_Sharpen6 = 8, 
	TMGS_Sharpen7 = 9, 
	TMGS_Sharpen8 = 10, 
	TMGS_Sharpen9 = 11, 
	TMGS_Sharpen10 = 12, 
	TMGS_NoMipmaps = 13, 
	TMGS_LeaveExistingMips = 14, 
	TMGS_Blur1 = 15, 
	TMGS_Blur2 = 16, 
	TMGS_Blur3 = 17, 
	TMGS_Blur4 = 18, 
	TMGS_Blur5 = 19, 
	TMGS_MAX = 20, 
};
//Enum Engine.TextureGroup
enum class FTextureGroup : uint8_t
{
	TEXTUREGROUP_World = 0, 
	TEXTUREGROUP_WorldNormalMap = 1, 
	TEXTUREGROUP_WorldSpecular = 2, 
	TEXTUREGROUP_Character = 3, 
	TEXTUREGROUP_CharacterNormalMap = 4, 
	TEXTUREGROUP_CharacterSpecular = 5, 
	TEXTUREGROUP_Weapon = 6, 
	TEXTUREGROUP_WeaponNormalMap = 7, 
	TEXTUREGROUP_WeaponSpecular = 8, 
	TEXTUREGROUP_Vehicle = 9, 
	TEXTUREGROUP_VehicleNormalMap = 10, 
	TEXTUREGROUP_VehicleSpecular = 11, 
	TEXTUREGROUP_Landscape = 12, 
	TEXTUREGROUP_LandscapeNormalMap = 13, 
	TEXTUREGROUP_LandscapeSpecular = 14, 
	TEXTUREGROUP_Cinematic = 15, 
	TEXTUREGROUP_Effects = 16, 
	TEXTUREGROUP_EffectsNotFiltered = 17, 
	TEXTUREGROUP_Skybox = 18, 
	TEXTUREGROUP_UI = 19, 
	TEXTUREGROUP_Lightmap = 20, 
	TEXTUREGROUP_RenderTarget = 21, 
	TEXTUREGROUP_MobileFlattened = 22, 
	TEXTUREGROUP_ProcBuilding_Face = 23, 
	TEXTUREGROUP_ProcBuilding_LightMap = 24, 
	TEXTUREGROUP_Shadowmap = 25, 
	TEXTUREGROUP_ColorLookupTable = 26, 
	TEXTUREGROUP_Terrain_Heightmap = 27, 
	TEXTUREGROUP_Terrain_Weightmap = 28, 
	TEXTUREGROUP_Bokeh = 29, 
	TEXTUREGROUP_IESLightProfile = 30, 
	TEXTUREGROUP_Pixels2D = 31, 
	TEXTUREGROUP_HierarchicalLOD = 32, 
	TEXTUREGROUP_MAX = 33, 
};
//Enum Engine.ETextureSourceFormat
enum class FETextureSourceFormat : uint8_t
{
	TSF_Invalid = 0, 
	TSF_G8 = 1, 
	TSF_BGRA8 = 2, 
	TSF_BGRE8 = 3, 
	TSF_RGBA16 = 4, 
	TSF_RGBA16F = 5, 
	TSF_RGBA8 = 6, 
	TSF_RGBE8 = 7, 
	TSF_MAX = 8, 
};
//Enum Engine.ETextureSourceArtType
enum class FETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed = 0, 
	TSAT_PNGCompressed = 1, 
	TSAT_DDSFile = 2, 
	TSAT_MAX = 3, 
};
//Enum Engine.ETextureMipCount
enum class FETextureMipCount : uint8_t
{
	TMC_ResidentMips = 0, 
	TMC_AllMips = 1, 
	TMC_AllMipsBiased = 2, 
	TMC_MAX = 3, 
};
//Enum Engine.ECompositeTextureMode
enum class FECompositeTextureMode : uint8_t
{
	CTM_Disabled = 0, 
	CTM_NormalRoughnessToRed = 1, 
	CTM_NormalRoughnessToGreen = 2, 
	CTM_NormalRoughnessToBlue = 3, 
	CTM_NormalRoughnessToAlpha = 4, 
	CTM_MAX = 5, 
};
//Enum Engine.TextureAddress
enum class FTextureAddress : uint8_t
{
	TA_Wrap = 0, 
	TA_Clamp = 1, 
	TA_Mirror = 2, 
	TA_MAX = 3, 
};
//Enum Engine.TextureFilter
enum class FTextureFilter : uint8_t
{
	TF_Nearest = 0, 
	TF_Bilinear = 1, 
	TF_Trilinear = 2, 
	TF_Default = 3, 
	TF_MAX = 4, 
};
//Enum Engine.TextureCompressionSettings
enum class FTextureCompressionSettings : uint8_t
{
	TC_Default = 0, 
	TC_Normalmap = 1, 
	TC_Masks = 2, 
	TC_Grayscale = 3, 
	TC_Displacementmap = 4, 
	TC_VectorDisplacementmap = 5, 
	TC_HDR = 6, 
	TC_EditorIcon = 7, 
	TC_Alpha = 8, 
	TC_DistanceFieldFont = 9, 
	TC_HDR_Compressed = 10, 
	TC_BC7 = 11, 
	TC_MAX = 12, 
};
//Enum Engine.EMaxConcurrentResolutionRule
enum class FEMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule::PreventNew = 0, 
	EMaxConcurrentResolutionRule::StopOldest = 1, 
	EMaxConcurrentResolutionRule::StopFarthestThenPreventNew = 2, 
	EMaxConcurrentResolutionRule::StopFarthestThenOldest = 3, 
	EMaxConcurrentResolutionRule::StopLowestPriority = 4, 
	EMaxConcurrentResolutionRule::StopQuietest = 5, 
	EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew = 6, 
	EMaxConcurrentResolutionRule::EMaxConcurrentResolutionRule_MAX = 7, 
};
//Enum Engine.ESoundGroup
enum class FESoundGroup : uint8_t
{
	SOUNDGROUP_Default = 0, 
	SOUNDGROUP_Effects = 1, 
	SOUNDGROUP_UI = 2, 
	SOUNDGROUP_Music = 3, 
	SOUNDGROUP_Voice = 4, 
	SOUNDGROUP_GameSoundGroup1 = 5, 
	SOUNDGROUP_GameSoundGroup2 = 6, 
	SOUNDGROUP_GameSoundGroup3 = 7, 
	SOUNDGROUP_GameSoundGroup4 = 8, 
	SOUNDGROUP_GameSoundGroup5 = 9, 
	SOUNDGROUP_GameSoundGroup6 = 10, 
	SOUNDGROUP_GameSoundGroup7 = 11, 
	SOUNDGROUP_GameSoundGroup8 = 12, 
	SOUNDGROUP_GameSoundGroup9 = 13, 
	SOUNDGROUP_GameSoundGroup10 = 14, 
	SOUNDGROUP_GameSoundGroup11 = 15, 
	SOUNDGROUP_GameSoundGroup12 = 16, 
	SOUNDGROUP_GameSoundGroup13 = 17, 
	SOUNDGROUP_GameSoundGroup14 = 18, 
	SOUNDGROUP_GameSoundGroup15 = 19, 
	SOUNDGROUP_GameSoundGroup16 = 20, 
	SOUNDGROUP_GameSoundGroup17 = 21, 
	SOUNDGROUP_GameSoundGroup18 = 22, 
	SOUNDGROUP_GameSoundGroup19 = 23, 
	SOUNDGROUP_GameSoundGroup20 = 24, 
	SOUNDGROUP_MAX = 25, 
};
//Enum Engine.EDecompressionType
enum class FEDecompressionType : uint8_t
{
	DTYPE_Setup = 0, 
	DTYPE_Invalid = 1, 
	DTYPE_Preview = 2, 
	DTYPE_Native = 3, 
	DTYPE_RealTime = 4, 
	DTYPE_Procedural = 5, 
	DTYPE_Xenon = 6, 
	DTYPE_Streaming = 7, 
	DTYPE_MAX = 8, 
};
//Enum Engine.EAudioOutputTarget
enum class FEAudioOutputTarget : uint8_t
{
	EAudioOutputTarget::Speaker = 0, 
	EAudioOutputTarget::Controller = 1, 
	EAudioOutputTarget::ControllerFallbackToSpeaker = 2, 
	EAudioOutputTarget::EAudioOutputTarget_MAX = 3, 
};
//Enum Engine.ModulationParamMode
enum class FModulationParamMode : uint8_t
{
	MPM_Normal = 0, 
	MPM_Abs = 1, 
	MPM_Direct = 2, 
	MPM_MAX = 3, 
};
//Enum Engine.EStaticMeshLODType
enum class FEStaticMeshLODType : uint8_t
{
	EStaticMeshLODType::Reduction = 0, 
	EStaticMeshLODType::Proxy = 1, 
	EStaticMeshLODType::EStaticMeshLODType_MAX = 2, 
};
//Enum Engine.EOptimizationType
enum class FEOptimizationType : uint8_t
{
	OT_NumOfTriangles = 0, 
	OT_MaxDeviation = 1, 
	OT_MAX = 2, 
};
//Enum Engine.EImportanceLevel
enum class FEImportanceLevel : uint8_t
{
	IL_Off = 0, 
	IL_Lowest = 1, 
	IL_Low = 2, 
	IL_Normal = 3, 
	IL_High = 4, 
	IL_Highest = 5, 
	TEMP_BROKEN2 = 6, 
	EImportanceLevel_MAX = 7, 
};
//Enum Engine.ENormalMode
enum class FENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups = 0, 
	NM_RecalculateNormals = 1, 
	NM_RecalculateNormalsSmooth = 2, 
	NM_RecalculateNormalsHard = 3, 
	TEMP_BROKEN = 4, 
	ENormalMode_MAX = 5, 
};
//Enum EngineSettings.EThreePlayerSplitScreenType
enum class FEThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType::FavorTop = 0, 
	EThreePlayerSplitScreenType::FavorBottom = 1, 
	EThreePlayerSplitScreenType::EThreePlayerSplitScreenType_MAX = 2, 
};
//Enum EngineSettings.ETwoPlayerSplitScreenType
enum class FETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType::Horizontal = 0, 
	ETwoPlayerSplitScreenType::Vertical = 1, 
	ETwoPlayerSplitScreenType::ETwoPlayerSplitScreenType_MAX = 2, 
};
//Enum Engine.EIndoorOutdoorMask
enum class FEIndoorOutdoorMask : uint8_t
{
	IOM_NONE = 0, 
	IOM_INDOOR = 1, 
	IOM_OUTDOOR = 2, 
	IOM_BOTH = 3, 
	IOM_MAX = 4, 
};
//Enum Engine.EMeshBufferAccess
enum class FEMeshBufferAccess : uint8_t
{
	EMeshBufferAccess::Default = 0, 
	EMeshBufferAccess::ForceCPUAndGPU = 1, 
	EMeshBufferAccess::EMeshBufferAccess_MAX = 2, 
};
//Enum Engine.ESpawnActorCollisionHandlingMethod
enum class FESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod::Undefined = 0, 
	ESpawnActorCollisionHandlingMethod::AlwaysSpawn = 1, 
	ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn = 2, 
	ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding = 3, 
	ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding = 4, 
	ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod_MAX = 5, 
};
//Enum Engine.EConstraintFrame
enum class FEConstraintFrame : uint8_t
{
	EConstraintFrame::Frame1 = 0, 
	EConstraintFrame::Frame2 = 1, 
	EConstraintFrame::EConstraintFrame_MAX = 2, 
};
//Enum Engine.EAngularConstraintMotion
enum class FEAngularConstraintMotion : uint8_t
{
	ACM_Free = 0, 
	ACM_Limited = 1, 
	ACM_Locked = 2, 
	ACM_MAX = 3, 
};
//Enum Engine.EComponentSocketType
enum class FEComponentSocketType : uint8_t
{
	EComponentSocketType::Invalid = 0, 
	EComponentSocketType::Bone = 1, 
	EComponentSocketType::Socket = 2, 
	EComponentSocketType::EComponentSocketType_MAX = 3, 
};
//Enum Engine.EComponentMobility
enum class FEComponentMobility : uint8_t
{
	EComponentMobility::Static = 0, 
	EComponentMobility::Stationary = 1, 
	EComponentMobility::Movable = 2, 
	EComponentMobility::EComponentMobility_MAX = 3, 
};
//Enum Engine.EPhysicalSurface
enum class FEPhysicalSurface : uint8_t
{
	SurfaceType_Default = 0, 
	SurfaceType1 = 1, 
	SurfaceType2 = 2, 
	SurfaceType3 = 3, 
	SurfaceType4 = 4, 
	SurfaceType5 = 5, 
	SurfaceType6 = 6, 
	SurfaceType7 = 7, 
	SurfaceType8 = 8, 
	SurfaceType9 = 9, 
	SurfaceType10 = 10, 
	SurfaceType11 = 11, 
	SurfaceType12 = 12, 
	SurfaceType13 = 13, 
	SurfaceType14 = 14, 
	SurfaceType15 = 15, 
	SurfaceType16 = 16, 
	SurfaceType17 = 17, 
	SurfaceType18 = 18, 
	SurfaceType19 = 19, 
	SurfaceType20 = 20, 
	SurfaceType21 = 21, 
	SurfaceType22 = 22, 
	SurfaceType23 = 23, 
	SurfaceType24 = 24, 
	SurfaceType25 = 25, 
	SurfaceType26 = 26, 
	SurfaceType27 = 27, 
	SurfaceType28 = 28, 
	SurfaceType29 = 29, 
	SurfaceType30 = 30, 
	SurfaceType31 = 31, 
	SurfaceType32 = 32, 
	SurfaceType33 = 33, 
	SurfaceType34 = 34, 
	SurfaceType35 = 35, 
	SurfaceType36 = 36, 
	SurfaceType37 = 37, 
	SurfaceType38 = 38, 
	SurfaceType39 = 39, 
	SurfaceType40 = 40, 
	SurfaceType41 = 41, 
	SurfaceType42 = 42, 
	SurfaceType43 = 43, 
	SurfaceType44 = 44, 
	SurfaceType45 = 45, 
	SurfaceType46 = 46, 
	SurfaceType47 = 47, 
	SurfaceType48 = 48, 
	SurfaceType49 = 49, 
	SurfaceType50 = 50, 
	SurfaceType51 = 51, 
	SurfaceType52 = 52, 
	SurfaceType53 = 53, 
	SurfaceType54 = 54, 
	SurfaceType55 = 55, 
	SurfaceType56 = 56, 
	SurfaceType57 = 57, 
	SurfaceType58 = 58, 
	SurfaceType59 = 59, 
	SurfaceType60 = 60, 
	SurfaceType61 = 61, 
	SurfaceType62 = 62, 
	SurfaceType_Max = 63, 
	EPhysicalSurface_MAX = 64, 
};
//Enum Engine.EWalkableSlopeBehavior
enum class FEWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default = 0, 
	WalkableSlope_Increase = 1, 
	WalkableSlope_Decrease = 2, 
	WalkableSlope_Unwalkable = 3, 
	WalkableSlope_Max = 4, 
};
//Enum Engine.ERotatorQuantization
enum class FERotatorQuantization : uint8_t
{
	ERotatorQuantization::ByteComponents = 0, 
	ERotatorQuantization::ShortComponents = 1, 
	ERotatorQuantization::ERotatorQuantization_MAX = 2, 
};
//Enum Engine.EVectorQuantization
enum class FEVectorQuantization : uint8_t
{
	EVectorQuantization::RoundWholeNumber = 0, 
	EVectorQuantization::RoundOneDecimal = 1, 
	EVectorQuantization::RoundTwoDecimals = 2, 
	EVectorQuantization::EVectorQuantization_MAX = 3, 
};
//Enum Engine.EAutoPossessAI
enum class FEAutoPossessAI : uint8_t
{
	EAutoPossessAI::Disabled = 0, 
	EAutoPossessAI::PlacedInWorld = 1, 
	EAutoPossessAI::Spawned = 2, 
	EAutoPossessAI::PlacedInWorldOrSpawned = 3, 
	EAutoPossessAI::EAutoPossessAI_MAX = 4, 
};
//Enum Engine.EAutoReceiveInput
enum class FEAutoReceiveInput : uint8_t
{
	EAutoReceiveInput::Disabled = 0, 
	EAutoReceiveInput::Player0 = 1, 
	EAutoReceiveInput::Player1 = 2, 
	EAutoReceiveInput::Player2 = 3, 
	EAutoReceiveInput::Player3 = 4, 
	EAutoReceiveInput::Player4 = 5, 
	EAutoReceiveInput::Player5 = 6, 
	EAutoReceiveInput::Player6 = 7, 
	EAutoReceiveInput::Player7 = 8, 
	EAutoReceiveInput::EAutoReceiveInput_MAX = 9, 
};
//Enum Engine.ENetDormancy
enum class FENetDormancy : uint8_t
{
	DORM_Never = 0, 
	DORM_Awake = 1, 
	DORM_DormantAll = 2, 
	DORM_DormantPartial = 3, 
	DORM_Initial = 4, 
	DORN_MAX = 5, 
	ENetDormancy_MAX = 6, 
};
//Enum Engine.ENetRole
enum class FENetRole : uint8_t
{
	ROLE_None = 0, 
	ROLE_SimulatedProxy = 1, 
	ROLE_AutonomousProxy = 2, 
	ROLE_Authority = 3, 
	ROLE_MAX = 4, 
};
//Enum Engine.EUpdateRateShiftBucket
enum class FEUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket::ShiftBucket0 = 0, 
	EUpdateRateShiftBucket::ShiftBucket1 = 1, 
	EUpdateRateShiftBucket::ShiftBucket2 = 2, 
	EUpdateRateShiftBucket::ShiftBucket3 = 3, 
	EUpdateRateShiftBucket::ShiftBucket4 = 4, 
	EUpdateRateShiftBucket::ShiftBucket5 = 5, 
	EUpdateRateShiftBucket::ShiftBucketMax = 6, 
	EUpdateRateShiftBucket::EUpdateRateShiftBucket_MAX = 7, 
};
//Enum Engine.EShadowMapFlags
enum class FEShadowMapFlags : uint8_t
{
	SMF_None = 0, 
	SMF_Streamed = 1, 
	SMF_MAX = 2, 
};
//Enum Engine.ELightMapPaddingType
enum class FELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding = 0, 
	LMPT_PrePadding = 1, 
	LMPT_NoPadding = 2, 
	LMPT_MAX = 3, 
};
//Enum Engine.ECollisionEnabled
enum class FECollisionEnabled : uint8_t
{
	ECollisionEnabled::NoCollision = 0, 
	ECollisionEnabled::QueryOnly = 1, 
	ECollisionEnabled::PhysicsOnly = 2, 
	ECollisionEnabled::QueryAndPhysics = 3, 
	ECollisionEnabled::ECollisionEnabled_MAX = 4, 
};
//Enum Engine.ETimelineSigType
enum class FETimelineSigType : uint8_t
{
	ETS_EventSignature = 0, 
	ETS_FloatSignature = 1, 
	ETS_VectorSignature = 2, 
	ETS_LinearColorSignature = 3, 
	ETS_InvalidSignature = 4, 
	ETS_MAX = 5, 
};
//Enum Engine.ESleepFamily
enum class FESleepFamily : uint8_t
{
	ESleepFamily::Normal = 0, 
	ESleepFamily::Sensitive = 1, 
	ESleepFamily::Custom = 2, 
	ESleepFamily::ESleepFamily_MAX = 3, 
};
//Enum Engine.ERadialImpulseFalloff
enum class FERadialImpulseFalloff : uint8_t
{
	RIF_Constant = 0, 
	RIF_Linear = 1, 
	RIF_MAX = 2, 
};
//Enum Engine.EInputConsumeOptions
enum class FEInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll = 0, 
	ICO_ConsumeBoundKeys = 1, 
	ICO_ConsumeNone = 2, 
	ICO_MAX = 3, 
};
//Enum Engine.EFilterInterpolationType
enum class FEFilterInterpolationType : uint8_t
{
	BSIT_Average = 0, 
	BSIT_Linear = 1, 
	BSIT_Cubic = 2, 
	BSIT_MAX = 3, 
};
//Enum Engine.ECollisionResponse
enum class FECollisionResponse : uint8_t
{
	ECR_Ignore = 0, 
	ECR_Overlap = 1, 
	ECR_Block = 2, 
	ECR_MAX = 3, 
};
//Enum Engine.EPhysicsSceneType
enum class FEPhysicsSceneType : uint8_t
{
	PST_Sync = 0, 
	PST_Cloth = 1, 
	PST_Async = 2, 
	PST_MAX = 3, 
};
//Enum Engine.EOverlapFilterOption
enum class FEOverlapFilterOption : uint8_t
{
	OverlapFilter_All = 0, 
	OverlapFilter_DynamicOnly = 1, 
	OverlapFilter_StaticOnly = 2, 
	OverlapFilter_MAX = 3, 
};
//Enum Engine.ECollisionChannel
enum class FECollisionChannel : uint8_t
{
	ECC_WorldStatic = 0, 
	ECC_WorldDynamic = 1, 
	ECC_Pawn = 2, 
	ECC_Visibility = 3, 
	ECC_Camera = 4, 
	ECC_PhysicsBody = 5, 
	ECC_Vehicle = 6, 
	ECC_Destructible = 7, 
	ECC_EngineTraceChannel1 = 8, 
	ECC_EngineTraceChannel2 = 9, 
	ECC_EngineTraceChannel3 = 10, 
	ECC_EngineTraceChannel4 = 11, 
	ECC_EngineTraceChannel5 = 12, 
	ECC_EngineTraceChannel6 = 13, 
	ECC_GameTraceChannel1 = 14, 
	ECC_GameTraceChannel2 = 15, 
	ECC_GameTraceChannel3 = 16, 
	ECC_GameTraceChannel4 = 17, 
	ECC_GameTraceChannel5 = 18, 
	ECC_GameTraceChannel6 = 19, 
	ECC_GameTraceChannel7 = 20, 
	ECC_GameTraceChannel8 = 21, 
	ECC_GameTraceChannel9 = 22, 
	ECC_GameTraceChannel10 = 23, 
	ECC_GameTraceChannel11 = 24, 
	ECC_GameTraceChannel12 = 25, 
	ECC_GameTraceChannel13 = 26, 
	ECC_GameTraceChannel14 = 27, 
	ECC_GameTraceChannel15 = 28, 
	ECC_GameTraceChannel16 = 29, 
	ECC_GameTraceChannel17 = 30, 
	ECC_GameTraceChannel18 = 31, 
	ECC_OverlapAll_Deprecated = 32, 
	ECC_MAX = 33, 
};
//Enum Engine.ENetworkSmoothingMode
enum class FENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode::Disabled = 0, 
	ENetworkSmoothingMode::Linear = 1, 
	ENetworkSmoothingMode::Exponential = 2, 
	ENetworkSmoothingMode::Replay = 3, 
	ENetworkSmoothingMode::RotationOnly = 4, 
	ENetworkSmoothingMode::ENetworkSmoothingMode_MAX = 5, 
};
//Enum Engine.ETriangleSortAxis
enum class FETriangleSortAxis : uint8_t
{
	TSA_X_Axis = 0, 
	TSA_Y_Axis = 1, 
	TSA_Z_Axis = 2, 
	TSA_MAX = 3, 
};
//Enum Engine.ETriangleSortOption
enum class FETriangleSortOption : uint8_t
{
	TRISORT_None = 0, 
	TRISORT_CenterRadialDistance = 1, 
	TRISORT_Random = 2, 
	TRISORT_MergeContiguous = 3, 
	TRISORT_Custom = 4, 
	TRISORT_CustomLeftRight = 5, 
	TRISORT_MAX = 6, 
};
//Enum Engine.ELightingBuildQuality
enum class FELightingBuildQuality : uint8_t
{
	Quality_Preview = 0, 
	Quality_Medium = 1, 
	Quality_High = 2, 
	Quality_Production = 3, 
	Quality_MAX = 4, 
};
//Enum Engine.EMaterialSamplerType
enum class FEMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color = 0, 
	SAMPLERTYPE_Grayscale = 1, 
	SAMPLERTYPE_Alpha = 2, 
	SAMPLERTYPE_Normal = 3, 
	SAMPLERTYPE_Masks = 4, 
	SAMPLERTYPE_DistanceFieldFont = 5, 
	SAMPLERTYPE_LinearColor = 6, 
	SAMPLERTYPE_LinearGrayscale = 7, 
	SAMPLERTYPE_MAX = 8, 
};
//Enum Engine.EMaterialTessellationMode
enum class FEMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation = 0, 
	MTM_FlatTessellation = 1, 
	MTM_PNTriangles = 2, 
	MTM_MAX = 3, 
};
//Enum Engine.EMaterialShadingModel
enum class FEMaterialShadingModel : uint8_t
{
	MSM_Unlit = 0, 
	MSM_DefaultLit = 1, 
	MSM_Subsurface = 2, 
	MSM_PreintegratedSkin = 3, 
	MSM_ClearCoat = 4, 
	MSM_SubsurfaceProfile = 5, 
	MSM_TwoSidedFoliage = 6, 
	MSM_Hair = 7, 
	MSM_Cloth = 8, 
	MSM_Eye = 9, 
	MSM_MAX = 10, 
};
//Enum Engine.EParticleCollisionMode
enum class FEParticleCollisionMode : uint8_t
{
	EParticleCollisionMode::SceneDepth = 0, 
	EParticleCollisionMode::DistanceField = 1, 
	EParticleCollisionMode::HeightBuffer = 2, 
	EParticleCollisionMode::EParticleCollisionMode_MAX = 3, 
};
//Enum Engine.ETrailWidthMode
enum class FETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre = 0, 
	ETrailWidthMode_FromFirst = 1, 
	ETrailWidthMode_FromSecond = 2, 
	ETrailWidthMode_MAX = 3, 
};
//Enum Engine.EGBufferFormat
enum class FEGBufferFormat : uint8_t
{
	EGBufferFormat::Force8BitsPerChannel = 0, 
	EGBufferFormat::Default = 1, 
	EGBufferFormat::HighPrecisionNormals = 2, 
	EGBufferFormat::Force16BitsPerChannel = 3, 
	EGBufferFormat::EGBufferFormat_MAX = 4, 
};
//Enum Engine.ESceneCaptureCompositeMode
enum class FESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite = 0, 
	SCCM_Additive = 1, 
	SCCM_Composite = 2, 
	SCCM_MAX = 3, 
};
//Enum Engine.ESceneCaptureSource
enum class FESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR = 0, 
	SCS_SceneColorHDRNoAlpha = 1, 
	SCS_FinalColorLDR = 2, 
	SCS_SceneColorSceneDepth = 3, 
	SCS_SceneDepth = 4, 
	SCS_DeviceDepth = 5, 
	SCS_Normal = 6, 
	SCS_BaseColor = 7, 
	SCS_BRO_SuperSampling = 8, 
	SCS_BRO_Masked = 9, 
	SCS_MAX = 10, 
};
//Enum Engine.ETranslucentSortPolicy
enum class FETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy::SortByDistance = 0, 
	ETranslucentSortPolicy::SortByProjectedZ = 1, 
	ETranslucentSortPolicy::SortAlongAxis = 2, 
	ETranslucentSortPolicy::ETranslucentSortPolicy_MAX = 3, 
};
//Enum Engine.ERefractionMode
enum class FERefractionMode : uint8_t
{
	RM_IndexOfRefraction = 0, 
	RM_PixelNormalOffset = 1, 
	RM_MAX = 2, 
};
//Enum Engine.ETranslucencyLightingMode
enum class FETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional = 0, 
	TLM_VolumetricDirectional = 1, 
	TLM_VolumetricPerVertexNonDirectional = 2, 
	TLM_VolumetricPerVertexDirectional = 3, 
	TLM_Surface = 4, 
	TLM_SurfacePerPixelLighting = 5, 
	TLM_MAX = 6, 
};
//Enum Engine.ESamplerSourceMode
enum class FESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset = 0, 
	SSM_Wrap_WorldGroupSettings = 1, 
	SSM_Clamp_WorldGroupSettings = 2, 
	SSM_MAX = 3, 
};
//Enum Engine.EBlendMode
enum class FEBlendMode : uint8_t
{
	BLEND_Opaque = 0, 
	BLEND_Masked = 1, 
	BLEND_Translucent = 2, 
	BLEND_Additive = 3, 
	BLEND_Modulate = 4, 
	BLEND_AlphaComposite = 5, 
	BLEND_MAX = 6, 
};
//Enum Engine.EOcclusionCombineMode
enum class FEOcclusionCombineMode : uint8_t
{
	OCM_Minimum = 0, 
	OCM_Multiply = 1, 
	OCM_MAX = 2, 
};
//Enum Engine.EIndirectLightingCacheQuality
enum class FEIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off = 0, 
	ILCQ_Point = 1, 
	ILCQ_Volume = 2, 
	ILCQ_MAX = 3, 
};
//Enum Engine.ESceneDepthPriorityGroup
enum class FESceneDepthPriorityGroup : uint8_t
{
	SDPG_World = 0, 
	SDPG_Foreground = 1, 
	SDPG_MAX = 2, 
};
//Enum Engine.EAttachLocation
enum class FEAttachLocation : uint8_t
{
	EAttachLocation::KeepRelativeOffset = 0, 
	EAttachLocation::KeepWorldPosition = 1, 
	EAttachLocation::SnapToTarget = 2, 
	EAttachLocation::SnapToTargetIncludingScale = 3, 
	EAttachLocation::EAttachLocation_MAX = 4, 
};
//Enum Engine.EDetachmentRule
enum class FEDetachmentRule : uint8_t
{
	EDetachmentRule::KeepRelative = 0, 
	EDetachmentRule::KeepWorld = 1, 
	EDetachmentRule::EDetachmentRule_MAX = 2, 
};
//Enum Engine.EAttachmentRule
enum class FEAttachmentRule : uint8_t
{
	EAttachmentRule::KeepRelative = 0, 
	EAttachmentRule::KeepWorld = 1, 
	EAttachmentRule::SnapToTarget = 2, 
	EAttachmentRule::EAttachmentRule_MAX = 3, 
};
//Enum Engine.EActorMetricsType
enum class FEActorMetricsType : uint8_t
{
	METRICS_VERTS = 0, 
	METRICS_TRIS = 1, 
	METRICS_SECTIONS = 2, 
	METRICS_MAX = 3, 
};
//Enum Engine.EAspectRatioAxisConstraint
enum class FEAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV = 0, 
	AspectRatio_MaintainXFOV = 1, 
	AspectRatio_MajorAxisFOV = 2, 
	AspectRatio_MAX = 3, 
};
//Enum Slate.ETableViewMode
enum class FETableViewMode : uint8_t
{
	ETableViewMode::List = 0, 
	ETableViewMode::Tile = 1, 
	ETableViewMode::Tree = 2, 
	ETableViewMode::ETableViewMode_MAX = 3, 
};
//Enum Slate.ESelectionMode
enum class FESelectionMode : uint8_t
{
	ESelectionMode::None = 0, 
	ESelectionMode::Single = 1, 
	ESelectionMode::SingleToggle = 2, 
	ESelectionMode::Multi = 3, 
	ESelectionMode::ESelectionMode_MAX = 4, 
};
//Enum Slate.EStretch
enum class FEStretch : uint8_t
{
	EStretch::None = 0, 
	EStretch::Fill = 1, 
	EStretch::ScaleToFit = 2, 
	EStretch::ScaleToFitX = 3, 
	EStretch::ScaleToFitY = 4, 
	EStretch::ScaleToFill = 5, 
	EStretch::ScaleBySafeZone = 6, 
	EStretch::UserSpecified = 7, 
	EStretch::EStretch_MAX = 8, 
};
//Enum Slate.EStretchDirection
enum class FEStretchDirection : uint8_t
{
	EStretchDirection::Both = 0, 
	EStretchDirection::DownOnly = 1, 
	EStretchDirection::UpOnly = 2, 
	EStretchDirection::EStretchDirection_MAX = 3, 
};
//Enum Slate.EProgressBarFillType
enum class FEProgressBarFillType : uint8_t
{
	EProgressBarFillType::LeftToRight = 0, 
	EProgressBarFillType::RightToLeft = 1, 
	EProgressBarFillType::FillFromCenter = 2, 
	EProgressBarFillType::TopToBottom = 3, 
	EProgressBarFillType::BottomToTop = 4, 
	EProgressBarFillType::EProgressBarFillType_MAX = 5, 
};
//Enum TslGame.EPreoccupiedTeamType
enum class FEPreoccupiedTeamType : uint8_t
{
	EPreoccupiedTeamType::NEUTRAL = 0, 
	EPreoccupiedTeamType::RED = 1, 
	EPreoccupiedTeamType::BLUE = 2, 
	EPreoccupiedTeamType::EPreoccupiedTeamType_MAX = 3, 
};
//Enum TslGame.ECaptureState
enum class FECaptureState : uint8_t
{
	ECaptureState::ENeutural = 0, 
	ECaptureState::EConfusion = 1, 
	ECaptureState::ECaptured = 2, 
	ECaptureState::ECaptureState_MAX = 3, 
};
//Enum TslGame.EPopupStyle
enum class FEPopupStyle : uint8_t
{
	EPopupStyle::Ok_Cancel = 0, 
	EPopupStyle::Ok = 1, 
	EPopupStyle::Yes_No = 2, 
	EPopupStyle::EPopupStyle_MAX = 3, 
};
//Enum TslGame.EBlueZoneShape
enum class FEBlueZoneShape : uint8_t
{
	EBlueZoneShape::None = 0, 
	EBlueZoneShape::Circle = 1, 
	EBlueZoneShape::Rectangle = 2, 
	EBlueZoneShape::EBlueZoneShape_MAX = 3, 
};
//Enum TslGame.ERespawnType
enum class FERespawnType : uint8_t
{
	ERespawnType::Airborne = 0, 
	ERespawnType::DeadPoint = 1, 
	ERespawnType::StartPoint = 2, 
	ERespawnType::Selectable = 3, 
	ERespawnType::ERespawnType_MAX = 4, 
};
//Enum TslGame.EPlatoonTeam
enum class FEPlatoonTeam : uint8_t
{
	EPlatoonTeam::None = 0, 
	EPlatoonTeam::Blue = 1, 
	EPlatoonTeam::Red = 2, 
	EPlatoonTeam::EPlatoonTeam_MAX = 3, 
};
//Enum TslGame.EAutoRecoveryType
enum class FEAutoRecoveryType : uint8_t
{
	EAutoRecoveryType::None = 0, 
	EAutoRecoveryType::Human = 1, 
	EAutoRecoveryType::Zombie = 2, 
	EAutoRecoveryType::HumanAndZombie = 3, 
	EAutoRecoveryType::EAutoRecoveryType_MAX = 4, 
};
//Enum TslGame.EZombieVirusType
enum class FEZombieVirusType : uint8_t
{
	EZombieVirusType::None = 0, 
	EZombieVirusType::Attacked = 1, 
	EZombieVirusType::All = 2, 
	EZombieVirusType::EZombieVirusType_MAX = 3, 
};
//Enum TslGame.ERadioMessageInteractionType
enum class FERadioMessageInteractionType : uint8_t
{
	ERadioMessageInteractionType::DroppedItem = 0, 
	ERadioMessageInteractionType::Vehicle = 1, 
	ERadioMessageInteractionType::CarepackageOrDeadbox = 2, 
	ERadioMessageInteractionType::ERadioMessageInteractionType_MAX = 3, 
};
//Enum TslGame.ERadioMessageCategory
enum class FERadioMessageCategory : uint8_t
{
	ERadioMessageCategory::Affirmative = 0, 
	ERadioMessageCategory::ThankYou = 1, 
	ERadioMessageCategory::NeedMed = 2, 
	ERadioMessageCategory::Negative = 3, 
	ERadioMessageCategory::Sorry = 4, 
	ERadioMessageCategory::NeedAmmo = 5, 
	ERadioMessageCategory::EnemySpotted = 6, 
	ERadioMessageCategory::ItemSpotted = 7, 
	ERadioMessageCategory::Ping = 8, 
	ERadioMessageCategory::HelpMe = 9, 
	ERadioMessageCategory::WayPoint = 10, 
	ERadioMessageCategory::Max = 11, 
	ERadioMessageCategory::ERadioMessageCategory_MAX = 12, 
};
//Enum TslGame.EEquippedWeaponRTPC
enum class FEEquippedWeaponRTPC : uint8_t
{
	EEquippedWeaponRTPC::None = 0, 
	EEquippedWeaponRTPC::HandBomb_Bottle = 1, 
	EEquippedWeaponRTPC::HandBomb_Metal = 2, 
	EEquippedWeaponRTPC::Melee = 3, 
	EEquippedWeaponRTPC::Pistol = 4, 
	EEquippedWeaponRTPC::SMG = 5, 
	EEquippedWeaponRTPC::AR = 6, 
	EEquippedWeaponRTPC::SR = 7, 
	EEquippedWeaponRTPC::Max = 8, 
	EEquippedWeaponRTPC::EEquippedWeaponRTPC_MAX = 9, 
};
//Enum TslGame.EForceRefreshDummy
enum class FEForceRefreshDummy : uint8_t
{
	EForceRefreshDummy::Refresh1 = 0, 
	EForceRefreshDummy::Refresh2 = 1, 
	EForceRefreshDummy::EForceRefreshDummy_MAX = 2, 
};
//Enum TslGame.EViewModeActorCenterPosition
enum class FEViewModeActorCenterPosition : uint8_t
{
	EViewModeActorCenterPosition::None = 0, 
	EViewModeActorCenterPosition::Center = 1, 
	EViewModeActorCenterPosition::Bottom = 2, 
	EViewModeActorCenterPosition::EViewModeActorCenterPosition_MAX = 3, 
};
//Enum TslGame.EViewModeCategory
enum class FEViewModeCategory : uint8_t
{
	EViewModeCategory::None = 0, 
	EViewModeCategory::Weapon = 1, 
	EViewModeCategory::Parachute = 2, 
	EViewModeCategory::Character = 3, 
	EViewModeCategory::Vehicle = 4, 
	EViewModeCategory::EViewModeCategory_MAX = 5, 
};
//Enum TslGame.ESystemMenuButtonType
enum class FESystemMenuButtonType : uint8_t
{
	ESystemMenuButtonType::RESUME = 0, 
	ESystemMenuButtonType::SETTINGS = 1, 
	ESystemMenuButtonType::TEAM_MANAGEMENT = 2, 
	ESystemMenuButtonType::KEY_GUIDE = 3, 
	ESystemMenuButtonType::RESTART_LOBBY = 4, 
	ESystemMenuButtonType::LEAVE_MATCH = 5, 
	ESystemMenuButtonType::EXIT_TO_DESKTOP = 6, 
	ESystemMenuButtonType::GM_COMMAND_INGAME_HELPER = 7, 
	ESystemMenuButtonType::ESystemMenuButtonType_MAX = 8, 
};
//Enum TslGame.ERankGuideType
enum class FERankGuideType : uint8_t
{
	ERankGuideType::ForElementaryRank = 0, 
	ERankGuideType::ForExpertRank = 1, 
	ERankGuideType::ERankGuideType_MAX = 2, 
};
//Enum TslGame.EUserRank
enum class FEUserRank : uint8_t
{
	EUserRank::ElementaryRank = 0, 
	EUserRank::IntermediateRank = 1, 
	EUserRank::HighRank = 2, 
	EUserRank::ExpertRank = 3, 
	EUserRank::EUserRank_MAX = 4, 
};
//Enum TslGame.EProjectileParticleClass
enum class FEProjectileParticleClass : uint8_t
{
	EProjectileParticleClass::PPC_None = 0, 
	EProjectileParticleClass::PPC_Frag = 1, 
	EProjectileParticleClass::PPC_Flash = 2, 
	EProjectileParticleClass::PPC_Smoke = 3, 
	EProjectileParticleClass::PPC_Molotov = 4, 
	EProjectileParticleClass::PPC_Other = 5, 
	EProjectileParticleClass::PPC_MAX = 6, 
};
//Enum TslGame.EReticleType
enum class FEReticleType : uint8_t
{
	EReticleType::RedDot = 0, 
	EReticleType::HoloSight = 1, 
	EReticleType::Scope2x = 2, 
	EReticleType::Scope3x = 3, 
	EReticleType::Scope4x = 4, 
	EReticleType::Scope6x = 5, 
	EReticleType::Scope8x = 6, 
	EReticleType::EReticleType_MAX = 7, 
};
//Enum TslGame.EKeyHintType
enum class FEKeyHintType : uint8_t
{
	EKeyHintType::Menu = 0, 
	EKeyHintType::Parachuting = 1, 
	EKeyHintType::Character = 2, 
	EKeyHintType::Driver = 3, 
	EKeyHintType::Rider = 4, 
	EKeyHintType::WeaponUse = 5, 
	EKeyHintType::WeaponChange = 6, 
	EKeyHintType::ADS = 7, 
	EKeyHintType::Aim = 8, 
	EKeyHintType::ADS_8x15x = 9, 
	EKeyHintType::ADS_6x = 10, 
	EKeyHintType::ADS_1x2x3x = 11, 
	EKeyHintType::ADS_CantedSight = 12, 
	EKeyHintType::ADS_IronSight = 13, 
	EKeyHintType::Throwing = 14, 
	EKeyHintType::Heal = 15, 
	EKeyHintType::Swimming = 16, 
	EKeyHintType::TeamSpectating = 17, 
	EKeyHintType::KillerSpectating = 18, 
	EKeyHintType::WorldMap = 19, 
	EKeyHintType::None = 20, 
	EKeyHintType::FreefallNew = 21, 
	EKeyHintType::ParachuteNew = 22, 
	EKeyHintType::SpikeTrap = 23, 
	EKeyHintType::MotorGlider = 24, 
	EKeyHintType::Other = 25, 
	EKeyHintType::EKeyHintType_MAX = 26, 
};
//Enum TslGame.EObserverOutlineType
enum class FEObserverOutlineType : uint8_t
{
	SpectatedCharacter = 0, 
	SpectatedCharacterTeam = 1, 
	SpectatedCharacterEnemy = 2, 
	WithoutSpectatedCharacter = 3, 
	WithoutSpectatedTeamCharacter = 4, 
	InteractionFocusingColor = 5, 
	SandboxOutline = 6, 
	EObserverOutlineType_MAX = 7, 
};
//Enum TslGame.EOptionExposeType
enum class FEOptionExposeType : uint8_t
{
	EOptionExposeType::All = 0, 
	EOptionExposeType::PcOnly = 1, 
	EOptionExposeType::XBoxOnly = 2, 
	EOptionExposeType::PS4Only = 3, 
	EOptionExposeType::PcAndXBox = 4, 
	EOptionExposeType::PcAndPS4 = 5, 
	EOptionExposeType::XBoxAndPS4 = 6, 
	EOptionExposeType::None = 7, 
	EOptionExposeType::EOptionExposeType_MAX = 8, 
};
//Enum TslGame.EWeatherChange
enum class FEWeatherChange : uint8_t
{
	EWeatherChange::NoChange = 0, 
	EWeatherChange::Rainy = 1, 
	EWeatherChange::Foggy = 2, 
	EWeatherChange::EWeatherChange_MAX = 3, 
};
//Enum TslGame.EMinimapColorType
enum class FEMinimapColorType : uint8_t
{
	EMinimapColorType::DESATURATED = 0, 
	EMinimapColorType::SATURATED = 1, 
	EMinimapColorType::EMinimapColorType_MAX = 2, 
};
//Enum TslGame.EDamageZoneType
enum class FEDamageZoneType : uint8_t
{
	EDamageZoneType::Head = 0, 
	EDamageZoneType::Torso = 1, 
	EDamageZoneType::Arm = 2, 
	EDamageZoneType::Pelvis = 3, 
	EDamageZoneType::Leg = 4, 
	EDamageZoneType::EDamageZoneType_MAX = 5, 
};
//Enum TslGame.ETslWidgetCreationMethod
enum class FETslWidgetCreationMethod : uint8_t
{
	ETslWidgetCreationMethod::CreateOnInit = 0, 
	ETslWidgetCreationMethod::OnDemand = 1, 
	ETslWidgetCreationMethod::OnDemandOnOnlyPC = 2, 
	ETslWidgetCreationMethod::OnDemandOnOnlyConsole = 3, 
	ETslWidgetCreationMethod::ETslWidgetCreationMethod_MAX = 4, 
};
//Enum TslGame.ERedZoneGenerateType
enum class FERedZoneGenerateType : uint8_t
{
	ERedZoneGenerateType::None = 0, 
	ERedZoneGenerateType::Uniform_Distribution = 1, 
	ERedZoneGenerateType::Ringtaw = 2, 
	ERedZoneGenerateType::Outsider = 3, 
	ERedZoneGenerateType::RingtawOrOutsider = 4, 
	ERedZoneGenerateType::ERedZoneGenerateType_MAX = 5, 
};
//Enum TslGame.ETslHudType
enum class FETslHudType : uint8_t
{
	ETslHudType::None = 0, 
	ETslHudType::CharacterHud = 1, 
	ETslHudType::SpectatorHud = 2, 
	ETslHudType::ObserverHud = 3, 
	ETslHudType::ReplayHud = 4, 
	ETslHudType::LeagueReplayHud = 5, 
	ETslHudType::ETslHudType_MAX = 6, 
};
//Enum TslGame.ETargetAnimDynamicsType
enum class FETargetAnimDynamicsType : uint8_t
{
	ETargetAnimDynamicsType::None = 0, 
	ETargetAnimDynamicsType::Hair = 1, 
	ETargetAnimDynamicsType::Coat = 2, 
	ETargetAnimDynamicsType::ETargetAnimDynamicsType_MAX = 3, 
};
//Enum TslGame.EAnimatableCustomizableTypes
enum class FEAnimatableCustomizableTypes : uint8_t
{
	EAnimatableCustomizableTypes::Hair = 0, 
	EAnimatableCustomizableTypes::Outer = 1, 
	EAnimatableCustomizableTypes::Legs = 2, 
	EAnimatableCustomizableTypes::Torso = 3, 
	EAnimatableCustomizableTypes::Head = 4, 
	EAnimatableCustomizableTypes::Mask = 5, 
	EAnimatableCustomizableTypes::Backpack = 6, 
	EAnimatableCustomizableTypes::Eyes = 7, 
	EAnimatableCustomizableTypes::TorsoArmor = 8, 
	EAnimatableCustomizableTypes::Hands = 9, 
	EAnimatableCustomizableTypes::Feet = 10, 
	EAnimatableCustomizableTypes::Belt = 11, 
	EAnimatableCustomizableTypes::Face = 12, 
	EAnimatableCustomizableTypes::EAnimatableCustomizableTypes_MAX = 13, 
};
//Enum TslGame.EGameEndState
enum class FEGameEndState : uint8_t
{
	EGameEndState::None = 0, 
	EGameEndState::CereMony = 1, 
	EGameEndState::Cinematic = 2, 
	EGameEndState::MatchFinish = 3, 
	EGameEndState::EGameEndState_MAX = 4, 
};
//Enum TslGame.ELobbyBlurChangingStates
enum class FELobbyBlurChangingStates : uint8_t
{
	ELobbyBlurChangingStates::AlwaysOff = 0, 
	ELobbyBlurChangingStates::AlwaysOn = 1, 
	ELobbyBlurChangingStates::ELobbyBlurChangingStates_MAX = 2, 
};
//Enum TslGame.ELobbyCameraStates
enum class FELobbyCameraStates : uint8_t
{
	ELobbyCameraStates::XBox_Home = 0, 
	ELobbyCameraStates::Main = 1, 
	ELobbyCameraStates::Main = 2, 
	ELobbyCameraStates::Menu = 3, 
	ELobbyCameraStates::Custom = 4, 
	ELobbyCameraStates::Custom = 5, 
	ELobbyCameraStates::EventPass_Milestone = 6, 
	ELobbyCameraStates::EventPass_Milestone = 7, 
	ELobbyCameraStates::EventPass_Missions = 8, 
	ELobbyCameraStates::ViewMode_Character = 9, 
	ELobbyCameraStates::ViewMode_Weapon = 10, 
	ELobbyCameraStates::ViewMode_Parachute = 11, 
	ELobbyCameraStates::EventPass_Milestone_0_Particle = 12, 
	ELobbyCameraStates::None = 13, 
	ELobbyCameraStates::ELobbyCameraStates_MAX = 14, 
};
//Enum TslGame.EUiShowType
enum class FEUiShowType : uint8_t
{
	EUiShowType::AlwaysShow = 0, 
	EUiShowType::TpsOnlyShow = 1, 
	EUiShowType::FpsOnlyShow = 2, 
	EUiShowType::AlwaysHide = 3, 
	EUiShowType::EUiShowType_MAX = 4, 
};
//Enum TslGame.EParachuteCutoffState
enum class FEParachuteCutoffState : uint8_t
{
	EParachuteCutoffState::Cutoff_None = 0, 
	EParachuteCutoffState::Cutoff_Manual = 1, 
	EParachuteCutoffState::Cutoff_Automatic = 2, 
	EParachuteCutoffState::Cutoff_Ready = 3, 
	EParachuteCutoffState::Cutoff_MAX = 4, 
};
//Enum TslGame.EGamepadInputResponseTypes
enum class FEGamepadInputResponseTypes : uint8_t
{
	EGamepadInputResponseTypes::Pressed = 0, 
	EGamepadInputResponseTypes::Released = 1, 
	EGamepadInputResponseTypes::Tap = 2, 
	EGamepadInputResponseTypes::Hold = 3, 
	EGamepadInputResponseTypes::DoubleTap = 4, 
	EGamepadInputResponseTypes::EGamepadInputResponseTypes_MAX = 5, 
};
//Enum TslGame.EGamepadInputCombinationTypes
enum class FEGamepadInputCombinationTypes : uint8_t
{
	EGamepadInputCombinationTypes::Plus = 0, 
	EGamepadInputCombinationTypes::Slash = 1, 
	EGamepadInputCombinationTypes::EGamepadInputCombinationTypes_MAX = 2, 
};
//Enum TslGame.ERadioMessagePresets
enum class FERadioMessagePresets : uint8_t
{
	ERadioMessagePresets::Preset1 = 0, 
	ERadioMessagePresets::Preset2 = 1, 
	ERadioMessagePresets::ERadioMessagePresets_MAX = 2, 
};
//Enum TslGame.EGamepadPresets
enum class FEGamepadPresets : uint8_t
{
	EGamepadPresets::ControllerTypeA = 0, 
	EGamepadPresets::ControllerTypeB = 1, 
	EGamepadPresets::ControllerTypeC = 2, 
	EGamepadPresets::Max = 3, 
	EGamepadPresets::EGamepadPresets_MAX = 4, 
};
//Enum TslGame.EKeyGuideShowCases
enum class FEKeyGuideShowCases : uint8_t
{
	EKeyGuideShowCases::Reload = 0, 
	EKeyGuideShowCases::ExitVehicle = 1, 
	EKeyGuideShowCases::EKeyGuideShowCases_MAX = 2, 
};
//Enum TslGame.ETslInputModes
enum class FETslInputModes : uint8_t
{
	ETslInputModes::Toggle = 0, 
	ETslInputModes::Hold = 1, 
	ETslInputModes::DoubleTap = 2, 
	ETslInputModes::ETslInputModes_MAX = 3, 
};
//Enum TslGame.EGameplayClientReplay
enum class FEGameplayClientReplay : uint8_t
{
	EGameplayClientReplay::Replay = 0, 
	EGameplayClientReplay::Killcam = 1, 
	EGameplayClientReplay::EGameplayClientReplay_MAX = 2, 
};
//Enum TslGame.EGameplayFunctionalities
enum class FEGameplayFunctionalities : uint8_t
{
	EGameplayFunctionalities::FreeLookInterp = 0, 
	EGameplayFunctionalities::EGameplayFunctionalities_MAX = 1, 
};
//Enum TslGame.EInputModeSettingActions
enum class FEInputModeSettingActions : uint8_t
{
	EInputModeSettingActions::Crouch = 0, 
	EInputModeSettingActions::Prone = 1, 
	EInputModeSettingActions::Walk = 2, 
	EInputModeSettingActions::Sprint = 3, 
	EInputModeSettingActions::HoldRotation = 4, 
	EInputModeSettingActions::HoldBreath = 5, 
	EInputModeSettingActions::Peek = 6, 
	EInputModeSettingActions::Map = 7, 
	EInputModeSettingActions::ADS = 8, 
	EInputModeSettingActions::Aim = 9, 
	EInputModeSettingActions::HoldAngled = 10, 
	EInputModeSettingActions::EInputModeSettingActions_MAX = 11, 
};
//Enum TslGame.EKeyBindingSlot
enum class FEKeyBindingSlot : uint8_t
{
	EKeyBindingSlot::FirstKey = 0, 
	EKeyBindingSlot::SecondKey = 1, 
	EKeyBindingSlot::EKeyBindingSlot_MAX = 2, 
};
//Enum TslGame.EReportDetailCauseType
enum class FEReportDetailCauseType : uint8_t
{
	EReportDetailCauseType::AutoAim = 0, 
	EReportDetailCauseType::NoRecoil = 1, 
	EReportDetailCauseType::EspOrPenetration = 2, 
	EReportDetailCauseType::Speedhack = 3, 
	EReportDetailCauseType::EReportDetailCauseType_MAX = 4, 
};
//Enum TslGame.EReportedSessionType
enum class FEReportedSessionType : uint8_t
{
	EReportedSessionType::PublicOrCustomGame = 0, 
	EReportedSessionType::Killcam = 1, 
	EReportedSessionType::Replay = 2, 
	EReportedSessionType::EReportedSessionType_MAX = 3, 
};
//Enum TslGame.EReportCause
enum class FEReportCause : uint8_t
{
	EReportCause::Default = 0, 
	EReportCause::Cheat = 1, 
	EReportCause::TeamKill = 2, 
	EReportCause::Teaming = 3, 
	EReportCause::InappropriateID = 4, 
	EReportCause::VerbalHarassment = 5, 
	EReportCause::Griefing = 6, 
	EReportCause::EReportCause_MAX = 7, 
};
//Enum TslGame.ItemPackageType
enum class FItemPackageType : uint8_t
{
	ItemPackageType::RootBox = 0, 
	ItemPackageType::CarePackage = 1, 
	ItemPackageType::DroppedPackage = 2, 
	ItemPackageType::DroppedEventPackage = 3, 
	ItemPackageType::ItemPackageType_MAX = 4, 
};
//Enum TslGame.ECarePackageIconType
enum class FECarePackageIconType : uint8_t
{
	ECarePackageIconType::Normal = 0, 
	ECarePackageIconType::Flying = 1, 
	ECarePackageIconType::Opened = 2, 
	ECarePackageIconType::ECarePackageIconType_MAX = 3, 
};
//Enum TslGame.ECharacterIconType
enum class FECharacterIconType : uint8_t
{
	ECharacterIconType::Normal = 0, 
	ECharacterIconType::Vehicle = 1, 
	ECharacterIconType::Parachute = 2, 
	ECharacterIconType::Die = 3, 
	ECharacterIconType::Groggy = 4, 
	ECharacterIconType::Quitter = 5, 
	ECharacterIconType::Observer = 6, 
	ECharacterIconType::Aircraft = 7, 
	ECharacterIconType::ECharacterIconType_MAX = 8, 
};
//Enum TslGame.EReportUiType
enum class FEReportUiType : uint8_t
{
	EReportUiType::Normal = 0, 
	EReportUiType::Respawn = 1, 
	EReportUiType::EReportUiType_MAX = 2, 
};
//Enum TslGame.EZombieRuleType
enum class FEZombieRuleType : uint8_t
{
	EZombieRuleType::None = 0, 
	EZombieRuleType::BattleRoyale = 1, 
	EZombieRuleType::Survival = 2, 
	EZombieRuleType::Elimination = 3, 
	EZombieRuleType::EZombieRuleType_MAX = 4, 
};
//Enum TslGame.EZombieModePlayerState
enum class FEZombieModePlayerState : uint8_t
{
	EZombieModePlayerState::None = 0, 
	EZombieModePlayerState::Human = 1, 
	EZombieModePlayerState::ReadyToRevive = 2, 
	EZombieModePlayerState::Zombie = 3, 
	EZombieModePlayerState::EZombieModePlayerState_MAX = 4, 
};
//Enum TslGame.ETeamChangeZombieMode
enum class FETeamChangeZombieMode : uint8_t
{
	ETeamChangeZombieMode::None = 0, 
	ETeamChangeZombieMode::LeaveTeam = 1, 
	ETeamChangeZombieMode::JoinTeam = 2, 
	ETeamChangeZombieMode::ETeamChangeZombieMode_MAX = 3, 
};
//Enum TslGame.EFollowCameraMode
enum class FEFollowCameraMode : uint8_t
{
	EFollowCameraMode::CharacterCamera = 0, 
	EFollowCameraMode::VehicleCamera = 1, 
	EFollowCameraMode::AircraftCamera = 2, 
	EFollowCameraMode::ParachutingCamera = 3, 
	EFollowCameraMode::FallingWithParachuteCamera = 4, 
	EFollowCameraMode::EFollowCameraMode_MAX = 5, 
};
//Enum TslGame.EObserverCameraMode
enum class FEObserverCameraMode : uint8_t
{
	EObserverCameraMode::FixedCamera = 0, 
	EObserverCameraMode::FreeCamera = 1, 
	EObserverCameraMode::PlayerCamera = 2, 
	EObserverCameraMode::FollowCamera = 3, 
	EObserverCameraMode::EObserverCameraMode_MAX = 4, 
};
//Enum TslGame.EObserverAuthorityType
enum class FEObserverAuthorityType : uint8_t
{
	EObserverAuthorityType::None = 0, 
	EObserverAuthorityType::FromBeginning = 1, 
	EObserverAuthorityType::AfterDeath = 2, 
	EObserverAuthorityType::AfterExtermination = 3, 
	EObserverAuthorityType::EagleEye = 4, 
	EObserverAuthorityType::EObserverAuthorityType_MAX = 5, 
};
//Enum TslGame.EGameModeType
enum class FEGameModeType : uint8_t
{
	EGameModeType::BattleRoyale = 0, 
	EGameModeType::War = 1, 
	EGameModeType::Zombie = 2, 
	EGameModeType::Conquest = 3, 
	EGameModeType::Training = 4, 
	EGameModeType::ESports = 5, 
	EGameModeType::None = 6, 
	EGameModeType::EGameModeType_MAX = 7, 
};
//Enum TslGame.EValueType
enum class FEValueType : uint8_t
{
	EValueType::Float = 0, 
	EValueType::Int = 1, 
	EValueType::String = 2, 
	EValueType::Bool = 3, 
	EValueType::EValueType_MAX = 4, 
};
//Enum TslGame.EPlatoonSupportRequestType
enum class FEPlatoonSupportRequestType : uint8_t
{
	EPlatoonSupportRequestType::NoRequest = 0, 
	EPlatoonSupportRequestType::FireSupportRequest = 1, 
	EPlatoonSupportRequestType::WeaponPackageRequest = 2, 
	EPlatoonSupportRequestType::HealingPackageRequest = 3, 
	EPlatoonSupportRequestType::EPlatoonSupportRequestType_MAX = 4, 
};
//Enum TslGame.ETeamVehicleType
enum class FETeamVehicleType : uint8_t
{
	ETeamVehicleType::Team_None = 0, 
	ETeamVehicleType::Team_Vehicle = 1, 
	ETeamVehicleType::Team_MAX = 2, 
};
//Enum TslGame.ENearClippingLevel
enum class FENearClippingLevel : uint8_t
{
	ENearClippingLevel::Default = 0, 
	ENearClippingLevel::Low = 1, 
	ENearClippingLevel::Middle = 2, 
	ENearClippingLevel::High = 3, 
	ENearClippingLevel::ENearClippingLevel_MAX = 4, 
};
//Enum TslGame.EThingSpotGroupType
enum class FEThingSpotGroupType : uint8_t
{
	EThingSpotGroupType::GroupA = 0, 
	EThingSpotGroupType::GroupB = 1, 
	EThingSpotGroupType::GroupC = 2, 
	EThingSpotGroupType::GroupD = 3, 
	EThingSpotGroupType::GroupE = 4, 
	EThingSpotGroupType::GroupF = 5, 
	EThingSpotGroupType::GroupG = 6, 
	EThingSpotGroupType::GroupH = 7, 
	EThingSpotGroupType::GroupI = 8, 
	EThingSpotGroupType::GroupJ = 9, 
	EThingSpotGroupType::GroupK = 10, 
	EThingSpotGroupType::GroupL = 11, 
	EThingSpotGroupType::GroupM = 12, 
	EThingSpotGroupType::GroupN = 13, 
	EThingSpotGroupType::EThingSpotGroupType_MAX = 14, 
};
//Enum TslGame.EPhysMaterialType
enum class FEPhysMaterialType : uint8_t
{
	EPhysMaterialType::Unknown = 0, 
	EPhysMaterialType::Asphalt = 1, 
	EPhysMaterialType::Dirt = 2, 
	EPhysMaterialType::Water = 3, 
	EPhysMaterialType::Wood = 4, 
	EPhysMaterialType::Stone = 5, 
	EPhysMaterialType::Metal = 6, 
	EPhysMaterialType::EPhysMaterialType_MAX = 7, 
};
//Enum TslGame.EEquipableItemSoundType
enum class FEEquipableItemSoundType : uint8_t
{
	EEquipableItemSoundType::None = 0, 
	EEquipableItemSoundType::Vest = 1, 
	EEquipableItemSoundType::LongCoat = 2, 
	EEquipableItemSoundType::HipSack = 3, 
	EEquipableItemSoundType::Cloth = 4, 
	EEquipableItemSoundType::BackPack = 5, 
	EEquipableItemSoundType::MilitaryShoes = 6, 
	EEquipableItemSoundType::Sneakers = 7, 
	EEquipableItemSoundType::EEquipableItemSoundType_MAX = 8, 
};
//Enum TslGame.EEquipableItemSoundGroup
enum class FEEquipableItemSoundGroup : uint8_t
{
	EEquipableItemSoundGroup::Default = 0, 
	EEquipableItemSoundGroup::Shoes = 1, 
	EEquipableItemSoundGroup::EEquipableItemSoundGroup_MAX = 2, 
};
//Enum TslGame.EColorBlindType
enum class FEColorBlindType : uint8_t
{
	EColorBlindType::Normal = 0, 
	EColorBlindType::Deuteranopia = 1, 
	EColorBlindType::Protanopia = 2, 
	EColorBlindType::Tritanopia = 3, 
	EColorBlindType::EColorBlindType_MAX = 4, 
};
//Enum TslGame.EFrameRateLimitType
enum class FEFrameRateLimitType : uint8_t
{
	EFrameRateLimitType::Unlimited = 0, 
	EFrameRateLimitType::Fixed = 1, 
	EFrameRateLimitType::Fixed = 2, 
	EFrameRateLimitType::Customizable = 3, 
	EFrameRateLimitType::DisplayBased = 4, 
	EFrameRateLimitType::EFrameRateLimitType_MAX = 5, 
};
//Enum TslGame.ETslOutGameCloudRequestErrorType
enum class FETslOutGameCloudRequestErrorType : uint8_t
{
	ETslOutGameCloudRequestErrorType::Unknown = 0, 
	ETslOutGameCloudRequestErrorType::InternalError = 1, 
	ETslOutGameCloudRequestErrorType::ServerError = 2, 
	ETslOutGameCloudRequestErrorType::RequestTimedOut = 3, 
	ETslOutGameCloudRequestErrorType::DataCorrupted = 4, 
	ETslOutGameCloudRequestErrorType::CompressionFailed = 5, 
	ETslOutGameCloudRequestErrorType::DecompressionFailed = 6, 
	ETslOutGameCloudRequestErrorType::ETslOutGameCloudRequestErrorType_MAX = 7, 
};
//Enum TslGame.ETslOutGameCloudRequestType
enum class FETslOutGameCloudRequestType : uint8_t
{
	ETslOutGameCloudRequestType::Invalid = 0, 
	ETslOutGameCloudRequestType::SaveToCloud = 1, 
	ETslOutGameCloudRequestType::LoadFromCloud = 2, 
	ETslOutGameCloudRequestType::ETslOutGameCloudRequestType_MAX = 3, 
};
//Enum TslGame.ETslPhysMaterialType
enum class FETslPhysMaterialType : uint8_t
{
	ETslPhysMaterialType::Unknown = 0, 
	ETslPhysMaterialType::Concrete = 1, 
	ETslPhysMaterialType::Dirt = 2, 
	ETslPhysMaterialType::Water = 3, 
	ETslPhysMaterialType::Metal = 4, 
	ETslPhysMaterialType::Wood = 5, 
	ETslPhysMaterialType::Grass = 6, 
	ETslPhysMaterialType::Glass = 7, 
	ETslPhysMaterialType::Flesh = 8, 
	ETslPhysMaterialType::ETslPhysMaterialType_MAX = 9, 
};
//Enum TslGame.ETppAimCameraPosition
enum class FETppAimCameraPosition : uint8_t
{
	ETppAimCameraPosition::LatestAimPosition = 0, 
	ETppAimCameraPosition::LastPeekingPosition = 1, 
	ETppAimCameraPosition::ResetToRightShoulderPosition = 2, 
	ETppAimCameraPosition::ResetToLeftShoulderPosition = 3, 
	ETppAimCameraPosition::ETppAimCameraPosition_MAX = 4, 
};
//Enum TslGame.EAccessorySlot
enum class FEAccessorySlot : uint8_t
{
	EAccessorySlot::Slot_Primary = 0, 
	EAccessorySlot::Slot_Secondary = 1, 
	EAccessorySlot::Slot_SideArm = 2, 
	EAccessorySlot::Slot_Melee = 3, 
	EAccessorySlot::Slot_Thrown = 4, 
	EAccessorySlot::Slot_None = 5, 
	EAccessorySlot::Slot_MAX = 6, 
};
//Enum TslGame.ELobbyCharacterCameraType
enum class FELobbyCharacterCameraType : uint8_t
{
	ELobbyCharacterCameraType::None = 0, 
	ELobbyCharacterCameraType::WholeBodyCamera = 1, 
	ELobbyCharacterCameraType::TopCamera = 2, 
	ELobbyCharacterCameraType::HeadCamera = 3, 
	ELobbyCharacterCameraType::BodyCamera = 4, 
	ELobbyCharacterCameraType::LegCamera = 5, 
	ELobbyCharacterCameraType::FootCamera = 6, 
	ELobbyCharacterCameraType::Max = 7, 
	ELobbyCharacterCameraType::ELobbyCharacterCameraType_MAX = 8, 
};
//Enum TslGame.EContinuousHealItem
enum class FEContinuousHealItem : uint8_t
{
	EContinuousHealItem::Continuous_On = 0, 
	EContinuousHealItem::Bandaged_Only = 1, 
	EContinuousHealItem::Continuous_Off = 2, 
	EContinuousHealItem::EContinuousHealItem_MAX = 3, 
};
//Enum TslGame.EWeaponClass
enum class FEWeaponClass : uint8_t
{
	EWeaponClass::Class_None = 0, 
	EWeaponClass::Class_Pistol = 1, 
	EWeaponClass::Class_SMG = 2, 
	EWeaponClass::Class_Rifle = 3, 
	EWeaponClass::Class_Carbine = 4, 
	EWeaponClass::Class_Shotgun = 5, 
	EWeaponClass::Class_Sniper = 6, 
	EWeaponClass::Class_DMR = 7, 
	EWeaponClass::Class_LMG = 8, 
	EWeaponClass::Class_Melee = 9, 
	EWeaponClass::Class_Throwable = 10, 
	EWeaponClass::Class_Shield = 11, 
	EWeaponClass::Class_Crossbow = 12, 
	EWeaponClass::Class_Launcher = 13, 
	EWeaponClass::EWeaponClass_MAX = 14, 
};
//Enum TslGame.ECharThrowMode
enum class FECharThrowMode : uint8_t
{
	ECharThrowMode::ThrowHigh = 0, 
	ECharThrowMode::ThrowLow = 1, 
	ECharThrowMode::ECharThrowMode_MAX = 2, 
};
//Enum TslGame.EAttachmentCalculateType
enum class FEAttachmentCalculateType : uint8_t
{
	EAttachmentCalculateType::Addition = 0, 
	EAttachmentCalculateType::Multiply = 1, 
	EAttachmentCalculateType::EAttachmentCalculateType_MAX = 2, 
};
//Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class FEAutoEquipAttachmentForScopeMode : uint8_t
{
	EAutoEquipAttachmentForScopeMode::Off = 0, 
	EAutoEquipAttachmentForScopeMode::Sight_Only = 1, 
	EAutoEquipAttachmentForScopeMode::ALL = 2, 
	EAutoEquipAttachmentForScopeMode::EAutoEquipAttachmentForScopeMode_MAX = 3, 
};
//Enum TslGame.EFiringMode
enum class FEFiringMode : uint8_t
{
	EFiringMode::Normal = 0, 
	EFiringMode::Burst = 1, 
	EFiringMode::FullAuto = 2, 
	EFiringMode::EFiringMode_MAX = 3, 
};
//Enum TslGame.EWeaponHand
enum class FEWeaponHand : uint8_t
{
	EWeaponHand::Left = 0, 
	EWeaponHand::Right = 1, 
	EWeaponHand::Total = 2, 
	EWeaponHand::EWeaponHand_MAX = 3, 
};
//Enum TslGame.EWeaponArmState
enum class FEWeaponArmState : uint8_t
{
	EWeaponArmState::None = 0, 
	EWeaponArmState::NotArmed = 1, 
	EWeaponArmState::Arming = 2, 
	EWeaponArmState::Armed = 3, 
	EWeaponArmState::UnArming = 4, 
	EWeaponArmState::EWeaponArmState_MAX = 5, 
};
//Enum TslGame.EPlatoonType
enum class FEPlatoonType : uint8_t
{
	EPlatoonType::PlatoonA = 0, 
	EPlatoonType::PlatoonB = 1, 
	EPlatoonType::EPlatoonType_MAX = 2, 
};
//Enum TslGame.EAnimWeaponType
enum class FEAnimWeaponType : uint8_t
{
	EAnimWeaponType::None = 0, 
	EAnimWeaponType::Rifle = 1, 
	EAnimWeaponType::Pistol = 2, 
	EAnimWeaponType::Throwable = 3, 
	EAnimWeaponType::Melee = 4, 
	EAnimWeaponType::Shield = 5, 
	EAnimWeaponType::EAnimWeaponType_MAX = 6, 
};
//Enum TslGame.ECameraViewBehaviour
enum class FECameraViewBehaviour : uint8_t
{
	ECameraViewBehaviour::FpsAndTps = 0, 
	ECameraViewBehaviour::FpsOnly = 1, 
	ECameraViewBehaviour::TpsOnly = 2, 
	ECameraViewBehaviour::ECameraViewBehaviour_MAX = 3, 
};
//Enum TslGame.EPlayerStartType
enum class FEPlayerStartType : uint8_t
{
	EPlayerStartType::OnePlace = 0, 
	EPlayerStartType::SeveralPlace = 1, 
	EPlayerStartType::EPlayerStartType_MAX = 2, 
};
//Enum TslGame.EMatchStartType
enum class FEMatchStartType : uint8_t
{
	EMatchStartType::Normal = 0, 
	EMatchStartType::Airborne = 1, 
	EMatchStartType::EMatchStartType_MAX = 2, 
};
//Enum TslGame.EGender
enum class FEGender : uint8_t
{
	EGender::Male = 0, 
	EGender::Female = 1, 
	EGender::EGender_MAX = 2, 
};
//Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class FEMobileCSMQuality : uint8_t
{
	EMobileCSMQuality::NoFiltering = 0, 
	EMobileCSMQuality::PCF_1x1 = 1, 
	EMobileCSMQuality::PCF_2x2 = 2, 
	EMobileCSMQuality::EMobileCSMQuality_MAX = 3, 
};
//Enum Engine.ESkyLightSourceType
enum class FESkyLightSourceType : uint8_t
{
	SLS_CapturedScene = 0, 
	SLS_SpecifiedCubemap = 1, 
	SLS_MAX = 2, 
};
//Enum Engine.EBoneSpaces
enum class FEBoneSpaces : uint8_t
{
	EBoneSpaces::WorldSpace = 0, 
	EBoneSpaces::ComponentSpace = 1, 
	EBoneSpaces::EBoneSpaces_MAX = 2, 
};
//Enum Engine.EMeshComponentUpdateFlag
enum class FEMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones = 0, 
	EMeshComponentUpdateFlag::AlwaysTickPose = 1, 
	EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered = 2, 
	EMeshComponentUpdateFlag::EMeshComponentUpdateFlag_MAX = 3, 
};
//Enum Engine.EPhysBodyOp
enum class FEPhysBodyOp : uint8_t
{
	PBO_None = 0, 
	PBO_Term = 1, 
	PBO_MAX = 2, 
};
//Enum Engine.EBoneVisibilityStatus
enum class FEBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent = 0, 
	BVS_Visible = 1, 
	BVS_ExplicitlyHidden = 2, 
	BVS_MAX = 3, 
};
//Enum Engine.EPhysicsTransformUpdateMode
enum class FEPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform = 0, 
	EPhysicsTransformUpdateMode::ComponentTransformIsKinematic = 1, 
	EPhysicsTransformUpdateMode::EPhysicsTransformUpdateMode_MAX = 2, 
};
//Enum Engine.EAnimationMode
enum class FEAnimationMode : uint8_t
{
	EAnimationMode::AnimationBlueprint = 0, 
	EAnimationMode::AnimationSingleNode = 1, 
	EAnimationMode::AnimationCustomMode = 2, 
	EAnimationMode::EAnimationMode_MAX = 3, 
};
//Enum Engine.EKinematicBonesUpdateToPhysics
enum class FEKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics::SkipSimulatingBones = 0, 
	EKinematicBonesUpdateToPhysics::SkipAllBones = 1, 
	EKinematicBonesUpdateToPhysics::EKinematicBonesUpdateToPhysics_MAX = 2, 
};
//Enum Engine.ESplineMeshAxis
enum class FESplineMeshAxis : uint8_t
{
	ESplineMeshAxis::X = 0, 
	ESplineMeshAxis::Y = 1, 
	ESplineMeshAxis::Z = 2, 
	ESplineMeshAxis::ESplineMeshAxis_MAX = 3, 
};
//Enum Engine.ESplineCoordinateSpace
enum class FESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace::Local = 0, 
	ESplineCoordinateSpace::World = 1, 
	ESplineCoordinateSpace::ESplineCoordinateSpace_MAX = 2, 
};
//Enum Engine.ESplinePointType
enum class FESplinePointType : uint8_t
{
	ESplinePointType::Linear = 0, 
	ESplinePointType::Curve = 1, 
	ESplinePointType::Constant = 2, 
	ESplinePointType::CurveClamped = 3, 
	ESplinePointType::CurveCustomTangent = 4, 
	ESplinePointType::ESplinePointType_MAX = 5, 
};
//Enum Engine.EVerticalTextAligment
enum class FEVerticalTextAligment : uint8_t
{
	EVRTA_TextTop = 0, 
	EVRTA_TextCenter = 1, 
	EVRTA_TextBottom = 2, 
	EVRTA_QuadTop = 3, 
	EVRTA_MAX = 4, 
};
//Enum Engine.EHorizTextAligment
enum class FEHorizTextAligment : uint8_t
{
	EHTA_Left = 0, 
	EHTA_Center = 1, 
	EHTA_Right = 2, 
	EHTA_MAX = 3, 
};
//Enum Engine.EReflectionSourceType
enum class FEReflectionSourceType : uint8_t
{
	EReflectionSourceType::CapturedScene = 0, 
	EReflectionSourceType::SpecifiedCubemap = 1, 
	EReflectionSourceType::EReflectionSourceType_MAX = 2, 
};
//Enum Engine.EStereoLayerShape
enum class FEStereoLayerShape : uint8_t
{
	SLSH_QuadLayer = 0, 
	SLSH_CylinderLayer = 1, 
	SLSH_CubemapLayer = 2, 
	SLSH_MAX = 3, 
};
//Enum Engine.EStereoLayerType
enum class FEStereoLayerType : uint8_t
{
	SLT_WorldLocked = 0, 
	SLT_TrackerLocked = 1, 
	SLT_FaceLocked = 2, 
	SLT_MAX = 3, 
};
//Enum Engine.EWindSourceType
enum class FEWindSourceType : uint8_t
{
	EWindSourceType::Directional = 0, 
	EWindSourceType::Point = 1, 
	EWindSourceType::EWindSourceType_MAX = 2, 
};
//Enum Engine.ETimelineDirection
enum class FETimelineDirection : uint8_t
{
	ETimelineDirection::Forward = 0, 
	ETimelineDirection::Backward = 1, 
	ETimelineDirection::ETimelineDirection_MAX = 2, 
};
//Enum Engine.ETimelineLengthMode
enum class FETimelineLengthMode : uint8_t
{
	TL_TimelineLength = 0, 
	TL_LastKeyFrame = 1, 
	TL_MAX = 2, 
};
//Enum Engine.AnimationKeyFormat
enum class FAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp = 0, 
	AKF_VariableKeyLerp = 1, 
	AKF_PerTrackCompression = 2, 
	AKF_MAX = 3, 
};
//Enum Engine.ENotifyTriggerMode
enum class FENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode::AllAnimations = 0, 
	ENotifyTriggerMode::HighestWeightedAnimation = 1, 
	ENotifyTriggerMode::None = 2, 
	ENotifyTriggerMode::ENotifyTriggerMode_MAX = 3, 
};
//Enum Engine.EBlendSpaceAxis
enum class FEBlendSpaceAxis : uint8_t
{
	BSA_None = 0, 
	BSA_X = 1, 
	BSA_Y = 2, 
	BSA_Max = 3, 
};
//Enum Engine.ETransitionLogicType
enum class FETransitionLogicType : uint8_t
{
	ETransitionLogicType::TLT_StandardBlend = 0, 
	ETransitionLogicType::TLT_Custom = 1, 
	ETransitionLogicType::TLT_MAX = 2, 
};
//Enum Engine.ETransitionBlendMode
enum class FETransitionBlendMode : uint8_t
{
	ETransitionBlendMode::TBM_Linear = 0, 
	ETransitionBlendMode::TBM_Cubic = 1, 
	ETransitionBlendMode::TBM_MAX = 2, 
};
//Enum Engine.EMontagePlayReturnType
enum class FEMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType::MontageLength = 0, 
	EMontagePlayReturnType::Duration = 1, 
	EMontagePlayReturnType::EMontagePlayReturnType_MAX = 2, 
};
//Enum Engine.EAnimCurveType
enum class FEAnimCurveType : uint8_t
{
	EAnimCurveType::AttributeCurve = 0, 
	EAnimCurveType::MaterialCurve = 1, 
	EAnimCurveType::MorphTargetCurve = 2, 
	EAnimCurveType::MaxAnimCurveType = 3, 
	EAnimCurveType::EAnimCurveType_MAX = 4, 
};
//Enum Engine.EPrimaryAssetCookRule
enum class FEPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule::Unknown = 0, 
	EPrimaryAssetCookRule::NeverCook = 1, 
	EPrimaryAssetCookRule::DevelopmentCook = 2, 
	EPrimaryAssetCookRule::AlwaysCook = 3, 
	EPrimaryAssetCookRule::EPrimaryAssetCookRule_MAX = 4, 
};
//Enum Engine.EBlueprintNativizationFlag
enum class FEBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag::Disabled = 0, 
	EBlueprintNativizationFlag::Dependency = 1, 
	EBlueprintNativizationFlag::ExplicitlyEnabled = 2, 
	EBlueprintNativizationFlag::EBlueprintNativizationFlag_MAX = 3, 
};
//Enum Engine.EBlueprintCompileMode
enum class FEBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode::Default = 0, 
	EBlueprintCompileMode::Development = 1, 
	EBlueprintCompileMode::FinalRelease = 2, 
	EBlueprintCompileMode::EBlueprintCompileMode_MAX = 3, 
};
//Enum Engine.EBlueprintType
enum class FEBlueprintType : uint8_t
{
	BPTYPE_Normal = 0, 
	BPTYPE_Const = 1, 
	BPTYPE_MacroLibrary = 2, 
	BPTYPE_Interface = 3, 
	BPTYPE_LevelScript = 4, 
	BPTYPE_FunctionLibrary = 5, 
	BPTYPE_MAX = 6, 
};
//Enum Engine.EBlueprintStatus
enum class FEBlueprintStatus : uint8_t
{
	BS_Unknown = 0, 
	BS_Dirty = 1, 
	BS_Error = 2, 
	BS_UpToDate = 3, 
	BS_BeingCreated = 4, 
	BS_UpToDateWithWarnings = 5, 
	BS_MAX = 6, 
};
//Enum Engine.EEvaluateCurveTableResult
enum class FEEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult::RowFound = 0, 
	EEvaluateCurveTableResult::RowNotFound = 1, 
	EEvaluateCurveTableResult::EEvaluateCurveTableResult_MAX = 2, 
};
//Enum Engine.EGrammaticalNumber
enum class FEGrammaticalNumber : uint8_t
{
	EGrammaticalNumber::Singular = 0, 
	EGrammaticalNumber::Plural = 1, 
	EGrammaticalNumber::EGrammaticalNumber_MAX = 2, 
};
//Enum Engine.EGrammaticalGender
enum class FEGrammaticalGender : uint8_t
{
	EGrammaticalGender::Neuter = 0, 
	EGrammaticalGender::Masculine = 1, 
	EGrammaticalGender::Feminine = 2, 
	EGrammaticalGender::Mixed = 3, 
	EGrammaticalGender::EGrammaticalGender_MAX = 4, 
};
//Enum Engine.ESuggestProjVelocityTraceOption
enum class FESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption::DoNotTrace = 0, 
	ESuggestProjVelocityTraceOption::TraceFullPath = 1, 
	ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending = 2, 
	ESuggestProjVelocityTraceOption::ESuggestProjVelocityTraceOption_MAX = 3, 
};
//Enum Engine.EHMDWornState
enum class FEHMDWornState : uint8_t
{
	EHMDWornState::Unknown = 0, 
	EHMDWornState::Worn = 1, 
	EHMDWornState::NotWorn = 2, 
	EHMDWornState::EHMDWornState_MAX = 3, 
};
//Enum Engine.EHMDTrackingOrigin
enum class FEHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin::Floor = 0, 
	EHMDTrackingOrigin::Eye = 1, 
	EHMDTrackingOrigin::EHMDTrackingOrigin_MAX = 2, 
};
//Enum Engine.EOrientPositionSelector
enum class FEOrientPositionSelector : uint8_t
{
	EOrientPositionSelector::Orientation = 0, 
	EOrientPositionSelector::Position = 1, 
	EOrientPositionSelector::OrientationAndPosition = 2, 
	EOrientPositionSelector::EOrientPositionSelector_MAX = 3, 
};
//Enum Engine.ELerpInterpolationMode
enum class FELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode::QuatInterp = 0, 
	ELerpInterpolationMode::EulerInterp = 1, 
	ELerpInterpolationMode::DualQuatInterp = 2, 
	ELerpInterpolationMode::ELerpInterpolationMode_MAX = 3, 
};
//Enum Engine.EEasingFunc
enum class FEEasingFunc : uint8_t
{
	EEasingFunc::Linear = 0, 
	EEasingFunc::Step = 1, 
	EEasingFunc::SinusoidalIn = 2, 
	EEasingFunc::SinusoidalOut = 3, 
	EEasingFunc::SinusoidalInOut = 4, 
	EEasingFunc::EaseIn = 5, 
	EEasingFunc::EaseOut = 6, 
	EEasingFunc::EaseInOut = 7, 
	EEasingFunc::ExpoIn = 8, 
	EEasingFunc::ExpoOut = 9, 
	EEasingFunc::ExpoInOut = 10, 
	EEasingFunc::CircularIn = 11, 
	EEasingFunc::CircularOut = 12, 
	EEasingFunc::CircularInOut = 13, 
	EEasingFunc::EEasingFunc_MAX = 14, 
};
//Enum ActorSequence.EActorSequenceObjectReferenceType
enum class FEActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType::ContextActor = 0, 
	EActorSequenceObjectReferenceType::ExternalActor = 1, 
	EActorSequenceObjectReferenceType::Component = 2, 
	EActorSequenceObjectReferenceType::EActorSequenceObjectReferenceType_MAX = 3, 
};
//Enum InputCore.ETouchType
enum class FETouchType : uint8_t
{
	ETouchType::Began = 0, 
	ETouchType::Moved = 1, 
	ETouchType::Stationary = 2, 
	ETouchType::Ended = 3, 
	ETouchType::NumTypes = 4, 
	ETouchType::ETouchType_MAX = 5, 
};
//Enum InputCore.EConsoleForGamepadLabels
enum class FEConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels::None = 0, 
	EConsoleForGamepadLabels::XBoxOne = 1, 
	EConsoleForGamepadLabels::PS4 = 2, 
	EConsoleForGamepadLabels::EConsoleForGamepadLabels_MAX = 3, 
};
//Enum InputCore.EControllerHand
enum class FEControllerHand : uint8_t
{
	EControllerHand::Left = 0, 
	EControllerHand::Right = 1, 
	EControllerHand::Pad = 2, 
	EControllerHand::ExternalCamera = 3, 
	EControllerHand::Gun = 4, 
	EControllerHand::Special = 5, 
	EControllerHand::Special = 6, 
	EControllerHand::Special = 7, 
	EControllerHand::Special = 8, 
	EControllerHand::Special = 9, 
	EControllerHand::Special = 10, 
	EControllerHand::Special = 11, 
	EControllerHand::Special = 12, 
	EControllerHand::Special = 13, 
	EControllerHand::EControllerHand_MAX = 14, 
};
//Enum MoviePlayer.EMoviePlaybackType
enum class FEMoviePlaybackType : uint8_t
{
	MT_Normal = 0, 
	MT_Looped = 1, 
	MT_LoadingLoop = 2, 
	MT_MAX = 3, 
};
//Enum VectorVM.EVectorVMOp
enum class FEVectorVMOp : uint8_t
{
	EVectorVMOp::done = 0, 
	EVectorVMOp::add = 1, 
	EVectorVMOp::sub = 2, 
	EVectorVMOp::mul = 3, 
	EVectorVMOp::div = 4, 
	EVectorVMOp::mad = 5, 
	EVectorVMOp::lerp = 6, 
	EVectorVMOp::rcp = 7, 
	EVectorVMOp::rsq = 8, 
	EVectorVMOp::sqrt = 9, 
	EVectorVMOp::neg = 10, 
	EVectorVMOp::abs = 11, 
	EVectorVMOp::exp = 12, 
	EVectorVMOp::exp2 = 13, 
	EVectorVMOp::log = 14, 
	EVectorVMOp::log2 = 15, 
	EVectorVMOp::sin = 16, 
	EVectorVMOp::cos = 17, 
	EVectorVMOp::tan = 18, 
	EVectorVMOp::asin = 19, 
	EVectorVMOp::acos = 20, 
	EVectorVMOp::atan = 21, 
	EVectorVMOp::atan2 = 22, 
	EVectorVMOp::ceil = 23, 
	EVectorVMOp::floor = 24, 
	EVectorVMOp::fmod = 25, 
	EVectorVMOp::frac = 26, 
	EVectorVMOp::trunc = 27, 
	EVectorVMOp::clamp = 28, 
	EVectorVMOp::min = 29, 
	EVectorVMOp::max = 30, 
	EVectorVMOp::pow = 31, 
	EVectorVMOp::sign = 32, 
	EVectorVMOp::step = 33, 
	EVectorVMOp::random = 34, 
	EVectorVMOp::noise = 35, 
	EVectorVMOp::output = 36, 
	EVectorVMOp::cmplt = 37, 
	EVectorVMOp::cmple = 38, 
	EVectorVMOp::cmpgt = 39, 
	EVectorVMOp::cmpge = 40, 
	EVectorVMOp::cmpeq = 41, 
	EVectorVMOp::cmpneq = 42, 
	EVectorVMOp::select = 43, 
	EVectorVMOp::addi = 44, 
	EVectorVMOp::subi = 45, 
	EVectorVMOp::muli = 46, 
	EVectorVMOp::clampi = 47, 
	EVectorVMOp::mini = 48, 
	EVectorVMOp::maxi = 49, 
	EVectorVMOp::absi = 50, 
	EVectorVMOp::negi = 51, 
	EVectorVMOp::signi = 52, 
	EVectorVMOp::cmplti = 53, 
	EVectorVMOp::cmplei = 54, 
	EVectorVMOp::cmpgti = 55, 
	EVectorVMOp::cmpgei = 56, 
	EVectorVMOp::cmpeqi = 57, 
	EVectorVMOp::cmpneqi = 58, 
	EVectorVMOp::bit_and = 59, 
	EVectorVMOp::bit_or = 60, 
	EVectorVMOp::bit_xor = 61, 
	EVectorVMOp::bit_not = 62, 
	EVectorVMOp::logic_and = 63, 
	EVectorVMOp::logic_or = 64, 
	EVectorVMOp::logic_xor = 65, 
	EVectorVMOp::logic_not = 66, 
	EVectorVMOp::f2i = 67, 
	EVectorVMOp::i2f = 68, 
	EVectorVMOp::f2b = 69, 
	EVectorVMOp::b2f = 70, 
	EVectorVMOp::i2b = 71, 
	EVectorVMOp::b2i = 72, 
	EVectorVMOp::inputdata_32bit = 73, 
	EVectorVMOp::inputdata_noadvance_32bit = 74, 
	EVectorVMOp::outputdata_32bit = 75, 
	EVectorVMOp::acquireindex = 76, 
	EVectorVMOp::external_func_call = 77, 
	EVectorVMOp::exec_index = 78, 
	EVectorVMOp::noise2D = 79, 
	EVectorVMOp::noise3D = 80, 
	EVectorVMOp::enter_stat_scope = 81, 
	EVectorVMOp::exit_stat_scope = 82, 
	EVectorVMOp::round = 83, 
	EVectorVMOp::NumOpcodes = 84, 
	EVectorVMOp::EVectorVMOp_MAX = 85, 
};
//Enum VectorVM.EVectorVMOperandLocation
enum class FEVectorVMOperandLocation : uint8_t
{
	EVectorVMOperandLocation::Register = 0, 
	EVectorVMOperandLocation::Constant = 1, 
	EVectorVMOperandLocation::Num = 2, 
	EVectorVMOperandLocation::EVectorVMOperandLocation_MAX = 3, 
};
//Enum VectorVM.EVectorVMBaseTypes
enum class FEVectorVMBaseTypes : uint8_t
{
	EVectorVMBaseTypes::Float = 0, 
	EVectorVMBaseTypes::Int = 1, 
	EVectorVMBaseTypes::Bool = 2, 
	EVectorVMBaseTypes::Num = 3, 
	EVectorVMBaseTypes::EVectorVMBaseTypes_MAX = 4, 
};
//Enum UMG.EWidgetGeometryMode
enum class FEWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode::Plane = 0, 
	EWidgetGeometryMode::Cylinder = 1, 
	EWidgetGeometryMode::EWidgetGeometryMode_MAX = 2, 
};
//Enum UMG.EWidgetBlendMode
enum class FEWidgetBlendMode : uint8_t
{
	EWidgetBlendMode::Opaque = 0, 
	EWidgetBlendMode::Masked = 1, 
	EWidgetBlendMode::Transparent = 2, 
	EWidgetBlendMode::EWidgetBlendMode_MAX = 3, 
};
//Enum UMG.EWidgetTimingPolicy
enum class FEWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy::RealTime = 0, 
	EWidgetTimingPolicy::GameTime = 1, 
	EWidgetTimingPolicy::EWidgetTimingPolicy_MAX = 2, 
};
//Enum UMG.EWidgetSpace
enum class FEWidgetSpace : uint8_t
{
	EWidgetSpace::World = 0, 
	EWidgetSpace::Screen = 1, 
	EWidgetSpace::EWidgetSpace_MAX = 2, 
};
//Enum UMG.EWidgetInteractionSource
enum class FEWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource::World = 0, 
	EWidgetInteractionSource::Mouse = 1, 
	EWidgetInteractionSource::CenterScreen = 2, 
	EWidgetInteractionSource::Custom = 3, 
	EWidgetInteractionSource::EWidgetInteractionSource_MAX = 4, 
};
//Enum TslGame.EKillcamDisplayCode
enum class FEKillcamDisplayCode : uint8_t
{
	EKillcamDisplayCode::NotVisible = 0, 
	EKillcamDisplayCode::OptionDisabled = 1, 
	EKillcamDisplayCode::Recording = 2, 
	EKillcamDisplayCode::Playable = 3, 
	EKillcamDisplayCode::Replay = 4, 
	EKillcamDisplayCode::FailToLoad = 5, 
	EKillcamDisplayCode::DemoFailure = 6, 
	EKillcamDisplayCode::DetectedUnusualMovement = 7, 
	EKillcamDisplayCode::EKillcamDisplayCode_MAX = 8, 
};
//Enum TslGame.EWidgetShowType
enum class FEWidgetShowType : uint8_t
{
	EWidgetShowType::Show = 0, 
	EWidgetShowType::Hide = 1, 
	EWidgetShowType::Toggle = 2, 
	EWidgetShowType::EWidgetShowType_MAX = 3, 
};
//Enum TslGame.EAnimStance
enum class FEAnimStance : uint8_t
{
	EAnimStance::Stand = 0, 
	EAnimStance::Crouch = 1, 
	EAnimStance::Prone = 2, 
	EAnimStance::Groggy = 3, 
	EAnimStance::EAnimStance_MAX = 4, 
};
//Enum TslGame.EWeaponGripLeftHand
enum class FEWeaponGripLeftHand : uint8_t
{
	EWeaponGripLeftHand::NormalRifle = 0, 
	EWeaponGripLeftHand::Foregrip1 = 1, 
	EWeaponGripLeftHand::Foregrip2 = 2, 
	EWeaponGripLeftHand::Thompson = 3, 
	EWeaponGripLeftHand::EWeaponGripLeftHand_MAX = 4, 
};
//Enum TslGame.ECastableItemType
enum class FECastableItemType : uint8_t
{
	ECastableItemType::None = 0, 
	ECastableItemType::Bandage = 1, 
	ECastableItemType::FirstAid = 2, 
	ECastableItemType::Medkit = 3, 
	ECastableItemType::EnergyDrink = 4, 
	ECastableItemType::Painkiller = 5, 
	ECastableItemType::Adrenaline = 6, 
	ECastableItemType::GasCan = 7, 
	ECastableItemType::Battery = 8, 
	ECastableItemType::ECastableItemType_MAX = 9, 
};
//Enum TslGame.ECastLevel
enum class FECastLevel : uint8_t
{
	ECastLevel::None = 0, 
	ECastLevel::NoRestriction = 1, 
	ECastLevel::Restriction = 2, 
	ECastLevel::ECastLevel_MAX = 3, 
};
//Enum TslGame.ECastPriority
enum class FECastPriority : uint8_t
{
	ECastPriority::None = 0, 
	ECastPriority::Low = 1, 
	ECastPriority::Normal = 2, 
	ECastPriority::High = 3, 
	ECastPriority::Max = 4, 
	ECastPriority::ECastPriority_MAX = 5, 
};
//Enum TslGame.ELobbyItemPointSellingType
enum class FELobbyItemPointSellingType : uint8_t
{
	ELobbyItemPointSellingType::Normal = 0, 
	ELobbyItemPointSellingType::WeeklyDouble = 1, 
	ELobbyItemPointSellingType::ELobbyItemPointSellingType_MAX = 2, 
};
//Enum TslGame.ELobbyItemPlatform
enum class FELobbyItemPlatform : uint8_t
{
	ELobbyItemPlatform::PC_Steam = 0, 
	ELobbyItemPlatform::PC_NonSteam = 1, 
	ELobbyItemPlatform::Xbox = 2, 
	ELobbyItemPlatform::ELobbyItemPlatform_MAX = 3, 
};
//Enum TslGame.ELobbyItemTier
enum class FELobbyItemTier : uint8_t
{
	ELobbyItemTier::Basic = 0, 
	ELobbyItemTier::Common = 1, 
	ELobbyItemTier::Classic = 2, 
	ELobbyItemTier::Special = 3, 
	ELobbyItemTier::Rare = 4, 
	ELobbyItemTier::Elite = 5, 
	ELobbyItemTier::Epic = 6, 
	ELobbyItemTier::Legendary = 7, 
	ELobbyItemTier::Ultimate = 8, 
	ELobbyItemTier::Event = 9, 
	ELobbyItemTier::ELobbyItemTier_MAX = 10, 
};
//Enum TslGame.ELobbyItemCategory
enum class FELobbyItemCategory : uint8_t
{
	ELobbyItemCategory::Belt = 0, 
	ELobbyItemCategory::Body = 1, 
	ELobbyItemCategory::Eyes = 2, 
	ELobbyItemCategory::Feet = 3, 
	ELobbyItemCategory::Head = 4, 
	ELobbyItemCategory::Jacket = 5, 
	ELobbyItemCategory::Legs = 6, 
	ELobbyItemCategory::Mask = 7, 
	ELobbyItemCategory::Hands = 8, 
	ELobbyItemCategory::Box = 9, 
	ELobbyItemCategory::Key = 10, 
	ELobbyItemCategory::WeaponSkin = 11, 
	ELobbyItemCategory::ParachuteSkin = 12, 
	ELobbyItemCategory::HelmetSkin = 13, 
	ELobbyItemCategory::BackpackSkin = 14, 
	ELobbyItemCategory::TorsoArmorSkin = 15, 
	ELobbyItemCategory::VehicleSkin = 16, 
	ELobbyItemCategory::Multislot = 17, 
	ELobbyItemCategory::ELobbyItemCategory_MAX = 18, 
};
//Enum TslGame.EItemCategory
enum class FEItemCategory : uint8_t
{
	EItemCategory::None = 0, 
	EItemCategory::Equipment = 1, 
	EItemCategory::Weapon = 2, 
	EItemCategory::Attachment = 3, 
	EItemCategory::Ammunition = 4, 
	EItemCategory::Use = 5, 
	EItemCategory::Skin = 6, 
	EItemCategory::Event = 7, 
	EItemCategory::EItemCategory_MAX = 8, 
};
//Enum TslGame.EStatTrakState
enum class FEStatTrakState : uint8_t
{
	EStatTrakState::Run = 0, 
	EStatTrakState::Locked = 1, 
	EStatTrakState::Error = 2, 
	EStatTrakState::EStatTrakState_MAX = 3, 
};
//Enum TslGame.ESkinApplicationType
enum class FESkinApplicationType : uint8_t
{
	ESkinApplicationType::Application_InOrder = 0, 
	ESkinApplicationType::Application_Slot = 1, 
	ESkinApplicationType::Application_Index = 2, 
	ESkinApplicationType::Application_MAX = 3, 
};
//Enum TslGame.ESkinMeshType
enum class FESkinMeshType : uint8_t
{
	ESkinMeshType::SkeletalMesh = 0, 
	ESkinMeshType::AsyncStaticMesh = 1, 
	ESkinMeshType::StaticMesh = 2, 
	ESkinMeshType::ESkinMeshType_MAX = 3, 
};
//Enum TslGame.ESkinCategory
enum class FESkinCategory : uint8_t
{
	ESkinCategory::Skin_None = 0, 
	ESkinCategory::Skin_Equipment = 1, 
	ESkinCategory::Skin_Parachute = 2, 
	ESkinCategory::Skin_Weapon = 3, 
	ESkinCategory::Skin_MeleeWeapon = 4, 
	ESkinCategory::Skin_Vehicle = 5, 
	ESkinCategory::Skin_MAX = 6, 
};
//Enum TslGame.EMasteryItemType
enum class FEMasteryItemType : uint8_t
{
	EMasteryItemType::Charm = 0, 
	EMasteryItemType::Mesh = 1, 
	EMasteryItemType::EMasteryItemType_MAX = 2, 
};
//Enum TslGame.EVaultRequirementType
enum class FEVaultRequirementType : uint8_t
{
	EVaultRequirementType::VaultReqType_False = 0, 
	EVaultRequirementType::VaultReqType_True = 1, 
	EVaultRequirementType::VaultReqType_Any = 2, 
	EVaultRequirementType::VaultReqType_MAX = 3, 
};
//Enum TslGame.EVaultAnimType
enum class FEVaultAnimType : uint8_t
{
	EVaultAnimType::VaultNone = 0, 
	EVaultAnimType::Vault200_Stationary = 1, 
	EVaultAnimType::Vault200_Mobile = 2, 
	EVaultAnimType::Vault200_Narrow = 3, 
	EVaultAnimType::Vault160_Stationary = 4, 
	EVaultAnimType::Vault160_Mobile = 5, 
	EVaultAnimType::Vault160_Narrow = 6, 
	EVaultAnimType::Vault120_Stationary = 7, 
	EVaultAnimType::Vault120_Mobile = 8, 
	EVaultAnimType::Vault120_Slide = 9, 
	EVaultAnimType::Vault120_Narrow = 10, 
	EVaultAnimType::Vault90_Stationary = 11, 
	EVaultAnimType::Vault90_Mobile = 12, 
	EVaultAnimType::Vault90_Slide = 13, 
	EVaultAnimType::Vault90_Narrow = 14, 
	EVaultAnimType::Climb200_Stationary = 15, 
	EVaultAnimType::Climb200_Mobile = 16, 
	EVaultAnimType::Climb200_Slide = 17, 
	EVaultAnimType::Climb200_Narrow = 18, 
	EVaultAnimType::Climb160_Stationary = 19, 
	EVaultAnimType::Climb160_Mobile = 20, 
	EVaultAnimType::Climb160_Slide = 21, 
	EVaultAnimType::Climb160_Narrow = 22, 
	EVaultAnimType::Climb120_Stationary = 23, 
	EVaultAnimType::Climb120_Mobile = 24, 
	EVaultAnimType::Climb120_Slide = 25, 
	EVaultAnimType::Climb120_Narrow = 26, 
	EVaultAnimType::Climb90_Stationary = 27, 
	EVaultAnimType::Climb90_Mobile = 28, 
	EVaultAnimType::Climb90_Slide = 29, 
	EVaultAnimType::Climb90_Narrow = 30, 
	EVaultAnimType::Vault90Roll = 31, 
	EVaultAnimType::Vault120Window = 32, 
	EVaultAnimType::Vault60_Stationary = 33, 
	EVaultAnimType::Vault60_Mobile = 34, 
	EVaultAnimType::Vault60_Slide = 35, 
	EVaultAnimType::Vault60_Narrow = 36, 
	EVaultAnimType::Climb60_Stationary = 37, 
	EVaultAnimType::Climb60_Mobile = 38, 
	EVaultAnimType::Climb60_Narrow = 39, 
	EVaultAnimType::LedgeGrab_Up_Climb = 40, 
	EVaultAnimType::LedgeGrab_Up_Climb_Swing = 41, 
	EVaultAnimType::LedgeGrab_Up_Climb_HalfSwing = 42, 
	EVaultAnimType::LedgeGrab_Up_Vault = 43, 
	EVaultAnimType::LedgeGrab_Up_Vault_Swing = 44, 
	EVaultAnimType::LedgeGrab_Up_Vault_HalfSwing = 45, 
	EVaultAnimType::LedgeGrab_High_Climb = 46, 
	EVaultAnimType::LedgeGrab_High_Climb_Swing = 47, 
	EVaultAnimType::LedgeGrab_High_Climb_HalfSwing = 48, 
	EVaultAnimType::LedgeGrab_High_Vault = 49, 
	EVaultAnimType::LedgeGrab_High_Vault_Swing = 50, 
	EVaultAnimType::LedgeGrab_High_Vault_HalfSwing = 51, 
	EVaultAnimType::LedgeGrab_Low_Climb = 52, 
	EVaultAnimType::LedgeGrab_Low_Climb_Swing = 53, 
	EVaultAnimType::LedgeGrab_Low_Climb_HalfSwing = 54, 
	EVaultAnimType::LedgeGrab_Low_Vault = 55, 
	EVaultAnimType::LedgeGrab_Low_Vault_Swing = 56, 
	EVaultAnimType::LedgeGrab_Low_Vault_HalfSwing = 57, 
	EVaultAnimType::LedgeGrab_Low_Vault_Narrow = 58, 
	EVaultAnimType::LedgeGrab_Low_Vault_HalfSwing_Narrow = 59, 
	EVaultAnimType::LedgeGrab_Low_Vault_Swing_Narrow = 60, 
	EVaultAnimType::LedgeGrab_High_Vault_Narrow = 61, 
	EVaultAnimType::LedgeGrab_High_Vault_HalfSwing_Narrow = 62, 
	EVaultAnimType::LedgeGrab_High_Vault_Swing_Narrow = 63, 
	EVaultAnimType::LedgeGrab_Up_Vault_Narrow = 64, 
	EVaultAnimType::LedgeGrab_Up_Vault_HalfSwing_Narrow = 65, 
	EVaultAnimType::LedgeGrab_Up_Vault_Swing_Narrow = 66, 
	EVaultAnimType::EVaultAnimType_MAX = 67, 
};
//Enum TslGame.EWeaponReloadMethod
enum class FEWeaponReloadMethod : uint8_t
{
	EWeaponReloadMethod::Magazine = 0, 
	EWeaponReloadMethod::OneByOne = 1, 
	EWeaponReloadMethod::OneByOneAndClip = 2, 
	EWeaponReloadMethod::EWeaponReloadMethod_MAX = 3, 
};
//Enum TslGame.EAttackType
enum class FEAttackType : uint8_t
{
	EAttackType::None = 0, 
	EAttackType::Weapon = 1, 
	EAttackType::VehicleCrash = 2, 
	EAttackType::VehicleExplosion = 3, 
	EAttackType::Fall = 4, 
	EAttackType::BlueZone = 5, 
	EAttackType::RedZone = 6, 
	EAttackType::BlackZone = 7, 
	EAttackType::EAttackType_MAX = 8, 
};
//Enum TslGame.EPlayerMoveType
enum class FEPlayerMoveType : uint8_t
{
	EPlayerMoveType::OnFoot = 0, 
	EPlayerMoveType::OnSwim = 1, 
	EPlayerMoveType::OnVehicle = 2, 
	EPlayerMoveType::OnParachute = 3, 
	EPlayerMoveType::OnFreefall = 4, 
	EPlayerMoveType::EPlayerMoveType_MAX = 5, 
};
//Enum TslGame.ELandingSoundSwitchState
enum class FELandingSoundSwitchState : uint8_t
{
	ELandingSoundSwitchState::None = 0, 
	ELandingSoundSwitchState::Light = 1, 
	ELandingSoundSwitchState::Heavy = 2, 
	ELandingSoundSwitchState::VeryHeavy = 3, 
	ELandingSoundSwitchState::ELandingSoundSwitchState_MAX = 4, 
};
//Enum TslGame.EBuffOverlapSolveMethod
enum class FEBuffOverlapSolveMethod : uint8_t
{
	EBuffOverlapSolveMethod::IgnoreLater = 0, 
	EBuffOverlapSolveMethod::Overwrite = 1, 
	EBuffOverlapSolveMethod::RestartTimer = 2, 
	EBuffOverlapSolveMethod::Stack = 3, 
	EBuffOverlapSolveMethod::EBuffOverlapSolveMethod_MAX = 4, 
};
//Enum TslGame.EDamageVictimActorType
enum class FEDamageVictimActorType : uint8_t
{
	EDamageVictimActorType::Character = 0, 
	EDamageVictimActorType::Vehicle = 1, 
	EDamageVictimActorType::Wheel = 2, 
	EDamageVictimActorType::DestructibleActor = 3, 
	EDamageVictimActorType::ExplosiveItem = 4, 
	EDamageVictimActorType::EDamageVictimActorType_MAX = 5, 
};
//Enum TslGame.ECastCancelReason
enum class FECastCancelReason : uint8_t
{
	ECastCancelReason::Invalid = 0, 
	ECastCancelReason::CasterAiming = 1, 
	ECastCancelReason::CasterArming = 2, 
	ECastCancelReason::CasterApnea = 3, 
	ECastCancelReason::CasterSprinting = 4, 
	ECastCancelReason::CasterJumping = 5, 
	ECastCancelReason::CasterFallingLong = 6, 
	ECastCancelReason::CasterFiring = 7, 
	ECastCancelReason::CasterGroggy = 8, 
	ECastCancelReason::CasterGroggyOnZeroTimeCast = 9, 
	ECastCancelReason::CasterHipped = 10, 
	ECastCancelReason::CasterInvalid = 11, 
	ECastCancelReason::CasterNotAlive = 12, 
	ECastCancelReason::CasterPickedUpDroppedItem = 13, 
	ECastCancelReason::CasterPickedUpItemFromPackage = 14, 
	ECastCancelReason::CasterReloading = 15, 
	ECastCancelReason::CasterRolling = 16, 
	ECastCancelReason::CasterTargeting = 17, 
	ECastCancelReason::CasterUnarmAttacking = 18, 
	ECastCancelReason::CasterVault = 19, 
	ECastCancelReason::CastObjectInvalid = 20, 
	ECastCancelReason::CastObjectNotExecutable = 21, 
	ECastCancelReason::FailedCasterMovementDistCheckOnClient = 22, 
	ECastCancelReason::FailedCasterMovementDistCheckOnServer = 23, 
	ECastCancelReason::FailedCasterAndCastObjDistCheckOnClient = 24, 
	ECastCancelReason::FailedCasterAndCastObjDistCheckOnServer = 25, 
	ECastCancelReason::CharacterBeingRevivedDead = 26, 
	ECastCancelReason::ManualCancel = 27, 
	ECastCancelReason::NewCastOnClient = 28, 
	ECastCancelReason::NewCastOnServer = 29, 
	ECastCancelReason::VehicleLanding = 30, 
	ECastCancelReason::VehicleSeatChanged = 31, 
	ECastCancelReason::VehicleMoving = 32, 
	ECastCancelReason::VehicleUpsideDown = 33, 
	ECastCancelReason::ECastCancelReason_MAX = 34, 
};
//Enum TslGame.ETslControllerType
enum class FETslControllerType : uint8_t
{
	ETslControllerType::Mouse = 0, 
	ETslControllerType::GamePad = 1, 
	ETslControllerType::Total = 2, 
	ETslControllerType::ETslControllerType_MAX = 3, 
};
//Enum TslGame.EVoiceInterfaceType
enum class FEVoiceInterfaceType : uint8_t
{
	EVoiceInterfaceType::VIVOX = 0, 
	EVoiceInterfaceType::XIM = 1, 
	EVoiceInterfaceType::GVOICE = 2, 
	EVoiceInterfaceType::EVoiceInterfaceType_MAX = 3, 
};
//Enum TslGame.EVoiceTransmissionType
enum class FEVoiceTransmissionType : uint8_t
{
	EVoiceTransmissionType::None = 0, 
	EVoiceTransmissionType::ToAll = 1, 
	EVoiceTransmissionType::ToChannel = 2, 
	EVoiceTransmissionType::EVoiceTransmissionType_MAX = 3, 
};
//Enum TslGame.EVivoxResponseState
enum class FEVivoxResponseState : uint8_t
{
	EVivoxResponseState::NotRequested = 0, 
	EVivoxResponseState::Requested = 1, 
	EVivoxResponseState::Fail = 2, 
	EVivoxResponseState::Success = 3, 
	EVivoxResponseState::EVivoxResponseState_MAX = 4, 
};
//Enum TslGame.EVoiceChannelType
enum class FEVoiceChannelType : uint8_t
{
	EVoiceChannelType::None = 0, 
	EVoiceChannelType::All = 1, 
	EVoiceChannelType::GlobalOnly = 2, 
	EVoiceChannelType::TeamOnly = 3, 
	EVoiceChannelType::EVoiceChannelType_MAX = 4, 
};
//Enum TslGame.EVoiceChannelJoinState
enum class FEVoiceChannelJoinState : uint8_t
{
	EVoiceChannelJoinState::NotJoined = 0, 
	EVoiceChannelJoinState::Joining = 1, 
	EVoiceChannelJoinState::Leaving = 2, 
	EVoiceChannelJoinState::Joined = 3, 
	EVoiceChannelJoinState::EVoiceChannelJoinState_MAX = 4, 
};
//Enum TslGame.EVoiceLoginState
enum class FEVoiceLoginState : uint8_t
{
	EVoiceLoginState::NotLoggedin = 0, 
	EVoiceLoginState::Loggingin = 1, 
	EVoiceLoginState::Loggedin = 2, 
	EVoiceLoginState::EVoiceLoginState_MAX = 3, 
};
//Enum TslGame.EVoiceConnectionState
enum class FEVoiceConnectionState : uint8_t
{
	EVoiceConnectionState::NotConnected = 0, 
	EVoiceConnectionState::Connecting = 1, 
	EVoiceConnectionState::Connected = 2, 
	EVoiceConnectionState::EVoiceConnectionState_MAX = 3, 
};
//Enum TslGame.EBeginningState
enum class FEBeginningState : uint8_t
{
	EBeginningState::Invalid = 0, 
	EBeginningState::Normal = 1, 
	EBeginningState::StartIsland = 2, 
	EBeginningState::Airplane = 3, 
	EBeginningState::Skydiving = 4, 
	EBeginningState::Parachuting = 5, 
	EBeginningState::EBeginningState_MAX = 6, 
};
//Enum TslGame.ETracerDisplayMode
enum class FETracerDisplayMode : uint8_t
{
	ETracerDisplayMode::TracerDM_None = 0, 
	ETracerDisplayMode::TracerDM_Particle = 1, 
	ETracerDisplayMode::TracerDM_Mesh = 2, 
	ETracerDisplayMode::TracerDM_Billboard = 3, 
	ETracerDisplayMode::TracerDM_MAX = 4, 
};
//Enum TslGame.ESlotOffsetType
enum class FESlotOffsetType : uint8_t
{
	ESlotOffsetType::NoOffset = 0, 
	ESlotOffsetType::BagLevel1 = 1, 
	ESlotOffsetType::BagLevel2 = 2, 
	ESlotOffsetType::BagLevel3 = 3, 
	ESlotOffsetType::ESlotOffsetType_MAX = 4, 
};
//Enum TslGame.EItemSpotGroupType
enum class FEItemSpotGroupType : uint8_t
{
	EItemSpotGroupType::GroupA = 0, 
	EItemSpotGroupType::GroupB = 1, 
	EItemSpotGroupType::GroupC = 2, 
	EItemSpotGroupType::GroupD = 3, 
	EItemSpotGroupType::GroupE = 4, 
	EItemSpotGroupType::GroupF = 5, 
	EItemSpotGroupType::GroupG = 6, 
	EItemSpotGroupType::GroupH = 7, 
	EItemSpotGroupType::GroupI = 8, 
	EItemSpotGroupType::GroupJ = 9, 
	EItemSpotGroupType::EItemSpotGroupType_MAX = 10, 
};
//Enum TslGame.EItemSpotType
enum class FEItemSpotType : uint8_t
{
	EItemSpotType::TypeA = 0, 
	EItemSpotType::TypeB = 1, 
	EItemSpotType::TypeC = 2, 
	EItemSpotType::TypeD = 3, 
	EItemSpotType::TypeE = 4, 
	EItemSpotType::TypeF = 5, 
	EItemSpotType::EItemSpotType_MAX = 6, 
};
//Enum TslGame.EEquipableItemLevelType
enum class FEEquipableItemLevelType : uint8_t
{
	EEquipableItemLevelType::None = 0, 
	EEquipableItemLevelType::Level1 = 1, 
	EEquipableItemLevelType::Level2 = 2, 
	EEquipableItemLevelType::Level3 = 3, 
	EEquipableItemLevelType::EEquipableItemLevelType_MAX = 4, 
};
//Enum TslGame.EConstraintSlotType
enum class FEConstraintSlotType : uint8_t
{
	EConstraintSlotType::Block = 0, 
	EConstraintSlotType::Hide = 1, 
	EConstraintSlotType::Max = 2, 
	EConstraintSlotType::EConstraintSlotType_MAX = 3, 
};
//Enum TslGame.EDurabilityConsumeType
enum class FEDurabilityConsumeType : uint8_t
{
	EDurabilityConsumeType::TotalDamage = 0, 
	EDurabilityConsumeType::AbsorbDamage = 1, 
	EDurabilityConsumeType::EDurabilityConsumeType_MAX = 2, 
};
//Enum TslGame.ESandboxGroypType
enum class FESandboxGroypType : uint8_t
{
	ESandboxGroypType::Weapon = 0, 
	ESandboxGroypType::Item = 1, 
	ESandboxGroypType::Vehicle = 2, 
	ESandboxGroypType::ESandboxGroypType_MAX = 3, 
};
//Enum TslGame.ESandboxPowerType
enum class FESandboxPowerType : uint8_t
{
	ESandboxPowerType::None = 0, 
	ESandboxPowerType::Fly = 1, 
	ESandboxPowerType::InvulnerableEffect = 2, 
	ESandboxPowerType::CarePackage = 3, 
	ESandboxPowerType::RedZone = 4, 
	ESandboxPowerType::ESandboxPowerType_MAX = 5, 
};
//Enum TslGame.EImpactType
enum class FEImpactType : uint8_t
{
	EImpactType::Splatter = 0, 
	EImpactType::Smear = 1, 
	EImpactType::EImpactType_MAX = 2, 
};
//Enum TslGame.EDestrucibleSurfaceSourceType
enum class FEDestrucibleSurfaceSourceType : uint8_t
{
	EDestrucibleSurfaceSourceType::Unknown = 0, 
	EDestrucibleSurfaceSourceType::Projectile = 1, 
	EDestrucibleSurfaceSourceType::Grenade = 2, 
	EDestrucibleSurfaceSourceType::Warhead = 3, 
	EDestrucibleSurfaceSourceType::Slashing = 4, 
	EDestrucibleSurfaceSourceType::EDestrucibleSurfaceSourceType_MAX = 5, 
};
//Enum TslGame.EAttachParent
enum class FEAttachParent : uint8_t
{
	EAttachParent::None = 0, 
	EAttachParent::Character = 1, 
	EAttachParent::WeaponGun = 2, 
	EAttachParent::EAttachParent_MAX = 3, 
};
//Enum TslGame.EDoorState
enum class FEDoorState : uint8_t
{
	EDoorState::Closed = 0, 
	EDoorState::Closing = 1, 
	EDoorState::Opened = 2, 
	EDoorState::Opening = 3, 
	EDoorState::EDoorState_MAX = 4, 
};
//Enum TslGame.EScopeType
enum class FEScopeType : uint8_t
{
	EScopeType::Main = 0, 
	EScopeType::Right = 1, 
	EScopeType::Total = 2, 
	EScopeType::None = 3, 
	EScopeType::EScopeType_MAX = 4, 
};
//Enum TslGame.EWeaponReloadCancelReason
enum class FEWeaponReloadCancelReason : uint8_t
{
	EWeaponReloadCancelReason::Default = 0, 
	EWeaponReloadCancelReason::PlayerInterrupted = 1, 
	EWeaponReloadCancelReason::PlayerMovement = 2, 
	EWeaponReloadCancelReason::PlayerInteraction = 3, 
	EWeaponReloadCancelReason::WeaponSwitch = 4, 
	EWeaponReloadCancelReason::PlayerIncapacitated = 5, 
	EWeaponReloadCancelReason::EWeaponReloadCancelReason_MAX = 6, 
};
//Enum TslGame.EWeaponReloadAnimExec
enum class FEWeaponReloadAnimExec : uint8_t
{
	EWeaponReloadAnimExec::Tactical = 0, 
	EWeaponReloadAnimExec::Charge = 1, 
	EWeaponReloadAnimExec::Single = 2, 
	EWeaponReloadAnimExec::Loop = 3, 
	EWeaponReloadAnimExec::EWeaponReloadAnimExec_MAX = 4, 
};
//Enum TslGame.EWeaponState
enum class FEWeaponState : uint8_t
{
	EWeaponState::Idle = 0, 
	EWeaponState::Firing = 1, 
	EWeaponState::Reloading = 2, 
	EWeaponState::EWeaponState_MAX = 3, 
};
//Enum TslGame.EWeaponTransitionState
enum class FEWeaponTransitionState : uint8_t
{
	EWeaponTransitionState::Stable = 0, 
	EWeaponTransitionState::Arming_Right = 1, 
	EWeaponTransitionState::UnArming_Right = 2, 
	EWeaponTransitionState::Arming_Left = 3, 
	EWeaponTransitionState::UnArming_Left = 4, 
	EWeaponTransitionState::EWeaponTransitionState_MAX = 5, 
};
//Enum TslGame.ECheatType
enum class FECheatType : uint8_t
{
	SpeedHack = 0, 
	SpeedHack_UE = 1, 
	IgnoreWall_Hit = 2, 
	IgnoreWall_Sight = 3, 
	IgnoreVelocity_Hit = 4, 
	ItemPackage = 5, 
	CarePackageMount = 6, 
	HitLag = 7, 
	Aimbot = 8, 
	InvalidImpact = 9, 
	InvalidImpactZ = 10, 
	InvalidImpact_Gun_C = 11, 
	InvalidOrigin_Gun = 12, 
	InvalidOrigin_Melee = 13, 
	InvalidOrigin_Punch = 14, 
	InvalidOrigin_Throwable = 15, 
	InvalidOrigin_MeleeThrow = 16, 
	InvalidSimStep_MeleeThrow = 17, 
	InvalidRange = 18, 
	InvalidRange2 = 19, 
	InvalidSequence = 20, 
	InvalidAmmo = 21, 
	InvalidReviving = 22, 
	InvalidKick = 23, 
	InvalidA0 = 24, 
	InvalidB0 = 25, 
	InvalidB1 = 26, 
	InvalidB1 = 27, 
	InvalidH0 = 28, 
	InvalidOrigin_Gun_C = 29, 
	InvalidD0 = 30, 
	InvalidD1 = 31, 
	InvalidS0 = 32, 
	InvalidS1 = 33, 
	InvalidH1 = 34, 
	InvalidH2 = 35, 
	InvalidH3 = 36, 
	InvalidC0 = 37, 
	InvalidC1 = 38, 
	InvalidC2 = 39, 
	InvalidC3 = 40, 
	InvalidC4 = 41, 
	InvalidC5 = 42, 
	InvalidC6 = 43, 
	InvalidC7 = 44, 
	InvalidT0 = 45, 
	InvalidT1 = 46, 
	InvalidT2 = 47, 
	CHKSUM_GUN = 48, 
	CHKSUM_PUNCH = 49, 
	CHKSUM_MELEE = 50, 
	CHKSUM_VEHICLE = 51, 
	CHKSUM_A0 = 52, 
	CHKSUM_T0 = 53, 
	CHKSUM_S0 = 54, 
	CHKSUM_D0 = 55, 
	CHKSUM_V0 = 56, 
	CHKSUM_W0 = 57, 
	CHKSUM_T1 = 58, 
	CHKSUM_D1 = 59, 
	CHKSUM_CD = 60, 
	CHKSUM_LC = 61, 
	CHKSUM_V1 = 62, 
	CHKSUM_P0 = 63, 
	CHKSUM_BP = 64, 
	CHKSUM_G0 = 65, 
	CHKSUM_G1 = 66, 
	CHKSUM_H2 = 67, 
	CHKSUM_H3 = 68, 
	CHKSUM_UO = 69, 
	CHKSUM_UF = 70, 
	VHC_RI = 71, 
	VHC_SC = 72, 
	VHC_MG = 73, 
	VHC_MG_FF = 74, 
	VHC_MG_FC = 75, 
	VHC_MG_SW = 76, 
	VHC_MG_OS = 77, 
	VHC_MG_BC = 78, 
	VHC_MG_TC = 79, 
	VHC_MG_PL = 80, 
	VHC_MG_HL = 81, 
	VHC_MGB = 82, 
	VHC_MGB_FF = 83, 
	VHC_MGB_FC = 84, 
	VHC_MGB_OS = 85, 
	VHC_MGB_BC = 86, 
	VHC_MGB_TC = 87, 
	VHC_MGB_PL = 88, 
	VHC_MGB_HL = 89, 
	VHC_KILL = 90, 
	VHC_ED = 91, 
	CP_RZ = 92, 
	CP_RZD = 93, 
	KGB_FP = 94, 
	KGB_AF = 95, 
	KGB_AH = 96, 
	KGB_AH_NA = 97, 
	ESP1 = 98, 
	ESP2 = 99, 
	ESP3 = 100, 
	SimilarHit = 101, 
	DoubleKill = 102, 
	B0Log = 103, 
	ECheatType_MAX = 104, 
};
//Enum TslGame.EEmoteAnimType
enum class FEEmoteAnimType : uint8_t
{
	EEmoteAnimType::EmoteFullBody = 0, 
	EEmoteAnimType::EmoteUpperBody = 1, 
	EEmoteAnimType::EmoteArm = 2, 
	EEmoteAnimType::EEmoteAnimType_MAX = 3, 
};
//Enum TslGame.EParachuteLandingSurfaceType
enum class FEParachuteLandingSurfaceType : uint8_t
{
	EParachuteLandingSurfaceType::Surface_None = 0, 
	EParachuteLandingSurfaceType::Surface_Vertical = 1, 
	EParachuteLandingSurfaceType::Surface_Horizontal = 2, 
	EParachuteLandingSurfaceType::Surface_MAX = 3, 
};
//Enum TslGame.GamepadHudDataType
enum class FGamepadHudDataType : uint8_t
{
	GamepadHudDataType::EFloat = 0, 
	GamepadHudDataType::EBool = 1, 
	GamepadHudDataType::EFString = 2, 
	GamepadHudDataType::GamepadHudDataType_MAX = 3, 
};
//Enum TslGame.ELoadingScreenType
enum class FELoadingScreenType : uint8_t
{
	ELoadingScreenType::NONE = 0, 
	ELoadingScreenType::ICE_BRAKE = 1, 
	ELoadingScreenType::RULE_SET = 2, 
	ELoadingScreenType::WEAPON = 3, 
	ELoadingScreenType::ATTACHMENT = 4, 
	ELoadingScreenType::EQUIPMENT = 5, 
	ELoadingScreenType::ITEM = 6, 
	ELoadingScreenType::VEHICLE = 7, 
	ELoadingScreenType::SYSTEM = 8, 
	ELoadingScreenType::DEFAULT = 9, 
	ELoadingScreenType::EXPOSE_WITH_HIGHEST_PRIORITY = 10, 
	ELoadingScreenType::ELoadingScreenType_MAX = 11, 
};
//Enum MovieSceneCapture.EHDRCaptureGamut
enum class FEHDRCaptureGamut : uint8_t
{
	HCGM_Rec709 = 0, 
	HCGM_P3DCI = 1, 
	HCGM_Rec2020 = 2, 
	HCGM_ACES = 3, 
	HCGM_ACEScg = 4, 
	HCGM_MAX = 5, 
};
//Enum ClothingSystemRuntime.EClothingWindMethod
enum class FEClothingWindMethod : uint8_t
{
	EClothingWindMethod::Legacy = 0, 
	EClothingWindMethod::Accurate = 1, 
	EClothingWindMethod::EClothingWindMethod_MAX = 2, 
};
//Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class FMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh::None = 0, 
	MaskTarget_PhysMesh::MaxDistance = 1, 
	MaskTarget_PhysMesh::BackstopDistance = 2, 
	MaskTarget_PhysMesh::BackstopRadius = 3, 
	MaskTarget_PhysMesh::MaskTarget_MAX = 4, 
};
//Enum Landscape.ELandscapeGizmoType
enum class FELandscapeGizmoType : uint8_t
{
	LGT_None = 0, 
	LGT_Height = 1, 
	LGT_Weight = 2, 
	LGT_MAX = 3, 
};
//Enum Landscape.EGrassScaling
enum class FEGrassScaling : uint8_t
{
	EGrassScaling::Uniform = 0, 
	EGrassScaling::Free = 1, 
	EGrassScaling::LockXY = 2, 
	EGrassScaling::EGrassScaling_MAX = 3, 
};
//Enum Landscape.ELandscapeLODFalloff
enum class FELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff::Linear = 0, 
	ELandscapeLODFalloff::SquareRoot = 1, 
	ELandscapeLODFalloff::ELandscapeLODFalloff_MAX = 2, 
};
//Enum Landscape.ELandscapeLayerDisplayMode
enum class FELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode::Default = 0, 
	ELandscapeLayerDisplayMode::Alphabetical = 1, 
	ELandscapeLayerDisplayMode::UserSpecific = 2, 
	ELandscapeLayerDisplayMode::ELandscapeLayerDisplayMode_MAX = 3, 
};
//Enum Landscape.ELandscapeLayerPaintingRestriction
enum class FELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction::None = 0, 
	ELandscapeLayerPaintingRestriction::UseMaxLayers = 1, 
	ELandscapeLayerPaintingRestriction::ExistingOnly = 2, 
	ELandscapeLayerPaintingRestriction::UseComponentWhitelist = 3, 
	ELandscapeLayerPaintingRestriction::ELandscapeLayerPaintingRestriction_MAX = 4, 
};
//Enum Landscape.ELandscapeImportAlphamapType
enum class FELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType::Additive = 0, 
	ELandscapeImportAlphamapType::Layered = 1, 
	ELandscapeImportAlphamapType::ELandscapeImportAlphamapType_MAX = 2, 
};
//Enum Landscape.ELandscapeSetupErrors
enum class FELandscapeSetupErrors : uint8_t
{
	LSE_None = 0, 
	LSE_NoLandscapeInfo = 1, 
	LSE_CollsionXY = 2, 
	LSE_NoLayerInfo = 3, 
	LSE_MAX = 4, 
};
//Enum Landscape.LandscapeSplineMeshOrientation
enum class FLandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp = 0, 
	LSMO_YUp = 1, 
	LSMO_MAX = 2, 
};
//Enum Landscape.ELandscapeLayerBlendType
enum class FELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend = 0, 
	LB_AlphaBlend = 1, 
	LB_HeightBlend = 2, 
	LB_MAX = 3, 
};
//Enum Landscape.ELandscapeCustomizedCoordType
enum class FELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None = 0, 
	LCCT_CustomUV0 = 1, 
	LCCT_CustomUV1 = 2, 
	LCCT_CustomUV2 = 3, 
	LCCT_WeightMapUV = 4, 
	LCCT_MAX = 5, 
};
//Enum Landscape.ETerrainCoordMappingType
enum class FETerrainCoordMappingType : uint8_t
{
	TCMT_Auto = 0, 
	TCMT_XY = 1, 
	TCMT_XZ = 2, 
	TCMT_YZ = 3, 
	TCMT_MAX = 4, 
};
//Enum TslGame.ERandomPointSelect
enum class FERandomPointSelect : uint8_t
{
	ERandomPointSelect::NavPoint = 0, 
	ERandomPointSelect::NavPointInRadius = 1, 
	ERandomPointSelect::ReachableNavPointInRadius = 2, 
	ERandomPointSelect::ERandomPointSelect_MAX = 3, 
};
//Enum TslGame.ENpcDirection
enum class FENpcDirection : uint8_t
{
	ENpcDirection::Forward = 0, 
	ENpcDirection::Backward = 1, 
	ENpcDirection::Left = 2, 
	ENpcDirection::Right = 3, 
	ENpcDirection::ForwardRight = 4, 
	ENpcDirection::BackwardRight = 5, 
	ENpcDirection::BackwardLeft = 6, 
	ENpcDirection::ForwardLeft = 7, 
	ENpcDirection::ENpcDirection_MAX = 8, 
};
//Enum TslGame.ENpcWalkingSpeedType
enum class FENpcWalkingSpeedType : uint8_t
{
	ENpcWalkingSpeedType::Idle = 0, 
	ENpcWalkingSpeedType::Walk = 1, 
	ENpcWalkingSpeedType::Run = 2, 
	ENpcWalkingSpeedType::Sprint = 3, 
	ENpcWalkingSpeedType::ENpcWalkingSpeedType_MAX = 4, 
};
//Enum TslGame.ENpcCharacterStateType
enum class FENpcCharacterStateType : uint8_t
{
	ENpcCharacterStateType::Default = 0, 
	ENpcCharacterStateType::Respawn = 1, 
	ENpcCharacterStateType::Fire1 = 2, 
	ENpcCharacterStateType::Fire2 = 3, 
	ENpcCharacterStateType::Fire3 = 4, 
	ENpcCharacterStateType::Knockback = 5, 
	ENpcCharacterStateType::Knockdown = 6, 
	ENpcCharacterStateType::Getup = 7, 
	ENpcCharacterStateType::ENpcCharacterStateType_MAX = 8, 
};
//Enum TslGame.ERandomType
enum class FERandomType : uint8_t
{
	ERandomType::Random = 0, 
	ERandomType::Shuffle = 1, 
	ERandomType::Ascending = 2, 
	ERandomType::Descending = 3, 
	ERandomType::ERandomType_MAX = 4, 
};
//Enum TslGame.ECustomAnimDataType
enum class FECustomAnimDataType : uint8_t
{
	ECustomAnimDataType::CustomAnimData = 0, 
	ECustomAnimDataType::AnimSequence = 1, 
	ECustomAnimDataType::ECustomAnimDataType_MAX = 2, 
};
//Enum TslGame.ECustomAnimSlotType
enum class FECustomAnimSlotType : uint8_t
{
	ECustomAnimSlotType::FullBody = 0, 
	ECustomAnimSlotType::UpperBody = 1, 
	ECustomAnimSlotType::FullBodyInstance = 2, 
	ECustomAnimSlotType::UpperBodyInstance = 3, 
	ECustomAnimSlotType::LowerBody = 4, 
	ECustomAnimSlotType::ECustomAnimSlotType_MAX = 5, 
};
//Enum TslGame.ERetriggerCounter
enum class FERetriggerCounter : uint8_t
{
	ERetriggerCounter::First = 0, 
	ERetriggerCounter::Sec = 1, 
	ERetriggerCounter::Third = 2, 
	ERetriggerCounter::Fourth = 3, 
	ERetriggerCounter::ERetriggerCounter_MAX = 4, 
};
//Enum TslGame.EPathDebugType
enum class FEPathDebugType : uint8_t
{
	EPathDebugType::None = 0, 
	EPathDebugType::Location = 1, 
	EPathDebugType::SelectNpc = 2, 
	EPathDebugType::EPathDebugType_MAX = 3, 
};
//Enum TslGame.EThrowableState
enum class FEThrowableState : uint8_t
{
	EThrowableState::Idle = 0, 
	EThrowableState::PinOff = 1, 
	EThrowableState::Cooking = 2, 
	EThrowableState::Throw = 3, 
	EThrowableState::Dropped = 4, 
	EThrowableState::EThrowableState_MAX = 5, 
};
//Enum TslGame.EProjectileExplosionStartType
enum class FEProjectileExplosionStartType : uint8_t
{
	EProjectileExplosionStartType::NotStart = 0, 
	EProjectileExplosionStartType::Impact = 1, 
	EProjectileExplosionStartType::Delay = 2, 
	EProjectileExplosionStartType::ImpactOrDelay = 3, 
	EProjectileExplosionStartType::EProjectileExplosionStartType_MAX = 4, 
};
//Enum TslGame.EProjectileExplodeState
enum class FEProjectileExplodeState : uint8_t
{
	EProjectileExplodeState::NotExplode = 0, 
	EProjectileExplodeState::ImpactExplode = 1, 
	EProjectileExplodeState::TimerExplode = 2, 
	EProjectileExplodeState::EProjectileExplodeState_MAX = 3, 
};
//Enum TslGame.EProjectileExplosionRotationType
enum class FEProjectileExplosionRotationType : uint8_t
{
	EProjectileExplosionRotationType::ProjectileUpVector = 0, 
	EProjectileExplosionRotationType::WorldUpVector = 1, 
	EProjectileExplosionRotationType::ProjectileForwardVector = 2, 
	EProjectileExplosionRotationType::EProjectileExplosionRotationType_MAX = 3, 
};
//Enum TslGame.EHornSoundType
enum class FEHornSoundType : uint8_t
{
	EHornSoundType::HornOn = 0, 
	EHornSoundType::HornOff = 1, 
	EHornSoundType::InstantHorn = 2, 
	EHornSoundType::EHornSoundType_MAX = 3, 
};
//Enum TslGame.EVehicleAnimType
enum class FEVehicleAnimType : uint8_t
{
	EVehicleAnimType::DefaultDriver = 0, 
	EVehicleAnimType::DefaultPassenger = 1, 
	EVehicleAnimType::BuggyDriver = 2, 
	EVehicleAnimType::BuggyPassenger = 3, 
	EVehicleAnimType::DaciaDriver = 4, 
	EVehicleAnimType::DaciaPassengerFR = 5, 
	EVehicleAnimType::DaciaPassengerBL = 6, 
	EVehicleAnimType::DaciaPassengerBC = 7, 
	EVehicleAnimType::DaciaPassengerBR = 8, 
	EVehicleAnimType::UazDriver = 9, 
	EVehicleAnimType::UazPassengerFR = 10, 
	EVehicleAnimType::UazPassengerBL = 11, 
	EVehicleAnimType::UazPassengerBC = 12, 
	EVehicleAnimType::UazPassengerBR = 13, 
	EVehicleAnimType::BoatDriver = 14, 
	EVehicleAnimType::BoatPassengerFR = 15, 
	EVehicleAnimType::BoatPassengerBL = 16, 
	EVehicleAnimType::BoatPassengerBC = 17, 
	EVehicleAnimType::BoatPassengerBR = 18, 
	EVehicleAnimType::MotoDriver = 19, 
	EVehicleAnimType::MotoPassenger = 20, 
	EVehicleAnimType::MotoSidecar = 21, 
	EVehicleAnimType::MotoDriverSidecar = 22, 
	EVehicleAnimType::MotoPassengerSidecar = 23, 
	EVehicleAnimType::AircraftPassenger = 24, 
	EVehicleAnimType::JetskiDriver = 25, 
	EVehicleAnimType::JetskiPassenger = 26, 
	EVehicleAnimType::PickupTruckDriver = 27, 
	EVehicleAnimType::PickupTruckPassengerFR = 28, 
	EVehicleAnimType::PickupTruckPassengerBL_Open = 29, 
	EVehicleAnimType::PickupTruckPassengerBR_Open = 30, 
	EVehicleAnimType::PickupTruckPassengerBL_Closed = 31, 
	EVehicleAnimType::PickupTruckPassengerBR_Closed = 32, 
	EVehicleAnimType::MinibusDriver = 33, 
	EVehicleAnimType::MinibusPassengerFR = 34, 
	EVehicleAnimType::MinibusPassengerML = 35, 
	EVehicleAnimType::MinibusPassengerMR = 36, 
	EVehicleAnimType::MinibusPassengerBL = 37, 
	EVehicleAnimType::MinibusPassengerBR = 38, 
	EVehicleAnimType::MiradoDriver = 39, 
	EVehicleAnimType::MiradoFR = 40, 
	EVehicleAnimType::MiradoRL = 41, 
	EVehicleAnimType::MiradoRR = 42, 
	EVehicleAnimType::ScooterPassenger = 43, 
	EVehicleAnimType::TukDriver = 44, 
	EVehicleAnimType::RonyDriver = 45, 
	EVehicleAnimType::Snowmobile_Passenger = 46, 
	EVehicleAnimType::YetiDriver = 47, 
	EVehicleAnimType::YetiPassenger = 48, 
	EVehicleAnimType::LadaNivaDriver = 49, 
	EVehicleAnimType::BRDM_Driver = 50, 
	EVehicleAnimType::BRDM_Passenger = 51, 
	EVehicleAnimType::Motorglider_Pilot = 52, 
	EVehicleAnimType::Motorglider_Passenger = 53, 
	EVehicleAnimType::EVehicleAnimType_MAX = 54, 
};
//Enum TslGame.ERiderType
enum class FERiderType : uint8_t
{
	ERiderType::Driver = 0, 
	ERiderType::Passenger = 1, 
	ERiderType::ERiderType_MAX = 2, 
};
//Enum TslGame.EThingGroupSpawnType
enum class FEThingGroupSpawnType : uint8_t
{
	EThingGroupSpawnType::None = 0, 
	EThingGroupSpawnType::Probability = 1, 
	EThingGroupSpawnType::TotalCount = 2, 
	EThingGroupSpawnType::EThingGroupSpawnType_MAX = 3, 
};
//Enum TslGame.EVehicleEngineState
enum class FEVehicleEngineState : uint8_t
{
	EVehicleEngineState::EEngineStateAutoOff = 0, 
	EVehicleEngineState::EEngineStateAutoOn = 1, 
	EVehicleEngineState::EEngineStateManualOff = 2, 
	EVehicleEngineState::EEngineStateManualOn = 3, 
	EVehicleEngineState::EVehicleEngineState_MAX = 4, 
};
//Enum TslGame.ETirePunctureReason
enum class FETirePunctureReason : uint8_t
{
	ETirePunctureReason::Shot = 0, 
	ETirePunctureReason::Environment = 1, 
	ETirePunctureReason::Explosion = 2, 
	ETirePunctureReason::PanzerFaustExplosion = 3, 
	ETirePunctureReason::Other = 4, 
	ETirePunctureReason::ETirePunctureReason_MAX = 5, 
};
//Enum TslGame.EWheelContactType
enum class FEWheelContactType : uint8_t
{
	WCT_Static = 0, 
	WCT_Roll = 1, 
	WCT_LatSlip = 2, 
	WCT_LongSlip = 3, 
	WCT_MAX = 4, 
};
//Enum TslGame.EAnimShieldState
enum class FEAnimShieldState : uint8_t
{
	EAnimShieldState::SS_Hip = 0, 
	EAnimShieldState::SS_Block = 1, 
	EAnimShieldState::SS_ADS = 2, 
	EAnimShieldState::SS_MAX = 3, 
};
//Enum TslGame.EAnimPawnState
enum class FEAnimPawnState : uint8_t
{
	EAnimPawnState::PS_OnFoot = 0, 
	EAnimPawnState::PS_VehicleDriver = 1, 
	EAnimPawnState::PS_VehiclePassenger = 2, 
	EAnimPawnState::PS_Freefall = 3, 
	EAnimPawnState::PS_Parachute = 4, 
	EAnimPawnState::PS_Swim = 5, 
	EAnimPawnState::PS_DBNO = 6, 
	EAnimPawnState::PS_Reviving = 7, 
	EAnimPawnState::PS_Flying = 8, 
	EAnimPawnState::PS_ActiveRagdoll = 9, 
	EAnimPawnState::PS_MAX = 10, 
};
//Enum TslGame.EHoldButtonWidgetType
enum class FEHoldButtonWidgetType : uint8_t
{
	EHoldButtonWidgetType::EHoldButtonWidgetType_X = 0, 
	EHoldButtonWidgetType::EHoldButtonWidgetType_Y = 1, 
	EHoldButtonWidgetType::EHoldButtonWidgetType_A = 2, 
	EHoldButtonWidgetType::EHoldButtonWidgetType_B = 3, 
	EHoldButtonWidgetType::EHoldButtonWidgetType_MAX = 4, 
};
//Enum TslGame.EDamageFieldType
enum class FEDamageFieldType : uint8_t
{
	EDamageFieldType::Default = 0, 
	EDamageFieldType::DirectTick = 1, 
	EDamageFieldType::EDamageFieldType_MAX = 2, 
};
//Enum TslGame.EDynamicWeather
enum class FEDynamicWeather : uint8_t
{
	EDynamicWeather::NotInitialized = 0, 
	EDynamicWeather::Initialized = 1, 
	EDynamicWeather::BlendInStarted = 2, 
	EDynamicWeather::Saturated = 3, 
	EDynamicWeather::BlendOutStarted = 4, 
	EDynamicWeather::BlendOutEnded = 5, 
	EDynamicWeather::Finished = 6, 
	EDynamicWeather::EDynamicWeather_MAX = 7, 
};
//Enum TslGame.EEffectSpreadState
enum class FEEffectSpreadState : uint8_t
{
	EEffectSpreadState::ESS_InitialTrace = 0, 
	EEffectSpreadState::ESS_InitialProcess = 1, 
	EEffectSpreadState::ESS_Spreading = 2, 
	EEffectSpreadState::ESS_SpreadDone = 3, 
	EEffectSpreadState::ESS_Ending = 4, 
	EEffectSpreadState::ESS_MAX = 5, 
};
//Enum TslGame.ETslFenceSelector
enum class FETslFenceSelector : uint8_t
{
	ETslFenceSelector::None = 0, 
	ETslFenceSelector::Use = 1, 
	ETslFenceSelector::Use = 2, 
	ETslFenceSelector::Use = 3, 
	ETslFenceSelector::Use = 4, 
	ETslFenceSelector::ETslFenceSelector_MAX = 5, 
};
//Enum TslGame.EReactionObjectType
enum class FEReactionObjectType : uint8_t
{
	EReactionObjectType::Fence = 0, 
	EReactionObjectType::Hay = 1, 
	EReactionObjectType::Camera = 2, 
	EReactionObjectType::EReactionObjectType_MAX = 3, 
};
//Enum TslGame.EReactionType
enum class FEReactionType : uint8_t
{
	EReactionType::Reaciton_None = 0, 
	EReactionType::Reaction_Physics = 1, 
	EReactionType::Reaction_Destructible = 2, 
	EReactionType::EReactionType_MAX = 3, 
};
//Enum TslGame.EWarModeCarePackageKitType
enum class FEWarModeCarePackageKitType : uint8_t
{
	EWarModeCarePackageKitType::CarepackageKit_Off = 0, 
	EWarModeCarePackageKitType::CarepackageKit_Basic = 1, 
	EWarModeCarePackageKitType::CarepackageKit_ARKit = 2, 
	EWarModeCarePackageKitType::CarepackageKit_SRKit = 3, 
	EWarModeCarePackageKitType::CarepackageKit_MAX = 4, 
};
//Enum TslGame.ETslGameOptionKeyBindingType
enum class FETslGameOptionKeyBindingType : uint8_t
{
	ETslGameOptionKeyBindingType::None = 0, 
	ETslGameOptionKeyBindingType::Action = 1, 
	ETslGameOptionKeyBindingType::Axis = 2, 
	ETslGameOptionKeyBindingType::ETslGameOptionKeyBindingType_MAX = 3, 
};
//Enum TslGame.ETslGameOptionSupplementaryType
enum class FETslGameOptionSupplementaryType : uint8_t
{
	ETslGameOptionSupplementaryType::None = 0, 
	ETslGameOptionSupplementaryType::KeyboardLayout = 1, 
	ETslGameOptionSupplementaryType::PreviewImage = 2, 
	ETslGameOptionSupplementaryType::PreviewCrosshair = 3, 
	ETslGameOptionSupplementaryType::VolumeUnitMeter = 4, 
	ETslGameOptionSupplementaryType::ETslGameOptionSupplementaryType_MAX = 5, 
};
//Enum TslGame.ENaviGamepadInputType
enum class FENaviGamepadInputType : uint8_t
{
	ENaviGamepadInputType::DPad_Pressed = 0, 
	ENaviGamepadInputType::DPad_Released = 1, 
	ENaviGamepadInputType::Axis = 2, 
	ENaviGamepadInputType::Axis_Hold = 3, 
	ENaviGamepadInputType::ENaviGamepadInputType_MAX = 4, 
};
//Enum TslGame.ETslGMCommandInGameHelperButtonType
enum class FETslGMCommandInGameHelperButtonType : uint8_t
{
	ETslGMCommandInGameHelperButtonType::NO_PARAM = 0, 
	ETslGMCommandInGameHelperButtonType::ONE_PARAM = 1, 
	ETslGMCommandInGameHelperButtonType::ETslGMCommandInGameHelperButtonType_MAX = 2, 
};
//Enum AIModule.EAITaskPriority
enum class FEAITaskPriority : uint8_t
{
	EAITaskPriority::Lowest = 0, 
	EAITaskPriority::Low = 1, 
	EAITaskPriority::AutonomousAI = 2, 
	EAITaskPriority::High = 3, 
	EAITaskPriority::Ultimate = 4, 
	EAITaskPriority::EAITaskPriority_MAX = 5, 
};
//Enum AIModule.EBTFlowAbortMode
enum class FEBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode::None = 0, 
	EBTFlowAbortMode::LowerPriority = 1, 
	EBTFlowAbortMode::Self = 2, 
	EBTFlowAbortMode::Both = 3, 
	EBTFlowAbortMode::EBTFlowAbortMode_MAX = 4, 
};
//Enum AIModule.EBTNodeResult
enum class FEBTNodeResult : uint8_t
{
	EBTNodeResult::Succeeded = 0, 
	EBTNodeResult::Failed = 1, 
	EBTNodeResult::Aborted = 2, 
	EBTNodeResult::InProgress = 3, 
	EBTNodeResult::EBTNodeResult_MAX = 4, 
};
//Enum AIModule.EEnvQueryTestClamping
enum class FEEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping::None = 0, 
	EEnvQueryTestClamping::SpecifiedValue = 1, 
	EEnvQueryTestClamping::FilterThreshold = 2, 
	EEnvQueryTestClamping::EEnvQueryTestClamping_MAX = 3, 
};
//Enum AIModule.EEnvDirection
enum class FEEnvDirection : uint8_t
{
	EEnvDirection::TwoPoints = 0, 
	EEnvDirection::Rotation = 1, 
	EEnvDirection::EEnvDirection_MAX = 2, 
};
//Enum AIModule.EEnvOverlapShape
enum class FEEnvOverlapShape : uint8_t
{
	EEnvOverlapShape::Box = 0, 
	EEnvOverlapShape::Sphere = 1, 
	EEnvOverlapShape::Capsule = 2, 
	EEnvOverlapShape::EEnvOverlapShape_MAX = 3, 
};
//Enum AIModule.EEnvTraceShape
enum class FEEnvTraceShape : uint8_t
{
	EEnvTraceShape::Line = 0, 
	EEnvTraceShape::Box = 1, 
	EEnvTraceShape::Sphere = 2, 
	EEnvTraceShape::Capsule = 3, 
	EEnvTraceShape::EEnvTraceShape_MAX = 4, 
};
//Enum AIModule.EEnvQueryTrace
enum class FEEnvQueryTrace : uint8_t
{
	EEnvQueryTrace::None = 0, 
	EEnvQueryTrace::Navigation = 1, 
	EEnvQueryTrace::Geometry = 2, 
	EEnvQueryTrace::NavigationOverLedges = 3, 
	EEnvQueryTrace::EEnvQueryTrace_MAX = 4, 
};
//Enum AIModule.EAIParamType
enum class FEAIParamType : uint8_t
{
	EAIParamType::Float = 0, 
	EAIParamType::Int = 1, 
	EAIParamType::Bool = 2, 
	EAIParamType::EAIParamType_MAX = 3, 
};
//Enum AIModule.EEnvQueryParam
enum class FEEnvQueryParam : uint8_t
{
	EEnvQueryParam::Float = 0, 
	EEnvQueryParam::Int = 1, 
	EEnvQueryParam::Bool = 2, 
	EEnvQueryParam::EEnvQueryParam_MAX = 3, 
};
//Enum AIModule.EEnvQueryRunMode
enum class FEEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode::SingleResult = 0, 
	EEnvQueryRunMode::RandomBest5Pct = 1, 
	EEnvQueryRunMode::RandomBest25Pct = 2, 
	EEnvQueryRunMode::AllMatching = 3, 
	EEnvQueryRunMode::EEnvQueryRunMode_MAX = 4, 
};
//Enum AIModule.EEnvTestScoreOperator
enum class FEEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator::AverageScore = 0, 
	EEnvTestScoreOperator::MinScore = 1, 
	EEnvTestScoreOperator::MaxScore = 2, 
	EEnvTestScoreOperator::EEnvTestScoreOperator_MAX = 3, 
};
//Enum AIModule.EEnvTestFilterOperator
enum class FEEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator::AllPass = 0, 
	EEnvTestFilterOperator::AnyPass = 1, 
	EEnvTestFilterOperator::EEnvTestFilterOperator_MAX = 2, 
};
//Enum AIModule.EEnvTestCost
enum class FEEnvTestCost : uint8_t
{
	EEnvTestCost::Low = 0, 
	EEnvTestCost::Medium = 1, 
	EEnvTestCost::High = 2, 
	EEnvTestCost::EEnvTestCost_MAX = 3, 
};
//Enum AIModule.EEnvTestWeight
enum class FEEnvTestWeight : uint8_t
{
	EEnvTestWeight::None = 0, 
	EEnvTestWeight::Square = 1, 
	EEnvTestWeight::Inverse = 2, 
	EEnvTestWeight::Unused = 3, 
	EEnvTestWeight::Constant = 4, 
	EEnvTestWeight::Skip = 5, 
	EEnvTestWeight::EEnvTestWeight_MAX = 6, 
};
//Enum AIModule.EEnvTestScoreEquation
enum class FEEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation::Linear = 0, 
	EEnvTestScoreEquation::Square = 1, 
	EEnvTestScoreEquation::InverseLinear = 2, 
	EEnvTestScoreEquation::SquareRoot = 3, 
	EEnvTestScoreEquation::Constant = 4, 
	EEnvTestScoreEquation::EEnvTestScoreEquation_MAX = 5, 
};
//Enum AIModule.EEnvTestFilterType
enum class FEEnvTestFilterType : uint8_t
{
	EEnvTestFilterType::Minimum = 0, 
	EEnvTestFilterType::Maximum = 1, 
	EEnvTestFilterType::Range = 2, 
	EEnvTestFilterType::Match = 3, 
	EEnvTestFilterType::EEnvTestFilterType_MAX = 4, 
};
//Enum AIModule.EEnvTestPurpose
enum class FEEnvTestPurpose : uint8_t
{
	EEnvTestPurpose::Filter = 0, 
	EEnvTestPurpose::Score = 1, 
	EEnvTestPurpose::FilterAndScore = 2, 
	EEnvTestPurpose::EEnvTestPurpose_MAX = 3, 
};
//Enum AIModule.EBTDecoratorLogic
enum class FEBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic::Invalid = 0, 
	EBTDecoratorLogic::Test = 1, 
	EBTDecoratorLogic::And = 2, 
	EBTDecoratorLogic::Or = 3, 
	EBTDecoratorLogic::Not = 4, 
	EBTDecoratorLogic::EBTDecoratorLogic_MAX = 5, 
};
//Enum AIModule.EBTChildIndex
enum class FEBTChildIndex : uint8_t
{
	EBTChildIndex::FirstNode = 0, 
	EBTChildIndex::TaskNode = 1, 
	EBTChildIndex::EBTChildIndex_MAX = 2, 
};
//Enum AIModule.ETextKeyOperation
enum class FETextKeyOperation : uint8_t
{
	ETextKeyOperation::Equal = 0, 
	ETextKeyOperation::NotEqual = 1, 
	ETextKeyOperation::Contain = 2, 
	ETextKeyOperation::NotContain = 3, 
	ETextKeyOperation::ETextKeyOperation_MAX = 4, 
};
//Enum AIModule.EArithmeticKeyOperation
enum class FEArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation::Equal = 0, 
	EArithmeticKeyOperation::NotEqual = 1, 
	EArithmeticKeyOperation::Less = 2, 
	EArithmeticKeyOperation::LessOrEqual = 3, 
	EArithmeticKeyOperation::Greater = 4, 
	EArithmeticKeyOperation::GreaterOrEqual = 5, 
	EArithmeticKeyOperation::EArithmeticKeyOperation_MAX = 6, 
};
//Enum AIModule.EBasicKeyOperation
enum class FEBasicKeyOperation : uint8_t
{
	EBasicKeyOperation::Set = 0, 
	EBasicKeyOperation::NotSet = 1, 
	EBasicKeyOperation::EBasicKeyOperation_MAX = 2, 
};
//Enum AIModule.EBTBlackboardRestart
enum class FEBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart::ValueChange = 0, 
	EBTBlackboardRestart::ResultChange = 1, 
	EBTBlackboardRestart::EBTBlackboardRestart_MAX = 2, 
};
//Enum AIModule.EBlackBoardEntryComparison
enum class FEBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison::Equal = 0, 
	EBlackBoardEntryComparison::NotEqual = 1, 
	EBlackBoardEntryComparison::EBlackBoardEntryComparison_MAX = 2, 
};
//Enum AIModule.EPathExistanceQueryType
enum class FEPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType::NavmeshRaycast2D = 0, 
	EPathExistanceQueryType::HierarchicalQuery = 1, 
	EPathExistanceQueryType::RegularPathFinding = 2, 
	EPathExistanceQueryType::EPathExistanceQueryType_MAX = 3, 
};
//Enum AIModule.EBTParallelMode
enum class FEBTParallelMode : uint8_t
{
	EBTParallelMode::AbortBackground = 0, 
	EBTParallelMode::WaitForBackground = 1, 
	EBTParallelMode::EBTParallelMode_MAX = 2, 
};
//Enum AIModule.EPointOnCircleSpacingMethod
enum class FEPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod::BySpaceBetween = 0, 
	EPointOnCircleSpacingMethod::ByNumberOfPoints = 1, 
	EPointOnCircleSpacingMethod::EPointOnCircleSpacingMethod_MAX = 2, 
};
//Enum AIModule.EEQSNormalizationType
enum class FEEQSNormalizationType : uint8_t
{
	EEQSNormalizationType::Absolute = 0, 
	EEQSNormalizationType::RelativeToScores = 1, 
	EEQSNormalizationType::EEQSNormalizationType_MAX = 2, 
};
//Enum AIModule.EEnvTestDistance
enum class FEEnvTestDistance : uint8_t
{
	EEnvTestDistance::Distance3D = 0, 
	EEnvTestDistance::Distance2D = 1, 
	EEnvTestDistance::DistanceZ = 2, 
	EEnvTestDistance::DistanceAbsoluteZ = 3, 
	EEnvTestDistance::EEnvTestDistance_MAX = 4, 
};
//Enum AIModule.EEnvTestDot
enum class FEEnvTestDot : uint8_t
{
	EEnvTestDot::Dot3D = 0, 
	EEnvTestDot::Dot2D = 1, 
	EEnvTestDot::EEnvTestDot_MAX = 2, 
};
//Enum AIModule.EEnvTestPathfinding
enum class FEEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding::PathExist = 0, 
	EEnvTestPathfinding::PathCost = 1, 
	EEnvTestPathfinding::PathLength = 2, 
	EEnvTestPathfinding::EEnvTestPathfinding_MAX = 3, 
};
//Enum AIModule.EEnvQueryHightlightMode
enum class FEEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode::All = 0, 
	EEnvQueryHightlightMode::Best5Pct = 1, 
	EEnvQueryHightlightMode::Best25Pct = 2, 
	EEnvQueryHightlightMode::EEnvQueryHightlightMode_MAX = 3, 
};
//Enum AIModule.EPawnActionFailHandling
enum class FEPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling::RequireSuccess = 0, 
	EPawnActionFailHandling::IgnoreFailure = 1, 
	EPawnActionFailHandling::EPawnActionFailHandling_MAX = 2, 
};
//Enum AIModule.EPawnSubActionTriggeringPolicy
enum class FEPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy::CopyBeforeTriggering = 0, 
	EPawnSubActionTriggeringPolicy::ReuseInstances = 1, 
	EPawnSubActionTriggeringPolicy::EPawnSubActionTriggeringPolicy_MAX = 2, 
};
//Enum AIModule.EPawnActionMoveMode
enum class FEPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode::UsePathfinding = 0, 
	EPawnActionMoveMode::StraightLine = 1, 
	EPawnActionMoveMode::EPawnActionMoveMode_MAX = 2, 
};
//Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class FENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode::None = 0, 
	ENiagaraNumericOutputTypeSelectionMode::Largest = 1, 
	ENiagaraNumericOutputTypeSelectionMode::Smallest = 2, 
	ENiagaraNumericOutputTypeSelectionMode::Scalar = 3, 
	ENiagaraNumericOutputTypeSelectionMode::ENiagaraNumericOutputTypeSelectionMode_MAX = 4, 
};
//Enum Niagara.ENiagaraScriptCompileStatus
enum class FENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus::NCS_Unknown = 0, 
	ENiagaraScriptCompileStatus::NCS_Dirty = 1, 
	ENiagaraScriptCompileStatus::NCS_Error = 2, 
	ENiagaraScriptCompileStatus::NCS_UpToDate = 3, 
	ENiagaraScriptCompileStatus::NCS_BeingCreated = 4, 
	ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings = 5, 
	ENiagaraScriptCompileStatus::NCS_MAX = 6, 
};
//Enum Niagara.ENiagaraInputNodeUsage
enum class FENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage::Undefined = 0, 
	ENiagaraInputNodeUsage::Parameter = 1, 
	ENiagaraInputNodeUsage::Attribute = 2, 
	ENiagaraInputNodeUsage::SystemConstant = 3, 
	ENiagaraInputNodeUsage::ENiagaraInputNodeUsage_MAX = 4, 
};
//Enum Niagara.ENiagaraDataSetType
enum class FENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType::ParticleData = 0, 
	ENiagaraDataSetType::Shared = 1, 
	ENiagaraDataSetType::Event = 2, 
	ENiagaraDataSetType::ENiagaraDataSetType_MAX = 3, 
};
//Enum Niagara.ENiagaraSpriteFacingMode
enum class FENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode::FaceCamera = 0, 
	ENiagaraSpriteFacingMode::FaceCameraPlane = 1, 
	ENiagaraSpriteFacingMode::CustomFacingVector = 2, 
	ENiagaraSpriteFacingMode::ENiagaraSpriteFacingMode_MAX = 3, 
};
//Enum Niagara.ENiagaraSpriteAlignment
enum class FENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment::Unaligned = 0, 
	ENiagaraSpriteAlignment::VelocityAligned = 1, 
	ENiagaraSpriteAlignment::CustomAlignment = 2, 
	ENiagaraSpriteAlignment::ENiagaraSpriteAlignment_MAX = 3, 
};
//Enum Niagara.ENiagaraSortMode
enum class FENiagaraSortMode : uint8_t
{
	ENiagaraSortMode::SortNone = 0, 
	ENiagaraSortMode::SortViewDepth = 1, 
	ENiagaraSortMode::SortViewDistance = 2, 
	ENiagaraSortMode::ENiagaraSortMode_MAX = 3, 
};
//Enum Niagara.ENiagaraScriptUsage
enum class FENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage::Function = 0, 
	ENiagaraScriptUsage::Module = 1, 
	ENiagaraScriptUsage::SpawnScript = 2, 
	ENiagaraScriptUsage::SpawnScriptInterpolated = 3, 
	ENiagaraScriptUsage::UpdateScript = 4, 
	ENiagaraScriptUsage::EffectScript = 5, 
	ENiagaraScriptUsage::ENiagaraScriptUsage_MAX = 6, 
};
//Enum Niagara.EUnusedAttributeBehaviour
enum class FEUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour::Copy = 0, 
	EUnusedAttributeBehaviour::Zero = 1, 
	EUnusedAttributeBehaviour::None = 2, 
	EUnusedAttributeBehaviour::MarkInvalid = 3, 
	EUnusedAttributeBehaviour::PassThrough = 4, 
	EUnusedAttributeBehaviour::EUnusedAttributeBehaviour_MAX = 5, 
};
//Enum Niagara.ENiagaraCollisionMode
enum class FENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode::None = 0, 
	ENiagaraCollisionMode::SceneGeometry = 1, 
	ENiagaraCollisionMode::DepthBuffer = 2, 
	ENiagaraCollisionMode::DistanceField = 3, 
	ENiagaraCollisionMode::ENiagaraCollisionMode_MAX = 4, 
};
//Enum Niagara.EScriptCompileIndices
enum class FEScriptCompileIndices : uint8_t
{
	EScriptCompileIndices::SpawnScript = 0, 
	EScriptCompileIndices::UpdateScript = 1, 
	EScriptCompileIndices::EventScript = 2, 
	EScriptCompileIndices::EScriptCompileIndices_MAX = 3, 
};
//Enum Niagara.EScriptExecutionMode
enum class FEScriptExecutionMode : uint8_t
{
	EScriptExecutionMode::EveryParticle = 0, 
	EScriptExecutionMode::SpawnedParticles = 1, 
	EScriptExecutionMode::SingleParticle = 2, 
	EScriptExecutionMode::EScriptExecutionMode_MAX = 3, 
};
//Enum SlateCore.EFontLayoutMethod
enum class FEFontLayoutMethod : uint8_t
{
	EFontLayoutMethod::Metrics = 0, 
	EFontLayoutMethod::BoundingBox = 1, 
	EFontLayoutMethod::EFontLayoutMethod_MAX = 2, 
};
//Enum SlateCore.EFontLoadingPolicy
enum class FEFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy::LazyLoad = 0, 
	EFontLoadingPolicy::Stream = 1, 
	EFontLoadingPolicy::Inline = 2, 
	EFontLoadingPolicy::EFontLoadingPolicy_MAX = 3, 
};
//Enum SlateCore.EFontFallback
enum class FEFontFallback : uint8_t
{
	EFontFallback::FF_NoFallback = 0, 
	EFontFallback::FF_LocalizedFallback = 1, 
	EFontFallback::FF_LastResortFallback = 2, 
	EFontFallback::FF_Max = 3, 
};
//Enum SlateCore.EScrollDirection
enum class FEScrollDirection : uint8_t
{
	Scroll_Down = 0, 
	Scroll_Up = 1, 
	Scroll_MAX = 2, 
};
//Enum SlateCore.EOrientation
enum class FEOrientation : uint8_t
{
	Orient_Horizontal = 0, 
	Orient_Vertical = 1, 
	Orient_MAX = 2, 
};
//Enum SlateCore.EMenuPlacement
enum class FEMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor = 0, 
	MenuPlacement_CenteredBelowAnchor = 1, 
	MenuPlacement_BelowRightAnchor = 2, 
	MenuPlacement_ComboBox = 3, 
	MenuPlacement_ComboBoxRight = 4, 
	MenuPlacement_MenuRight = 5, 
	MenuPlacement_AboveAnchor = 6, 
	MenuPlacement_CenteredAboveAnchor = 7, 
	MenuPlacement_AboveRightAnchor = 8, 
	MenuPlacement_MenuLeft = 9, 
	MenuPlacement_Center = 10, 
	MenuPlacement_RightLeftCenter = 11, 
	MenuPlacement_MAX = 12, 
};
//Enum SlateCore.EVerticalAlignment
enum class FEVerticalAlignment : uint8_t
{
	VAlign_Fill = 0, 
	VAlign_Top = 1, 
	VAlign_Center = 2, 
	VAlign_Bottom = 3, 
	VAlign_MAX = 4, 
};
//Enum SlateCore.EHorizontalAlignment
enum class FEHorizontalAlignment : uint8_t
{
	HAlign_Fill = 0, 
	HAlign_Left = 1, 
	HAlign_Center = 2, 
	HAlign_Right = 3, 
	HAlign_MAX = 4, 
};
//Enum SlateCore.ENavigationGenesis
enum class FENavigationGenesis : uint8_t
{
	ENavigationGenesis::Keyboard = 0, 
	ENavigationGenesis::Controller = 1, 
	ENavigationGenesis::User = 2, 
	ENavigationGenesis::ENavigationGenesis_MAX = 3, 
};
//Enum SlateCore.ENavigationSource
enum class FENavigationSource : uint8_t
{
	ENavigationSource::FocusedWidget = 0, 
	ENavigationSource::WidgetUnderCursor = 1, 
	ENavigationSource::ENavigationSource_MAX = 2, 
};
//Enum SlateCore.EButtonPressMethod
enum class FEButtonPressMethod : uint8_t
{
	EButtonPressMethod::DownAndUp = 0, 
	EButtonPressMethod::ButtonPress = 1, 
	EButtonPressMethod::ButtonRelease = 2, 
	EButtonPressMethod::EButtonPressMethod_MAX = 3, 
};
//Enum SlateCore.EButtonTouchMethod
enum class FEButtonTouchMethod : uint8_t
{
	EButtonTouchMethod::DownAndUp = 0, 
	EButtonTouchMethod::PreciseTap = 1, 
	EButtonTouchMethod::EButtonTouchMethod_MAX = 2, 
};
//Enum SlateCore.EButtonClickMethod
enum class FEButtonClickMethod : uint8_t
{
	EButtonClickMethod::DownAndUp = 0, 
	EButtonClickMethod::MouseDown = 1, 
	EButtonClickMethod::MouseUp = 2, 
	EButtonClickMethod::PreciseClick = 3, 
	EButtonClickMethod::EButtonClickMethod_MAX = 4, 
};
//Enum SlateCore.ESlateCheckBoxType
enum class FESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType::CheckBox = 0, 
	ESlateCheckBoxType::ToggleButton = 1, 
	ESlateCheckBoxType::ESlateCheckBoxType_MAX = 2, 
};
//Enum SlateCore.EFocusCause
enum class FEFocusCause : uint8_t
{
	EFocusCause::Mouse = 0, 
	EFocusCause::Navigation = 1, 
	EFocusCause::SetDirectly = 2, 
	EFocusCause::Cleared = 3, 
	EFocusCause::OtherWidgetLostFocus = 4, 
	EFocusCause::WindowActivate = 5, 
	EFocusCause::EFocusCause_MAX = 6, 
};
//Enum NetworkNext.ENetworkNextPlatformType
enum class FENetworkNextPlatformType : uint8_t
{
	ENetworkNextPlatformType::PlatformType_Unknown = 0, 
	ENetworkNextPlatformType::PlatformType_Windows = 1, 
	ENetworkNextPlatformType::PlatformType_Mac = 2, 
	ENetworkNextPlatformType::PlatformType_Linux = 3, 
	ENetworkNextPlatformType::PlatformType_Switch = 4, 
	ENetworkNextPlatformType::PlatformType_PS4 = 5, 
	ENetworkNextPlatformType::PlatformType_XboxOne = 6, 
	ENetworkNextPlatformType::PlatformType_iOS = 7, 
	ENetworkNextPlatformType::PlatformType_MAX = 8, 
};
//Enum NetworkNext.ENetworkNextConnectionType
enum class FENetworkNextConnectionType : uint8_t
{
	ENetworkNextConnectionType::ConnectionType_Unknown = 0, 
	ENetworkNextConnectionType::ConnectionType_Wired = 1, 
	ENetworkNextConnectionType::ConnectionType_Wifi = 2, 
	ENetworkNextConnectionType::ConnectionType_Cellular = 3, 
	ENetworkNextConnectionType::ConnectionType_MAX = 4, 
};
//Enum OnlineSubsystem.EInAppPurchaseState
enum class FEInAppPurchaseState : uint8_t
{
	EInAppPurchaseState::Unknown = 0, 
	EInAppPurchaseState::Success = 1, 
	EInAppPurchaseState::Failed = 2, 
	EInAppPurchaseState::Cancelled = 3, 
	EInAppPurchaseState::Invalid = 4, 
	EInAppPurchaseState::NotAllowed = 5, 
	EInAppPurchaseState::Restored = 6, 
	EInAppPurchaseState::AlreadyOwned = 7, 
	EInAppPurchaseState::EInAppPurchaseState_MAX = 8, 
};
//Enum OnlineSubsystem.EMPMatchOutcome
enum class FEMPMatchOutcome : uint8_t
{
	EMPMatchOutcome::None = 0, 
	EMPMatchOutcome::Quit = 1, 
	EMPMatchOutcome::Won = 2, 
	EMPMatchOutcome::Lost = 3, 
	EMPMatchOutcome::Tied = 4, 
	EMPMatchOutcome::TimeExpired = 5, 
	EMPMatchOutcome::First = 6, 
	EMPMatchOutcome::Second = 7, 
	EMPMatchOutcome::Third = 8, 
	EMPMatchOutcome::Fourth = 9, 
	EMPMatchOutcome::EMPMatchOutcome_MAX = 10, 
};
//Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class FEBeaconConnectionState : uint8_t
{
	EBeaconConnectionState::Invalid = 0, 
	EBeaconConnectionState::Closed = 1, 
	EBeaconConnectionState::Pending = 2, 
	EBeaconConnectionState::Open = 3, 
	EBeaconConnectionState::EBeaconConnectionState_MAX = 4, 
};
//Enum OnlineSubsystemUtils.EPartyReservationResult
enum class FEPartyReservationResult : uint8_t
{
	EPartyReservationResult::NoResult = 0, 
	EPartyReservationResult::RequestPending = 1, 
	EPartyReservationResult::GeneralError = 2, 
	EPartyReservationResult::PartyLimitReached = 3, 
	EPartyReservationResult::IncorrectPlayerCount = 4, 
	EPartyReservationResult::RequestTimedOut = 5, 
	EPartyReservationResult::ReservationDuplicate = 6, 
	EPartyReservationResult::ReservationNotFound = 7, 
	EPartyReservationResult::ReservationAccepted = 8, 
	EPartyReservationResult::ReservationDenied = 9, 
	EPartyReservationResult::ReservationDenied_Banned = 10, 
	EPartyReservationResult::ReservationRequestCanceled = 11, 
	EPartyReservationResult::ReservationInvalid = 12, 
	EPartyReservationResult::BadSessionId = 13, 
	EPartyReservationResult::EPartyReservationResult_MAX = 14, 
};
//Enum OnlineSubsystemUtils.EClientRequestType
enum class FEClientRequestType : uint8_t
{
	EClientRequestType::NonePending = 0, 
	EClientRequestType::ExistingSessionReservation = 1, 
	EClientRequestType::ReservationUpdate = 2, 
	EClientRequestType::EmptyServerReservation = 3, 
	EClientRequestType::Reconnect = 4, 
	EClientRequestType::Abandon = 5, 
	EClientRequestType::EClientRequestType_MAX = 6, 
};
//Enum PrefabAsset.EPrefabVisualizerType
enum class FEPrefabVisualizerType : uint8_t
{
	EPrefabVisualizerType::WireBox = 0, 
	EPrefabVisualizerType::WireSphere = 1, 
	EPrefabVisualizerType::EPrefabVisualizerType_MAX = 2, 
};
//Enum Paper2D.EFlipbookCollisionMode
enum class FEFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode::NoCollision = 0, 
	EFlipbookCollisionMode::FirstFrameCollision = 1, 
	EFlipbookCollisionMode::EachFrameCollision = 2, 
	EFlipbookCollisionMode::EFlipbookCollisionMode_MAX = 3, 
};
//Enum Paper2D.ESpritePivotMode
enum class FESpritePivotMode : uint8_t
{
	ESpritePivotMode::Top_Left = 0, 
	ESpritePivotMode::Top_Center = 1, 
	ESpritePivotMode::Top_Right = 2, 
	ESpritePivotMode::Center_Left = 3, 
	ESpritePivotMode::Center_Center = 4, 
	ESpritePivotMode::Center_Right = 5, 
	ESpritePivotMode::Bottom_Left = 6, 
	ESpritePivotMode::Bottom_Center = 7, 
	ESpritePivotMode::Bottom_Right = 8, 
	ESpritePivotMode::Custom = 9, 
	ESpritePivotMode::ESpritePivotMode_MAX = 10, 
};
//Enum Paper2D.ESpritePolygonMode
enum class FESpritePolygonMode : uint8_t
{
	ESpritePolygonMode::SourceBoundingBox = 0, 
	ESpritePolygonMode::TightBoundingBox = 1, 
	ESpritePolygonMode::ShrinkWrapped = 2, 
	ESpritePolygonMode::FullyCustom = 3, 
	ESpritePolygonMode::Diced = 4, 
	ESpritePolygonMode::ESpritePolygonMode_MAX = 5, 
};
//Enum Paper2D.ESpriteShapeType
enum class FESpriteShapeType : uint8_t
{
	ESpriteShapeType::Box = 0, 
	ESpriteShapeType::Circle = 1, 
	ESpriteShapeType::Polygon = 2, 
	ESpriteShapeType::ESpriteShapeType_MAX = 3, 
};
//Enum Paper2D.ESpriteCollisionMode
enum class FESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode::None = 0, 
	ESpriteCollisionMode::Use2DPhysics = 1, 
	ESpriteCollisionMode::Use3DPhysics = 2, 
	ESpriteCollisionMode::ESpriteCollisionMode_MAX = 3, 
};
//Enum Paper2D.EPaperSpriteAtlasPadding
enum class FEPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding::DilateBorder = 0, 
	EPaperSpriteAtlasPadding::PadWithZero = 1, 
	EPaperSpriteAtlasPadding::EPaperSpriteAtlasPadding_MAX = 2, 
};
//Enum Paper2D.ETileMapProjectionMode
enum class FETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode::Orthogonal = 0, 
	ETileMapProjectionMode::IsometricDiamond = 1, 
	ETileMapProjectionMode::IsometricStaggered = 2, 
	ETileMapProjectionMode::HexagonalStaggered = 3, 
	ETileMapProjectionMode::ETileMapProjectionMode_MAX = 4, 
};
//Enum SubstanceCore.ESubstanceInputType
enum class FESubstanceInputType : uint8_t
{
	SIT_Float = 0, 
	SIT_Float2 = 1, 
	SIT_Float3 = 2, 
	SIT_Float4 = 3, 
	SIT_Integer = 4, 
	SIT_Image = 5, 
	SIT_Unused = 6, 
	SIT_Unused = 7, 
	SIT_Integer2 = 8, 
	SIT_Integer3 = 9, 
	SIT_Integer4 = 10, 
	SIT_MAX = 11, 
};
//Enum SubstanceCore.ESubstanceGenerationMode
enum class FESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault = 0, 
	SGM_Baked = 1, 
	SGM_OnLoadSync = 2, 
	SGM_OnLoadSyncAndCache = 3, 
	SGM_OnLoadAsync = 4, 
	SGM_OnLoadAsyncAndCache = 5, 
	SGM_MAX = 6, 
};
//Enum SubstanceCore.ESubstanceEngineType
enum class FESubstanceEngineType : uint8_t
{
	SET_CPU = 0, 
	SET_GPU = 1, 
	SET_MAX = 2, 
};
//Enum SubstanceCore.ESubChannelType
enum class FESubChannelType : uint8_t
{
	Diffuse = 0, 
	Ambient = 1, 
	BaseColor = 2, 
	Metallic = 3, 
	Roughness = 4, 
	Emissive = 5, 
	Normal = 6, 
	Mask = 7, 
	Opacity = 8, 
	Refraction = 9, 
	AmbientOcclusion = 10, 
	Glossiness = 11, 
	Height = 12, 
	Displacement = 13, 
	Reflection = 14, 
	Invalid = 15, 
	ESubChannelType_MAX = 16, 
};
//Enum SubstanceCore.ESubstanceTextureSize
enum class FESubstanceTextureSize : uint8_t
{
	ERL = 0, 
	ERL = 1, 
	ERL = 2, 
	ERL = 3, 
	ERL = 4, 
	ERL = 5, 
	ERL = 6, 
	ERL = 7, 
	ERL = 8, 
	ERL_MAX = 9, 
};
//Enum MK3DPublisher.ECapurerMode
enum class FECapurerMode : uint8_t
{
	ECapurerMode::ECapturerNone = 0, 
	ECapurerMode::ECapturerMovie = 1, 
	ECapurerMode::ECapturerSound = 2, 
	ECapurerMode::ECapurerMode_MAX = 3, 
};
//Enum CustomizableObject.ECustomizableObjectProjectorType
enum class FECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType::Planar = 0, 
	ECustomizableObjectProjectorType::Cylindrical = 1, 
	ECustomizableObjectProjectorType::ECustomizableObjectProjectorType_MAX = 2, 
};
//Enum CustomizableObject.EMutableCompileMeshType
enum class FEMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType::Full = 0, 
	EMutableCompileMeshType::Local = 1, 
	EMutableCompileMeshType::LocalAndChildren = 2, 
	EMutableCompileMeshType::AddWorkingSetNoChildren = 3, 
	EMutableCompileMeshType::AddWorkingSetAndChildren = 4, 
	EMutableCompileMeshType::EMutableCompileMeshType_MAX = 5, 
};
//Enum CustomizableObject.ECustomizableObjectGroupType
enum class FECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE = 0, 
	COGT_ALL = 1, 
	COGT_ONE = 2, 
	COGT_ONE_OR_NONE = 3, 
	COGT_MAX = 4, 
};
//Enum CustomizableObject.EMutableParameterType
enum class FEMutableParameterType : uint8_t
{
	EMutableParameterType::None = 0, 
	EMutableParameterType::Bool = 1, 
	EMutableParameterType::Int = 2, 
	EMutableParameterType::Float = 3, 
	EMutableParameterType::Color = 4, 
	EMutableParameterType::Projector = 5, 
	EMutableParameterType::Texture = 6, 
	EMutableParameterType::EMutableParameterType_MAX = 7, 
};
//Enum CustomizableObject.ECustomizableObjectRelevancy
enum class FECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy::All = 0, 
	ECustomizableObjectRelevancy::ClientOnly = 1, 
	ECustomizableObjectRelevancy::ECustomizableObjectRelevancy_MAX = 2, 
};
//Enum OceanPlugin.EFollowMethod
enum class FEFollowMethod : uint8_t
{
	LookAtLocation = 0, 
	FollowCamera = 1, 
	FollowPawn = 2, 
	Stationary = 3, 
	EFollowMethod_MAX = 4, 
};
//Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class FECoherentUIGTKeys : uint8_t
{
	ECoherentUIGTKeys::LeftMouseButton = 0, 
	ECoherentUIGTKeys::RightMouseButton = 1, 
	ECoherentUIGTKeys::MiddleMouseButton = 2, 
	ECoherentUIGTKeys::ThumbMouseButton = 3, 
	ECoherentUIGTKeys::ThumbMouseButton2 = 4, 
	ECoherentUIGTKeys::BackSpace = 5, 
	ECoherentUIGTKeys::Tab = 6, 
	ECoherentUIGTKeys::Enter = 7, 
	ECoherentUIGTKeys::Pause = 8, 
	ECoherentUIGTKeys::CapsLock = 9, 
	ECoherentUIGTKeys::Escape = 10, 
	ECoherentUIGTKeys::SpaceBar = 11, 
	ECoherentUIGTKeys::PageUp = 12, 
	ECoherentUIGTKeys::PageDown = 13, 
	ECoherentUIGTKeys::End = 14, 
	ECoherentUIGTKeys::Home = 15, 
	ECoherentUIGTKeys::Left = 16, 
	ECoherentUIGTKeys::Up = 17, 
	ECoherentUIGTKeys::Right = 18, 
	ECoherentUIGTKeys::Down = 19, 
	ECoherentUIGTKeys::Insert = 20, 
	ECoherentUIGTKeys::Delete = 21, 
	ECoherentUIGTKeys::Zero = 22, 
	ECoherentUIGTKeys::One = 23, 
	ECoherentUIGTKeys::Two = 24, 
	ECoherentUIGTKeys::Three = 25, 
	ECoherentUIGTKeys::Four = 26, 
	ECoherentUIGTKeys::Five = 27, 
	ECoherentUIGTKeys::Six = 28, 
	ECoherentUIGTKeys::Seven = 29, 
	ECoherentUIGTKeys::Eight = 30, 
	ECoherentUIGTKeys::Nine = 31, 
	ECoherentUIGTKeys::A = 32, 
	ECoherentUIGTKeys::B = 33, 
	ECoherentUIGTKeys::C = 34, 
	ECoherentUIGTKeys::D = 35, 
	ECoherentUIGTKeys::E = 36, 
	ECoherentUIGTKeys::F = 37, 
	ECoherentUIGTKeys::G = 38, 
	ECoherentUIGTKeys::H = 39, 
	ECoherentUIGTKeys::I = 40, 
	ECoherentUIGTKeys::J = 41, 
	ECoherentUIGTKeys::K = 42, 
	ECoherentUIGTKeys::L = 43, 
	ECoherentUIGTKeys::M = 44, 
	ECoherentUIGTKeys::N = 45, 
	ECoherentUIGTKeys::O = 46, 
	ECoherentUIGTKeys::P = 47, 
	ECoherentUIGTKeys::Q = 48, 
	ECoherentUIGTKeys::R = 49, 
	ECoherentUIGTKeys::S = 50, 
	ECoherentUIGTKeys::T = 51, 
	ECoherentUIGTKeys::U = 52, 
	ECoherentUIGTKeys::V = 53, 
	ECoherentUIGTKeys::W = 54, 
	ECoherentUIGTKeys::X = 55, 
	ECoherentUIGTKeys::Y = 56, 
	ECoherentUIGTKeys::Z = 57, 
	ECoherentUIGTKeys::NumPadZero = 58, 
	ECoherentUIGTKeys::NumPadOne = 59, 
	ECoherentUIGTKeys::NumPadTwo = 60, 
	ECoherentUIGTKeys::NumPadThree = 61, 
	ECoherentUIGTKeys::NumPadFour = 62, 
	ECoherentUIGTKeys::NumPadFive = 63, 
	ECoherentUIGTKeys::NumPadSix = 64, 
	ECoherentUIGTKeys::NumPadSeven = 65, 
	ECoherentUIGTKeys::NumPadEight = 66, 
	ECoherentUIGTKeys::NumPadNine = 67, 
	ECoherentUIGTKeys::Multiply = 68, 
	ECoherentUIGTKeys::Add = 69, 
	ECoherentUIGTKeys::Subtract = 70, 
	ECoherentUIGTKeys::Decimal = 71, 
	ECoherentUIGTKeys::Divide = 72, 
	ECoherentUIGTKeys::F1 = 73, 
	ECoherentUIGTKeys::F2 = 74, 
	ECoherentUIGTKeys::F3 = 75, 
	ECoherentUIGTKeys::F4 = 76, 
	ECoherentUIGTKeys::F5 = 77, 
	ECoherentUIGTKeys::F6 = 78, 
	ECoherentUIGTKeys::F7 = 79, 
	ECoherentUIGTKeys::F8 = 80, 
	ECoherentUIGTKeys::F9 = 81, 
	ECoherentUIGTKeys::F10 = 82, 
	ECoherentUIGTKeys::F11 = 83, 
	ECoherentUIGTKeys::F12 = 84, 
	ECoherentUIGTKeys::NumLock = 85, 
	ECoherentUIGTKeys::ScrollLock = 86, 
	ECoherentUIGTKeys::LeftShift = 87, 
	ECoherentUIGTKeys::RightShift = 88, 
	ECoherentUIGTKeys::LeftControl = 89, 
	ECoherentUIGTKeys::RightControl = 90, 
	ECoherentUIGTKeys::LeftAlt = 91, 
	ECoherentUIGTKeys::RightAlt = 92, 
	ECoherentUIGTKeys::LeftCommand = 93, 
	ECoherentUIGTKeys::RightCommand = 94, 
	ECoherentUIGTKeys::Semicolon = 95, 
	ECoherentUIGTKeys::Equals = 96, 
	ECoherentUIGTKeys::Comma = 97, 
	ECoherentUIGTKeys::Underscore = 98, 
	ECoherentUIGTKeys::Period = 99, 
	ECoherentUIGTKeys::Slash = 100, 
	ECoherentUIGTKeys::Tilde = 101, 
	ECoherentUIGTKeys::LeftBracket = 102, 
	ECoherentUIGTKeys::Backslash = 103, 
	ECoherentUIGTKeys::RightBracket = 104, 
	ECoherentUIGTKeys::Quote = 105, 
	ECoherentUIGTKeys::Unknown = 106, 
	ECoherentUIGTKeys::ECoherentUIGTKeys_MAX = 107, 
};
//Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class FECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour::None = 0, 
	ECoherentUIGTInputPropagationBehaviour::Keyboard = 1, 
	ECoherentUIGTInputPropagationBehaviour::Joystick = 2, 
	ECoherentUIGTInputPropagationBehaviour::KeyboardAndJoystick = 3, 
	ECoherentUIGTInputPropagationBehaviour::ECoherentUIGTInputPropagationBehaviour_MAX = 4, 
};
//Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class FEGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState = 0, 
	UseCurrentState = 1, 
	UseStateBeforeReset = 2, 
	EGamepadBehaviourOnFocusLost_MAX = 3, 
};
//Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class FEGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single = 0, 
	GTInputLineTrace_Multi = 1, 
	GTInputLineTrace_MAX = 2, 
};
//Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class FEGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast = 0, 
	RaycastQuality_Balanced = 1, 
	RaycastQuality_Accurate = 2, 
	RaycastQuality_MAX = 3, 
};
//Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class FECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA::MSAA_1x = 0, 
	ECoherentUIGTMSAA::MSAA_2x = 1, 
	ECoherentUIGTMSAA::MSAA_4x = 2, 
	ECoherentUIGTMSAA::MSAA_MAX = 3, 
};
//Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class FECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity::Trace = 0, 
	ECoherentUIGTSettingsSeverity::Debug = 1, 
	ECoherentUIGTSettingsSeverity::Info = 2, 
	ECoherentUIGTSettingsSeverity::Warning = 3, 
	ECoherentUIGTSettingsSeverity::AssertFailure = 4, 
	ECoherentUIGTSettingsSeverity::Error = 5, 
	ECoherentUIGTSettingsSeverity::ECoherentUIGTSettingsSeverity_MAX = 6, 
};
//Enum LocationServicesBPLibrary.ELocationAccuracy
enum class FELocationAccuracy : uint8_t
{
	ELocationAccuracy::LA_ThreeKilometers = 0, 
	ELocationAccuracy::LA_OneKilometer = 1, 
	ELocationAccuracy::LA_HundredMeters = 2, 
	ELocationAccuracy::LA_TenMeters = 3, 
	ELocationAccuracy::LA_Best = 4, 
	ELocationAccuracy::LA_Navigation = 5, 
	ELocationAccuracy::LA_MAX = 6, 
};
//Enum PhysXVehicles.EVehicleDifferential4W
enum class FEVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W::LimitedSlip_4W = 0, 
	EVehicleDifferential4W::LimitedSlip_FrontDrive = 1, 
	EVehicleDifferential4W::LimitedSlip_RearDrive = 2, 
	EVehicleDifferential4W::Open_4W = 3, 
	EVehicleDifferential4W::Open_FrontDrive = 4, 
	EVehicleDifferential4W::Open_RearDrive = 5, 
	EVehicleDifferential4W::EVehicleDifferential4W_MAX = 6, 
};
//Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class FEProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption::NoCap = 0, 
	EProcMeshSliceCapOption::CreateNewSectionForCap = 1, 
	EProcMeshSliceCapOption::UseLastSectionForCap = 2, 
	EProcMeshSliceCapOption::EProcMeshSliceCapOption_MAX = 3, 
};
//UserDefinedEnum BP_Console_Type.BP_Console_Type
enum class FBP_Console_Type : uint8_t
{
	BP_Console_Type::NewEnumerator0 = 0, 
	BP_Console_Type::NewEnumerator1 = 1, 
	BP_Console_Type::NewEnumerator2 = 2, 
	BP_Console_Type::NewEnumerator3 = 3, 
	BP_Console_Type::BP_Console_MAX = 4, 
};
//UserDefinedEnum Enum_MagazineReloadAnimStateActionType.Enum_MagazineReloadAnimStateActionType
enum class FEnum_MagazineReloadAnimStateActionType : uint8_t
{
	Enum_MagazineReloadAnimStateActionType::NewEnumerator0 = 0, 
	Enum_MagazineReloadAnimStateActionType::NewEnumerator1 = 1, 
	Enum_MagazineReloadAnimStateActionType::NewEnumerator2 = 2, 
	Enum_MagazineReloadAnimStateActionType::NewEnumerator3 = 3, 
	Enum_MagazineReloadAnimStateActionType::NewEnumerator4 = 4, 
	Enum_MagazineReloadAnimStateActionType::NewEnumerator5 = 5, 
	Enum_MagazineReloadAnimStateActionType::Enum_MAX = 6, 
};
