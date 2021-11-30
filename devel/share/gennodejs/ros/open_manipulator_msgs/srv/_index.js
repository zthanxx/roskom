
"use strict";

let SetJointPosition = require('./SetJointPosition.js')
let SetDrawingTrajectory = require('./SetDrawingTrajectory.js')
let SetKinematicsPose = require('./SetKinematicsPose.js')
let GetJointPosition = require('./GetJointPosition.js')
let SetActuatorState = require('./SetActuatorState.js')
let GetKinematicsPose = require('./GetKinematicsPose.js')

module.exports = {
  SetJointPosition: SetJointPosition,
  SetDrawingTrajectory: SetDrawingTrajectory,
  SetKinematicsPose: SetKinematicsPose,
  GetJointPosition: GetJointPosition,
  SetActuatorState: SetActuatorState,
  GetKinematicsPose: GetKinematicsPose,
};
