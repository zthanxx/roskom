
"use strict";

let SetNamedDigitalOutput = require('./SetNamedDigitalOutput.js')
let ack_alarm = require('./ack_alarm.js')
let set_odometry = require('./set_odometry.js')
let set_digital_output = require('./set_digital_output.js')
let set_analog_output = require('./set_analog_output.js')
let home = require('./home.js')
let GetPOI = require('./GetPOI.js')
let set_CartesianEuler_pose = require('./set_CartesianEuler_pose.js')
let SetElevator = require('./SetElevator.js')
let axis_record = require('./axis_record.js')
let set_named_digital_output = require('./set_named_digital_output.js')
let set_height = require('./set_height.js')
let set_modbus_register = require('./set_modbus_register.js')
let set_mode = require('./set_mode.js')
let get_alarms = require('./get_alarms.js')
let SetString = require('./SetString.js')
let InsertTask = require('./InsertTask.js')
let GetMotorsHeadingOffset = require('./GetMotorsHeadingOffset.js')
let QueryAlarms = require('./QueryAlarms.js')
let SetLaserMode = require('./SetLaserMode.js')
let set_float_value = require('./set_float_value.js')
let GetPTZ = require('./GetPTZ.js')
let ResetFromSubState = require('./ResetFromSubState.js')
let SetMotorStatus = require('./SetMotorStatus.js')
let enable_disable = require('./enable_disable.js')
let get_digital_input = require('./get_digital_input.js')
let GetBool = require('./GetBool.js')
let SetMotorMode = require('./SetMotorMode.js')
let get_modbus_register = require('./get_modbus_register.js')
let SetByte = require('./SetByte.js')
let set_ptz = require('./set_ptz.js')
let SetMotorPID = require('./SetMotorPID.js')
let SetBuzzer = require('./SetBuzzer.js')
let SetEncoderTurns = require('./SetEncoderTurns.js')
let SetTransform = require('./SetTransform.js')
let get_mode = require('./get_mode.js')

module.exports = {
  SetNamedDigitalOutput: SetNamedDigitalOutput,
  ack_alarm: ack_alarm,
  set_odometry: set_odometry,
  set_digital_output: set_digital_output,
  set_analog_output: set_analog_output,
  home: home,
  GetPOI: GetPOI,
  set_CartesianEuler_pose: set_CartesianEuler_pose,
  SetElevator: SetElevator,
  axis_record: axis_record,
  set_named_digital_output: set_named_digital_output,
  set_height: set_height,
  set_modbus_register: set_modbus_register,
  set_mode: set_mode,
  get_alarms: get_alarms,
  SetString: SetString,
  InsertTask: InsertTask,
  GetMotorsHeadingOffset: GetMotorsHeadingOffset,
  QueryAlarms: QueryAlarms,
  SetLaserMode: SetLaserMode,
  set_float_value: set_float_value,
  GetPTZ: GetPTZ,
  ResetFromSubState: ResetFromSubState,
  SetMotorStatus: SetMotorStatus,
  enable_disable: enable_disable,
  get_digital_input: get_digital_input,
  GetBool: GetBool,
  SetMotorMode: SetMotorMode,
  get_modbus_register: get_modbus_register,
  SetByte: SetByte,
  set_ptz: set_ptz,
  SetMotorPID: SetMotorPID,
  SetBuzzer: SetBuzzer,
  SetEncoderTurns: SetEncoderTurns,
  SetTransform: SetTransform,
  get_mode: get_mode,
};
