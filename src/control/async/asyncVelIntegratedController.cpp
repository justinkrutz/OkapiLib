/**
 * @author Ryan Benasutti, WPI
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#include "okapi/control/async/asyncVelIntegratedController.hpp"

namespace okapi {
AsyncVelIntegratedControllerArgs::AsyncVelIntegratedControllerArgs(
  std::shared_ptr<AbstractMotor> imotor)
  : motor(imotor) {
}

AsyncVelIntegratedController::AsyncVelIntegratedController(Motor imotor)
  : AsyncVelIntegratedController(std::make_shared<Motor>(imotor)) {
}

AsyncVelIntegratedController::AsyncVelIntegratedController(MotorGroup imotor)
  : AsyncVelIntegratedController(std::make_shared<MotorGroup>(imotor)) {
}

AsyncVelIntegratedController::AsyncVelIntegratedController(std::shared_ptr<AbstractMotor> imotor)
  : motor(imotor) {
}

AsyncVelIntegratedController::AsyncVelIntegratedController(
  const AsyncVelIntegratedControllerArgs &iparams)
  : motor(iparams.motor) {
}

void AsyncVelIntegratedController::setTarget(const double itarget) {
  motor->moveVelocity(itarget);
  lastTarget = itarget;
}

double AsyncVelIntegratedController::getError() const {
  return lastTarget - motor->getActualVelocity();
}

bool AsyncVelIntegratedController::isSettled() {
  return settledUtil.isSettled(getError());
}

void AsyncVelIntegratedController::reset() {
  // Don't have to do anything
}
} // namespace okapi
