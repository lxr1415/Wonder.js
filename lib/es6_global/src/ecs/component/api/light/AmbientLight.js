// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as Js_option                   from "../../../../../../../node_modules/bs-platform/lib/es6/js_option.js";
import * as Contract$WonderLog          from "../../../../../../../node_modules/wonder-log/lib/es6_global/src/Contract.js";
import * as StateData$Wonderjs          from "../../../../core/StateData.js";
import * as ComponentSystem$Wonderjs    from "../../system/component/ComponentSystem.js";
import * as AmbientLightSystem$Wonderjs from "../../system/light/ambient/AmbientLightSystem.js";

function getAmbientLightGameObject(light, state) {
  Contract$WonderLog.requireCheck((function () {
          return ComponentSystem$Wonderjs.checkComponentShouldAlive(light, AmbientLightSystem$Wonderjs.isAlive, state);
        }), StateData$Wonderjs.stateData[/* isDebug */1]);
  return Js_option.getExn(AmbientLightSystem$Wonderjs.getGameObject(AmbientLightSystem$Wonderjs.getMappedIndex(light, AmbientLightSystem$Wonderjs.getMappedIndexMap(state)), state));
}

function getAmbientLightColor(light, state) {
  Contract$WonderLog.requireCheck((function () {
          return ComponentSystem$Wonderjs.checkComponentShouldAlive(light, AmbientLightSystem$Wonderjs.isAlive, state);
        }), StateData$Wonderjs.stateData[/* isDebug */1]);
  return AmbientLightSystem$Wonderjs.getColor(AmbientLightSystem$Wonderjs.getMappedIndex(light, AmbientLightSystem$Wonderjs.getMappedIndexMap(state)), state);
}

function setAmbientLightColor(light, color, state) {
  Contract$WonderLog.requireCheck((function () {
          return ComponentSystem$Wonderjs.checkComponentShouldAlive(light, AmbientLightSystem$Wonderjs.isAlive, state);
        }), StateData$Wonderjs.stateData[/* isDebug */1]);
  return AmbientLightSystem$Wonderjs.setColor(AmbientLightSystem$Wonderjs.getMappedIndex(light, AmbientLightSystem$Wonderjs.getMappedIndexMap(state)), color, state);
}

var createAmbientLight = AmbientLightSystem$Wonderjs.create;

export {
  createAmbientLight        ,
  getAmbientLightGameObject ,
  getAmbientLightColor      ,
  setAmbientLightColor      ,
  
}
/* Contract-WonderLog Not a pure module */