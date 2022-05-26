/*
RailControl - Model Railway Control Software

Copyright (c) 2017-2022 Dominik (Teddy) Mahrer - www.railcontrol.org

RailControl is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

RailControl is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RailControl; see the file LICENCE. If not see
<http://www.gnu.org/licenses/>.
*/

#pragma once

#include <map>
#include <string>

#include "DataModel/AccessoryBase.h"
#include "DataTypes.h"

class Languages
{
	public:
		enum TextSelector : unsigned int
		{
			Text180Deg,
			Text90DegAntiClockwise,
			Text90DegClockwise,
			TextAccessories,
			TextAccessory,
			TextAccessoryAddressDccTooHigh,
			TextAccessoryAddressMmTooHigh,
			TextAccessoryDeleted,
			TextAccessoryDoesNotExist,
			TextAccessoryIsLocked,
			TextAccessoryIsUsedByRoute,
			TextAccessorySaved,
			TextAccessorySenderThreadStarted,
			TextAccessoryStateIsGreen,
			TextAccessoryStateIsRed,
			TextAccessoryUpdated,
			TextActualAndStoredProtocolsDiffer,
			TextAddAccessory,
			TextAddFeedback,
			TextAddRoute,
			TextAddSignal,
			TextAddSwitch,
			TextAddText,
			TextAddTrack,
			TextAddingFeedback,
			TextAddingRouteToTimetable,
			TextAddress,
			TextAddressMustBeHigherThen0,
			TextAddresses,
			TextAllTrains,
			TextAllowLocoTurn,
			TextAllowedPropulsions,
			TextAllowedPushPull,
			TextAllowedTrainTypes,
			TextAreYouSureToDelete,
			TextAtLock,
			TextAtUnlock,
			TextAutomaticallyAddUnknownFeedbacks,
			TextAutomode,
			TextBaseAddress,
			TextBasic,
			TextBlockTrack,
			TextBoosterIsTurnedOff,
			TextBoosterIsTurnedOn,
			TextBridge,
			TextBrowserInfo,
			TextBufferStop,
			TextCV,
			TextCanNotStartAlreadyRunning,
			TextCanNotStartInErrorState,
			TextCanNotStartNotOnTrack,
			TextChDwarf,
			TextChLDistant,
			TextChLMain,
			TextCheckSumError,
			TextClosingSQLite,
			TextCluster,
			TextClusterDeleted,
			TextClusterDoesNotExist,
			TextClusterUpdated,
			TextClusters,
			TextCompileDate,
			TextConfigFileReceivedWithSize,
			TextConfigFileNotFound,
			TextConfigMenu,
			TextConfigureControlFirst,
			TextConnectionFailed,
			TextConnectionRefused,
			TextConnectionReset,
			TextControl,
			TextControlDeleted,
			TextControlDoesNotAnswer,
			TextControlDoesNotExist,
			TextControlReturnedBadParameter,
			TextControlReturnedError,
			TextControlReturnedOnHalt,
			TextControlReturnedPowerOff,
			TextControlReturnedQueueFull,
			TextControlReturnedQueueNearlyFull,
			TextControlReturnedUnknownErrorCode,
			TextControlSaved,
			TextControls,
			TextCopyingFromTo,
			TextCreatingTable,
			TextCreepAt,
			TextCreepingSpeed,
			TextCrossingLeft,
			TextCrossingRight,
			TextCrossingSymetric,
			TextCs2MasterFound,
			TextCs2MasterLocoAddressProtocol,
			TextCs2MasterLocoFunctionIconType,
			TextCs2MasterLocoFunctionIconTypeTimer,
			TextCs2MasterLocoName,
			TextCs2MasterLocoOldName,
			TextCs2MasterLocoRemove,
			TextCs2MinorVersionIsUnknown,
			TextDcc,
			TextDeCombined,
			TextDebounceThreadStarted,
			TextDebounceThreadTerminated,
			TextDebouncer,
			TextDebug,
			TextDefaultSwitchingDuration,
			TextDelete,
			TextDeleteAccessory,
			TextDeleteCluster,
			TextDeleteControl,
			TextDeleteFeedback,
			TextDeleteLayer,
			TextDeleteLoco,
			TextDeleteRoute,
			TextDeleteSignal,
			TextDeleteSwitch,
			TextDeleteText,
			TextDeleteTrack,
			TextDestinationTrack,
			TextDeviceOnCanBus,
			TextDifferentOrientations,
			TextDifferentPropulsions,
			TextDifferentPushpullTypes,
			TextDifferentTrainTypes,
			TextDirect,
			TextDoNotCare,
			TextDroppingTable,
			TextDuration,
			TextEdit,
			TextEditAccessories,
			TextEditAccessory,
			TextEditClusters,
			TextEditControls,
			TextEditFeedback,
			TextEditFeedbacks,
			TextEditLayers,
			TextEditLocos,
			TextEditRoute,
			TextEditRoutes,
			TextEditSettings,
			TextEditSignal,
			TextEditSignals,
			TextEditSwitch,
			TextEditSwitches,
			TextEditText,
			TextEditTexts,
			TextEditTrack,
			TextEditTracks,
			TextEnglish,
			TextError,
			TextExecutingRoute,
			TextExitRailControl,
			TextFeedback,
			TextFeedbackChange,
			TextFeedbackDeleted,
			TextFeedbackDoesNotExist,
			TextFeedbackIsUsedByTrack,
			TextFeedbackSaved,
			TextFeedbackStateIsOff,
			TextFeedbackStateIsOn,
			TextFeedbackUpdated,
			TextFeedbacks,
			TextFoundAccessoryInEcosDatabase,
			TextFoundFeedbackModuleInEcosDatabase,
			TextFoundLocoInEcosDatabase,
			TextFullScreen,
			TextFunctions,
			TextGerman,
			TextGitDate,
			TextGitDirty,
			TextGitHash,
			TextGreen,
			TextHasAlreadyReservedRoute,
			TextHasNotReachedDestination,
			TextHeadingToVia,
			TextHeadingToViaVia,
			TextHeartBeatThreadStarted,
			TextHeightIs0,
			TextHint,
			TextHintCcSchnitte,
			TextHintCs2Tcp,
			TextHintCs2Udp,
			TextHintDccPpExSerial,
			TextHintDccPpExTcp,
			TextHintEcos,
			TextHintHsi88,
			TextHintIntellibox,
			TextHintM6051,
			TextHintMasterControl,
			TextHintMasterControl2,
			TextHintOpenDcc,
			TextHintPositionMove,
			TextHintPositionRotate,
			TextHintRedBox,
			TextHintTwinCenter,
			TextHintVirtual,
			TextHintZ21,
			TextHitOverrun,
			TextHsi88Configured,
			TextHsi88ErrorConfiguring,
			TextHttpConnectionClosed,
			TextHttpConnectionErrorReadingData,
			TextHttpConnectionNotFound,
			TextHttpConnectionNotImplemented,
			TextHttpConnectionOpened,
			TextHttpConnectionRequest,
			TextIPAddress,
			TextImport,
			TextIndex,
			TextInfo,
			TextInvalidControlID,
			TextInvalidDataReceived,
			TextInverted,
			TextIsInAutomodeWithoutRouteTrack,
			TextIsInErrorState,
			TextIsInInvalidAutomodeState,
			TextIsInManualState,
			TextIsInTerminatedState,
			TextIsLockedBy,
			TextIsNotFree,
			TextIsNotOnTrack,
			TextIsNowInAutoMode,
			TextIsNowInManualMode,
			TextIsOnOcupiedTrack,
			TextIsRunningWaitingUntilDestination,
			TextIsUpToDate,
			TextLanguage,
			TextLayer1,
			TextLayer1IsUndeletable,
			TextLayerDeleted,
			TextLayerDoesNotExist,
			TextLayerIsUsedByAccessory,
			TextLayerIsUsedByFeedback,
			TextLayerIsUsedByRoute,
			TextLayerIsUsedBySignal,
			TextLayerIsUsedBySwitch,
			TextLayerIsUsedByText,
			TextLayerIsUsedByTrack,
			TextLayerSaved,
			TextLayerUpdated,
			TextLayers,
			TextLeft,
			TextLength,
			TextLink,
			TextLoadedAccessory,
			TextLoadedCluster,
			TextLoadedControl,
			TextLoadedFeedback,
			TextLoadedLayer,
			TextLoadedLoco,
			TextLoadedRoute,
			TextLoadedSignal,
			TextLoadedSwitch,
			TextLoadedText,
			TextLoadedTrack,
			TextLoco,
			TextLocoAddressDccTooHigh,
			TextLocoAddressMmTooHigh,
			TextLocoDeleted,
			TextLocoDirectionOfTravelIsLeft,
			TextLocoDirectionOfTravelIsRight,
			TextLocoDoesNotExist,
			TextLocoFunctionIconAirPump,
			TextLocoFunctionIconBacklightForward,
			TextLocoFunctionIconBacklightReverse,
			TextLocoFunctionIconBell,
			TextLocoFunctionIconBlinkingLight,
			TextLocoFunctionIconBreak,
			TextLocoFunctionIconBreak1,
			TextLocoFunctionIconBreak2,
			TextLocoFunctionIconBufferPush,
			TextLocoFunctionIconCabLight1,
			TextLocoFunctionIconCabLight12,
			TextLocoFunctionIconCabLight2,
			TextLocoFunctionIconCloseDoor,
			TextLocoFunctionIconCompressedAir,
			TextLocoFunctionIconCoupler,
			TextLocoFunctionIconCrane,
			TextLocoFunctionIconCraneHook,
			TextLocoFunctionIconCurve,
			TextLocoFunctionIconDefault,
			TextLocoFunctionIconDown,
			TextLocoFunctionIconDrainValve,
			TextLocoFunctionIconDriversDeskLight,
			TextLocoFunctionIconEngine1,
			TextLocoFunctionIconEngine2,
			TextLocoFunctionIconEngineLight,
			TextLocoFunctionIconFan,
			TextLocoFunctionIconFan1,
			TextLocoFunctionIconFan2,
			TextLocoFunctionIconFan3,
			TextLocoFunctionIconFillDiesel,
			TextLocoFunctionIconFillGas,
			TextLocoFunctionIconFillWater,
			TextLocoFunctionIconFireBox,
			TextLocoFunctionIconGearBox,
			TextLocoFunctionIconGearDown,
			TextLocoFunctionIconGearUp,
			TextLocoFunctionIconGenerator,
			TextLocoFunctionIconHeadlightHighBeamForward,
			TextLocoFunctionIconHeadlightHighBeamReverse,
			TextLocoFunctionIconHeadlightLowBeamForward,
			TextLocoFunctionIconHeadlightLowBeamReverse,
			TextLocoFunctionIconHorn1,
			TextLocoFunctionIconHorn2,
			TextLocoFunctionIconInertia,
			TextLocoFunctionIconInteriorLight1,
			TextLocoFunctionIconInteriorLight2,
			TextLocoFunctionIconLeft,
			TextLocoFunctionIconLeftRight,
			TextLocoFunctionIconLight,
			TextLocoFunctionIconLocomotiveNumberIndicator,
			TextLocoFunctionIconMagnet,
			TextLocoFunctionIconMainSwitch,
			TextLocoFunctionIconMusic1,
			TextLocoFunctionIconMusic2,
			TextLocoFunctionIconNoBreak,
			TextLocoFunctionIconNoSound,
			TextLocoFunctionIconOpenDoor,
			TextLocoFunctionIconPanto,
			TextLocoFunctionIconPanto1,
			TextLocoFunctionIconPanto12,
			TextLocoFunctionIconPanto2,
			TextLocoFunctionIconRadio,
			TextLocoFunctionIconRailJoint,
			TextLocoFunctionIconReliefValve,
			TextLocoFunctionIconRight,
			TextLocoFunctionIconRunning1,
			TextLocoFunctionIconRunning2,
			TextLocoFunctionIconSand,
			TextLocoFunctionIconShakingRust,
			TextLocoFunctionIconShovelCoal,
			TextLocoFunctionIconShuntingLight,
			TextLocoFunctionIconShuntingMode,
			TextLocoFunctionIconSmokeGenerator,
			TextLocoFunctionIconSoundGeneral,
			TextLocoFunctionIconSoundLouder,
			TextLocoFunctionIconSoundLower,
			TextLocoFunctionIconSpeak,
			TextLocoFunctionIconStairsLight,
			TextLocoFunctionIconStationAnnouncement1,
			TextLocoFunctionIconStationAnnouncement2,
			TextLocoFunctionIconStationAnnouncement3,
			TextLocoFunctionIconSteamBlow,
			TextLocoFunctionIconSteamBlowOut,
			TextLocoFunctionIconTableLight1,
			TextLocoFunctionIconTableLight2,
			TextLocoFunctionIconTableLight3,
			TextLocoFunctionIconTelex1,
			TextLocoFunctionIconTelex12,
			TextLocoFunctionIconTelex2,
			TextLocoFunctionIconTrainDestinationIndicator,
			TextLocoFunctionIconTurn,
			TextLocoFunctionIconTurnLeft,
			TextLocoFunctionIconTurnRight,
			TextLocoFunctionIconUp,
			TextLocoFunctionIconUpDown1,
			TextLocoFunctionIconUpDown2,
			TextLocoFunctionIconWaterPump,
			TextLocoFunctionIconWhistle1,
			TextLocoFunctionIconWhistle2,
			TextLocoFunctionIsOff,
			TextLocoFunctionIsOn,
			TextLocoFunctionTypeFlashing,
			TextLocoFunctionTypeMoment,
			TextLocoFunctionTypeNone,
			TextLocoFunctionTypePermanent,
			TextLocoFunctionTypeTimer,
			TextLocoHasReachedDestination,
			TextLocoIsInAutoMode,
			TextLocoIsInManualMode,
			TextLocoIsInUse,
			TextLocoIsOnTrack,
			TextLocoIsReleased,
			TextLocoSaved,
			TextLocoSpeedIs,
			TextLocoUpdated,
			TextLocos,
			TextLogLevel,
			TextLongestUnused,
			TextLookingForDestination,
			TextMaerklinLeft,
			TextMaerklinMotorola,
			TextMaerklinRight,
			TextManager,
			TextMaxSpeed,
			TextMaxTrainLength,
			TextMembers,
			TextMinTrackLength,
			TextMinTrainLength,
			TextMultipleUnit,
			TextMyUidHash,
			TextName,
			TextNameInControl,
			TextNetworkUnreachable,
			TextNew,
			TextNoAnswerFromDecoder,
			TextNoControlSupportsProgramming,
			TextNoPushPull,
			TextNoRotation,
			TextNoS88Modules,
			TextNoValidRouteFound,
			TextNoValidTimetableEntryFound,
			TextNone,
			TextNotImplemented,
			TextNrOfFunctions,
			TextNrOfS88Modules,
			TextNrOfS88ModulesConfigured,
			TextNrOfS88ModulesOnBus,
			TextNrOfTracksToReserve,
			TextObjectIsUsedByRoute,
			TextOff,
			TextOn,
			TextOpeningSQLite,
			TextOrientation,
			TextOverrunAt,
			TextParameterFoundInConfigFile,
			TextPause,
			TextPin,
			TextPleaseSelectLoco,
			TextPosX,
			TextPosY,
			TextPosZ,
			TextPosition,
			TextPositionAlreadyInUse,
			TextProgramDccPomAccessoryRead,
			TextProgramDccPomAccessoryWrite,
			TextProgramDccPomLocoRead,
			TextProgramDccPomLocoWrite,
			TextProgramDccRead,
			TextProgramDccWrite,
			TextProgramMfxRead,
			TextProgramMfxWrite,
			TextProgramMm,
			TextProgramMmPom,
			TextProgramMode,
			TextProgramModeDccDirect,
			TextProgramModeDccPomAccessory,
			TextProgramModeDccPomLoco,
			TextProgramModeMfx,
			TextProgramModeMm,
			TextProgramModeMmPom,
			TextProgramReadValue,
			TextProgrammer,
			TextProgrammingMode,
			TextPropulsion,
			TextPropulsionAccu,
			TextPropulsionAll,
			TextPropulsionDiesel,
			TextPropulsionElectric,
			TextPropulsionGas,
			TextPropulsionHydrogen,
			TextPropulsionOther,
			TextPropulsionSteam,
			TextPropulsionUnknown,
			TextProtocol,
			TextProtocolNotSupported,
			TextPushPullOnly,
			TextPushPullTrain,
			TextQuery,
			TextQueryAffected,
			TextRailControlStarted,
			TextRailControlUpdateAvailable,
			TextRandom,
			TextReachedItsDestination,
			TextRead,
			TextReadingConfigFile,
			TextReceivedAccessoryCommand,
			TextReceivedDirectionCommand,
			TextReceivedFunctionCommand,
			TextReceivedSignalKill,
			TextReceivedSpeedCommand,
			TextReceiverThreadStarted,
			TextRed,
			TextReducedSpeed,
			TextReducedSpeedAt,
			TextRegister,
			TextRelationTargetNotFound,
			TextRelease,
			TextReleaseAccessory,
			TextReleaseLoco,
			TextReleaseRoute,
			TextReleaseSignal,
			TextReleaseSwitch,
			TextReleaseTrack,
			TextReleaseTrackAndLoco,
			TextReleaseWhenFree,
			TextRemoveBackupFile,
			TextRenamingFromTo,
			TextRestarting,
			TextRight,
			TextRotation,
			TextRoute,
			TextRouteDeleted,
			TextRouteDoesNotExist,
			TextRouteIsInUse,
			TextRouteIsLocked,
			TextRouteIsReleased,
			TextRouteIsUsedByRoute,
			TextRouteSaved,
			TextRouteUpdated,
			TextRoutes,
			TextSQLiteErrorQuery,
			TextSaving,
			TextSelectLocoForTrack,
			TextSelectRouteBy,
			TextSenderSocketCreated,
			TextSeparator,
			TextSerialNumberIs,
			TextSerialPort,
			TextSetAllLocosToAutomode,
			TextSetAllLocosToManualMode,
			TextSetLoco,
			TextSettingAccessory,
			TextSettingAccessoryWithProtocol,
			TextSettingDirectionOfTravel,
			TextSettingDirectionOfTravelWithProtocol,
			TextSettingFunction,
			TextSettingFunctionWithProtocol,
			TextSettingFunctions17_28,
			TextSettingFunctions1_8,
			TextSettingFunctions9_16,
			TextSettingSpeed,
			TextSettingSpeedOrientationLight,
			TextSettingSpeedWithProtocol,
			TextSettings,
			TextSettingsSaved,
			TextSeveral,
			TextShortCircuit,
			TextShowName,
			TextSignal,
			TextSignalDeleted,
			TextSignalDoesNotExist,
			TextSignalHasAssociatedFeedback,
			TextSignalIsLocked,
			TextSignalIsUsedByLoco,
			TextSignalIsUsedByRoute,
			TextSignalIsUsedByTrack,
			TextSignalSaved,
			TextSignalStateCaution,
			TextSignalStateClear,
			TextSignalStateClear40,
			TextSignalStateClear60,
			TextSignalStateClear90,
			TextSignalStateIsAspect10,
			TextSignalStateIsAspect2,
			TextSignalStateIsAspect3,
			TextSignalStateIsAspect4,
			TextSignalStateIsAspect5,
			TextSignalStateIsAspect6,
			TextSignalStateIsAspect7,
			TextSignalStateIsAspect8,
			TextSignalStateIsAspect9,
			TextSignalStateIsClear,
			TextSignalStateIsStop,
			TextSignalStateShortClear,
			TextSignalStateStop,
			TextSignalStateStopExpected,
			TextSignalUpdated,
			TextSignals,
			TextSimpleLeft,
			TextSimpleRight,
			TextSpanish,
			TextSpeed,
			TextStartArgument,
			TextStartLocoAutomode,
			TextStartLocoTimetablemode,
			TextStartTrack,
			TextStarting,
			TextStopAllLocos,
			TextStopAt,
			TextStopLoco,
			TextStopOnFeedbackInFreeTrack,
			TextStoppingRailControl,
			TextStoppingRequestedBySignal,
			TextStoppingRequestedByWebClient,
			TextStraight,
			TextSwitch,
			TextSwitchDeleted,
			TextSwitchDoesNotExist,
			TextSwitchIsLocked,
			TextSwitchIsUsedByRoute,
			TextSwitchSaved,
			TextSwitchStateIsStraight,
			TextSwitchStateIsThird,
			TextSwitchStateIsTurnout,
			TextSwitchStateLeft,
			TextSwitchStateRight,
			TextSwitchStateStraight,
			TextSwitchUpdated,
			TextSwitches,
			TextSystemDefault,
			TextTerminatingAccessorySenderThread,
			TextTerminatingHeartBeatThread,
			TextTerminatingReceiverThread,
			TextTerminatingSenderSocket,
			TextText,
			TextTextDeleted,
			TextTextDoesNotExist,
			TextTextSaved,
			TextTextUpdated,
			TextTexts,
			TextThreeWay,
			TextTimestampAlreadySet,
			TextTimestampNotSet,
			TextTimestampSet,
			TextTooManyS88Modules,
			TextTrack,
			TextTrackDeleted,
			TextTrackDoesNotExist,
			TextTrackHasAssociatedFeedback,
			TextTrackIsUsedByLoco,
			TextTrackIsUsedByRoute,
			TextTrackSaved,
			TextTrackStatusIsBlocked,
			TextTrackStatusIsBlockedAndOccupied,
			TextTrackStatusIsBlockedAndReserved,
			TextTrackStatusIsFree,
			TextTrackStatusIsOccupied,
			TextTrackStatusIsReserved,
			TextTrackUpdated,
			TextTracks,
			TextTrainIsToLong,
			TextTrainIsToShort,
			TextTrainLength,
			TextTrainType,
			TextTrainTypeAll,
			TextTrainTypeCargo,
			TextTrainTypeCargoBlock,
			TextTrainTypeCargoExpress,
			TextTrainTypeCargoLocal,
			TextTrainTypeCargoLongDistance,
			TextTrainTypeCargoTractor,
			TextTrainTypeCargoWithPassenger,
			TextTrainTypeCleaning,
			TextTrainTypeConstruction,
			TextTrainTypeEmpty,
			TextTrainTypeExtra,
			TextTrainTypeFastLocal,
			TextTrainTypeHistoric,
			TextTrainTypeInternationalHighSpeed,
			TextTrainTypeInternationalLongDistance,
			TextTrainTypeInternationalNight,
			TextTrainTypeLocal,
			TextTrainTypeLoco,
			TextTrainTypeLongDistanceFastLocal,
			TextTrainTypeNationalHighSpeed,
			TextTrainTypeNationalLongDistance,
			TextTrainTypeNationalNight,
			TextTrainTypeOther,
			TextTrainTypePassenger,
			TextTrainTypePassengerWithCargo,
			TextTrainTypeRescue,
			TextTrainTypeSuburban,
			TextTrainTypeUnderground,
			TextTrainTypeUnknown,
			TextTravelSpeed,
			TextTunnelOneSide,
			TextTunnelTwoSides,
			TextTurn,
			TextTurnDirectionOfTravelToLeft,
			TextTurnDirectionOfTravelToRight,
			TextTurningBoosterOff,
			TextTurningBoosterOn,
			TextTurningBoosterOnOrOff,
			TextTurnout,
			TextType,
			TextUnableToAddAccessory,
			TextUnableToAddCluster,
			TextUnableToAddControl,
			TextUnableToAddFeedback,
			TextUnableToAddLayer,
			TextUnableToAddLayer1,
			TextUnableToAddLoco,
			TextUnableToAddLocoToTrack,
			TextUnableToAddRoute,
			TextUnableToAddSignal,
			TextUnableToAddSwitch,
			TextUnableToAddText,
			TextUnableToAddTrack,
			TextUnableToBindSocketToPort,
			TextUnableToBindUdpSocket,
			TextUnableToCalculatePosition,
			TextUnableToCreateStorageHandler,
			TextUnableToCreateTcpSocket,
			TextUnableToCreateUdpSocket,
			TextUnableToCreateUdpSocketForReceivingData,
			TextUnableToCreateUdpSocketForSendingData,
			TextUnableToFindSymbol,
			TextUnableToLock,
			TextUnableToOpenFile,
			TextUnableToOpenSQLite,
			TextUnableToOpenSerial,
			TextUnableToReceiveData,
			TextUnableToReserve,
			TextUnableToResolveAddress,
			TextUnableToSendDataToControl,
			TextUnblockTrack,
			TextUnknownHardware,
			TextUnknownObjectType,
			TextUnloadingControl,
			TextUsingRouteFromTimetable,
			TextValue,
			TextVersion,
			TextVisible,
			TextWaitAfterRelease,
			TextWaitingTimeBetweenMembers,
			TextWaitingUntilHasStopped,
			TextWarning,
			TextWebServerStarted,
			TextWebServerStopped,
			TextWidth,
			TextWidthIs0,
			TextWrite,
			TextZ21Black2012,
			TextZ21Black2013,
			TextZ21DoesNotUnderstand,
			TextZ21NotRestricted,
			TextZ21RestrictionsUnknown,
			TextZ21SmartRail2012,
			TextZ21Start2016,
			TextZ21StartLocked,
			TextZ21StartUnlocked,
			TextZ21Type,
			TextZ21Unknown,
			TextZ21White2013,
			MaxTexts
		};

		enum Language : unsigned char
		{
			EN = 0,
			DE,
			ES,
			MaxLanguages
		};

		static void SetDefaultLanguage(Language language)
		{
			defaultLanguage = language >= MaxLanguages ? EN : language;
		}

		static Language GetDefaultLanguage()
		{
			return defaultLanguage;
		}

		static const char* GetText(const TextSelector selector)
		{
			return GetText(defaultLanguage, selector);
		}

		static const char* GetText(const Language language, const TextSelector selector)
		{
			if (language >= MaxLanguages || selector >= MaxTexts)
			{
				static const char* unknownText = "";
				return unknownText;
			}

			return languages[selector][language];
		}

		static const char* GetOnOff(const bool on)
		{
			return GetText(on ? TextOn : TextOff);
		}

		static const char* GetLeftRight(const Orientation direction)
		{
			return GetText(direction == OrientationRight ? TextRight : TextLeft);
		}

		static const char* GetGreenRed(const DataModel::AccessoryState state)
		{
			return GetText(state == DataModel::AccessoryStateOn ? TextGreen : TextRed);
		}

		static const char* languages[MaxTexts][MaxLanguages];
		static Language defaultLanguage;
};