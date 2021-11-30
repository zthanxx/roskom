
"use strict";

let MotorPID = require('./MotorPID.js');
let MotorHeadingOffset = require('./MotorHeadingOffset.js');
let AlarmSensor = require('./AlarmSensor.js');
let inputs_outputs = require('./inputs_outputs.js');
let OdomCalibrationStatusStamped = require('./OdomCalibrationStatusStamped.js');
let OdomManualCalibrationStatus = require('./OdomManualCalibrationStatus.js');
let BatteryStatus = require('./BatteryStatus.js');
let LaserMode = require('./LaserMode.js');
let StringArray = require('./StringArray.js');
let alarmsmonitor = require('./alarmsmonitor.js');
let Alarms = require('./Alarms.js');
let ptz = require('./ptz.js');
let Pose2DArray = require('./Pose2DArray.js');
let MotorsStatus = require('./MotorsStatus.js');
let MotorsStatusDifferential = require('./MotorsStatusDifferential.js');
let MotorStatus = require('./MotorStatus.js');
let OdomCalibrationStatus = require('./OdomCalibrationStatus.js');
let BatteryStatusStamped = require('./BatteryStatusStamped.js');
let alarmmonitor = require('./alarmmonitor.js');
let named_inputs_outputs = require('./named_inputs_outputs.js');
let encoders = require('./encoders.js');
let ElevatorStatus = require('./ElevatorStatus.js');
let SubState = require('./SubState.js');
let BatteryDockingStatus = require('./BatteryDockingStatus.js');
let BoolArray = require('./BoolArray.js');
let Registers = require('./Registers.js');
let State = require('./State.js');
let InverterStatus = require('./InverterStatus.js');
let ReturnMessage = require('./ReturnMessage.js');
let RobotnikMotorsStatus = require('./RobotnikMotorsStatus.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let Interfaces = require('./Interfaces.js');
let Data = require('./Data.js');
let LaserStatus = require('./LaserStatus.js');
let Cartesian_Euler_pose = require('./Cartesian_Euler_pose.js');
let StringStamped = require('./StringStamped.js');
let ElevatorAction = require('./ElevatorAction.js');
let QueryAlarm = require('./QueryAlarm.js');
let named_input_output = require('./named_input_output.js');
let SafetyModuleStatus = require('./SafetyModuleStatus.js');
let BatteryDockingStatusStamped = require('./BatteryDockingStatusStamped.js');
let Register = require('./Register.js');
let PresenceSensor = require('./PresenceSensor.js');
let OdomManualCalibrationStatusStamped = require('./OdomManualCalibrationStatusStamped.js');
let Axis = require('./Axis.js');
let PresenceSensorArray = require('./PresenceSensorArray.js');
let SetElevatorAction = require('./SetElevatorAction.js');
let SetElevatorResult = require('./SetElevatorResult.js');
let SetElevatorActionFeedback = require('./SetElevatorActionFeedback.js');
let SetElevatorGoal = require('./SetElevatorGoal.js');
let SetElevatorFeedback = require('./SetElevatorFeedback.js');
let SetElevatorActionGoal = require('./SetElevatorActionGoal.js');
let SetElevatorActionResult = require('./SetElevatorActionResult.js');

module.exports = {
  MotorPID: MotorPID,
  MotorHeadingOffset: MotorHeadingOffset,
  AlarmSensor: AlarmSensor,
  inputs_outputs: inputs_outputs,
  OdomCalibrationStatusStamped: OdomCalibrationStatusStamped,
  OdomManualCalibrationStatus: OdomManualCalibrationStatus,
  BatteryStatus: BatteryStatus,
  LaserMode: LaserMode,
  StringArray: StringArray,
  alarmsmonitor: alarmsmonitor,
  Alarms: Alarms,
  ptz: ptz,
  Pose2DArray: Pose2DArray,
  MotorsStatus: MotorsStatus,
  MotorsStatusDifferential: MotorsStatusDifferential,
  MotorStatus: MotorStatus,
  OdomCalibrationStatus: OdomCalibrationStatus,
  BatteryStatusStamped: BatteryStatusStamped,
  alarmmonitor: alarmmonitor,
  named_inputs_outputs: named_inputs_outputs,
  encoders: encoders,
  ElevatorStatus: ElevatorStatus,
  SubState: SubState,
  BatteryDockingStatus: BatteryDockingStatus,
  BoolArray: BoolArray,
  Registers: Registers,
  State: State,
  InverterStatus: InverterStatus,
  ReturnMessage: ReturnMessage,
  RobotnikMotorsStatus: RobotnikMotorsStatus,
  Pose2DStamped: Pose2DStamped,
  Interfaces: Interfaces,
  Data: Data,
  LaserStatus: LaserStatus,
  Cartesian_Euler_pose: Cartesian_Euler_pose,
  StringStamped: StringStamped,
  ElevatorAction: ElevatorAction,
  QueryAlarm: QueryAlarm,
  named_input_output: named_input_output,
  SafetyModuleStatus: SafetyModuleStatus,
  BatteryDockingStatusStamped: BatteryDockingStatusStamped,
  Register: Register,
  PresenceSensor: PresenceSensor,
  OdomManualCalibrationStatusStamped: OdomManualCalibrationStatusStamped,
  Axis: Axis,
  PresenceSensorArray: PresenceSensorArray,
  SetElevatorAction: SetElevatorAction,
  SetElevatorResult: SetElevatorResult,
  SetElevatorActionFeedback: SetElevatorActionFeedback,
  SetElevatorGoal: SetElevatorGoal,
  SetElevatorFeedback: SetElevatorFeedback,
  SetElevatorActionGoal: SetElevatorActionGoal,
  SetElevatorActionResult: SetElevatorActionResult,
};
