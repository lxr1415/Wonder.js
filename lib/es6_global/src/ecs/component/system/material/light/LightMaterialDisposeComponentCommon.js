// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as Contract$WonderLog                       from "../../../../../../../../node_modules/wonder-log/lib/es6_global/src/Contract.js";
import * as StateData$Wonderjs                       from "../../../../../core/StateData.js";
import * as LightMaterialGroupCommon$Wonderjs        from "./LightMaterialGroupCommon.js";
import * as LightMaterialStateCommon$Wonderjs        from "./LightMaterialStateCommon.js";
import * as MaterialDisposeComponentCommon$Wonderjs  from "../MaterialDisposeComponentCommon.js";
import * as ComponentDisposeComponentCommon$Wonderjs from "../../component/ComponentDisposeComponentCommon.js";

function isAlive(material, state) {
  return MaterialDisposeComponentCommon$Wonderjs.isAlive(material, LightMaterialStateCommon$Wonderjs.getMaterialData(state)[/* disposedIndexArray */7]);
}

function _disposeData(material, data) {
  var match = MaterialDisposeComponentCommon$Wonderjs.disposeData(material, /* tuple */[
        data[/* shaderIndexMap */1],
        data[/* groupCountMap */6],
        data[/* gameObjectMap */5]
      ]);
  return /* record */[
          /* index */data[/* index */0],
          /* shaderIndexMap */match[0],
          /* diffuseColorMap */ComponentDisposeComponentCommon$Wonderjs.disposeSparseMapData(material, data[/* diffuseColorMap */2]),
          /* specularColorMap */ComponentDisposeComponentCommon$Wonderjs.disposeSparseMapData(material, data[/* specularColorMap */3]),
          /* shininessMap */ComponentDisposeComponentCommon$Wonderjs.disposeSparseMapData(material, data[/* shininessMap */4]),
          /* gameObjectMap */match[2],
          /* groupCountMap */match[1],
          /* disposedIndexArray */data[/* disposedIndexArray */7]
        ];
}

function _handleDispose(disposedIndexArray, material, state) {
  var match = LightMaterialGroupCommon$Wonderjs.isGroupMaterial(material, state);
  if (match !== 0) {
    return LightMaterialGroupCommon$Wonderjs.decreaseGroupCount(material, state);
  } else {
    var newrecord = state.slice();
    var newrecord$1 = _disposeData(material, LightMaterialStateCommon$Wonderjs.getMaterialData(state)).slice();
    newrecord$1[/* disposedIndexArray */7] = MaterialDisposeComponentCommon$Wonderjs.addDisposeIndex(material, disposedIndexArray);
    newrecord[/* lightMaterialData */16] = newrecord$1;
    return newrecord;
  }
}

function handleDisposeComponent(material, state) {
  Contract$WonderLog.requireCheck((function () {
          return ComponentDisposeComponentCommon$Wonderjs.checkComponentShouldAlive(material, isAlive, state);
        }), StateData$Wonderjs.stateData[/* isDebug */1]);
  return _handleDispose(LightMaterialStateCommon$Wonderjs.getMaterialData(state)[/* disposedIndexArray */7], material, state);
}

function handleBatchDisposeComponent(materialArray, _, state) {
  return MaterialDisposeComponentCommon$Wonderjs.handleBatchDisposeComponent(materialArray, LightMaterialStateCommon$Wonderjs.getMaterialData(state)[/* disposedIndexArray */7], /* tuple */[
              isAlive,
              _handleDispose
            ], state);
}

export {
  isAlive                     ,
  _disposeData                ,
  _handleDispose              ,
  handleDisposeComponent      ,
  handleBatchDisposeComponent ,
  
}
/* Contract-WonderLog Not a pure module */