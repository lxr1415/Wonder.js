// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE

import * as Js_primitive from "../../../../../../node_modules/bs-platform/lib/es6/js_primitive.js";
import * as Log$WonderLog from "../../../../../../node_modules/wonder-log/lib/es6_global/src/Log.js";
import * as OptionService$Wonderjs from "../../../service/atom/OptionService.js";
import * as SparseMapService$WonderCommonlib from "../../../../../../node_modules/wonder-commonlib/lib/es6_global/src/SparseMapService.js";
import * as NameLightMaterialMainService$Wonderjs from "../../../service/state/main/material/light/NameLightMaterialMainService.js";
import * as GetComponentGameObjectService$Wonderjs from "../../../service/record/main/gameObject/GetComponentGameObjectService.js";
import * as CurrentComponentDataMapService$Wonderjs from "../../../service/record/all/gameObject/CurrentComponentDataMapService.js";
import * as OperateLightMaterialMainService$Wonderjs from "../../../service/state/main/material/light/OperateLightMaterialMainService.js";
import * as GetBoxGeometryIndicesMainService$Wonderjs from "../../../service/state/main/geometry/box/GetBoxGeometryIndicesMainService.js";
import * as GetBoxGeometryNormalsMainService$Wonderjs from "../../../service/state/main/geometry/box/GetBoxGeometryNormalsMainService.js";
import * as IndicesCustomGeometryMainService$Wonderjs from "../../../service/state/main/geometry/custom/IndicesCustomGeometryMainService.js";
import * as NormalsCustomGeometryMainService$Wonderjs from "../../../service/state/main/geometry/custom/NormalsCustomGeometryMainService.js";
import * as GetBoxGeometryVerticesMainService$Wonderjs from "../../../service/state/main/geometry/box/GetBoxGeometryVerticesMainService.js";
import * as VerticesCustomGeometryMainService$Wonderjs from "../../../service/state/main/geometry/custom/VerticesCustomGeometryMainService.js";
import * as GetBoxGeometryTexCoordsMainService$Wonderjs from "../../../service/state/main/geometry/box/GetBoxGeometryTexCoordsMainService.js";
import * as TexCoordsCustomGeometryMainService$Wonderjs from "../../../service/state/main/geometry/custom/TexCoordsCustomGeometryMainService.js";

function _hasMap(gameObject, state) {
  var gameObjectRecord = state[/* gameObjectRecord */10];
  var match = GetComponentGameObjectService$Wonderjs.getLightMaterialComponent(gameObject, gameObjectRecord);
  if (match !== undefined) {
    var lightMaterial = match;
    if (OperateLightMaterialMainService$Wonderjs.hasDiffuseMap(lightMaterial, state)) {
      return true;
    } else {
      return OperateLightMaterialMainService$Wonderjs.hasSpecularMap(lightMaterial, state);
    }
  } else {
    return false;
  }
}

function _getBoxGeometryData(param, geometry, param$1, state) {
  var customGeometryDataMap = param$1[1];
  var boxGeometryDataMap = param$1[0];
  var meshIndex = param[1];
  var match = SparseMapService$WonderCommonlib.get(geometry, boxGeometryDataMap);
  if (match !== undefined) {
    var match$1 = match;
    return /* tuple */[
            match$1[0],
            match$1[1],
            meshIndex,
            /* tuple */[
              boxGeometryDataMap,
              customGeometryDataMap
            ]
          ];
  } else {
    var match$2 = _hasMap(param[0], state);
    var pointData = /* tuple */[
      GetBoxGeometryVerticesMainService$Wonderjs.getVertices(state),
      GetBoxGeometryNormalsMainService$Wonderjs.getNormals(state),
      match$2 ? Js_primitive.some(GetBoxGeometryTexCoordsMainService$Wonderjs.getTexCoords(state)) : undefined,
      GetBoxGeometryIndicesMainService$Wonderjs.getIndices(state)
    ];
    return /* tuple */[
            meshIndex,
            pointData,
            meshIndex + 1 | 0,
            /* tuple */[
              SparseMapService$WonderCommonlib.set(geometry, /* tuple */[
                    meshIndex,
                    pointData
                  ], boxGeometryDataMap),
              customGeometryDataMap
            ]
          ];
  }
}

function _getCustomGeometryData(param, geometry, param$1, state) {
  var customGeometryDataMap = param$1[1];
  var boxGeometryDataMap = param$1[0];
  var meshIndex = param[1];
  var match = SparseMapService$WonderCommonlib.get(geometry, customGeometryDataMap);
  if (match !== undefined) {
    var match$1 = match;
    return /* tuple */[
            match$1[0],
            match$1[1],
            meshIndex,
            /* tuple */[
              boxGeometryDataMap,
              customGeometryDataMap
            ]
          ];
  } else {
    var match$2 = _hasMap(param[0], state);
    var pointData = /* tuple */[
      VerticesCustomGeometryMainService$Wonderjs.getVertices(geometry, state),
      NormalsCustomGeometryMainService$Wonderjs.getNormals(geometry, state),
      match$2 ? Js_primitive.some(TexCoordsCustomGeometryMainService$Wonderjs.getTexCoords(geometry, state)) : undefined,
      IndicesCustomGeometryMainService$Wonderjs.getIndices(geometry, state)
    ];
    return /* tuple */[
            meshIndex,
            pointData,
            meshIndex + 1 | 0,
            /* tuple */[
              boxGeometryDataMap,
              SparseMapService$WonderCommonlib.set(geometry, /* tuple */[
                    meshIndex,
                    pointData
                  ], customGeometryDataMap)
            ]
          ];
  }
}

function _getMeshData(param, param$1, state) {
  var customGeometryDataMap = param$1[1];
  var boxGeometryDataMap = param$1[0];
  var meshIndex = param[1];
  var gameObject = param[0];
  var gameObjectRecord = state[/* gameObjectRecord */10];
  var match = GetComponentGameObjectService$Wonderjs.getGeometryComponentData(gameObject, gameObjectRecord);
  if (match !== undefined) {
    var match$1 = match;
    var type_ = match$1[1];
    var geometry = match$1[0];
    if (type_ === CurrentComponentDataMapService$Wonderjs.getBoxGeometryType(/* () */0)) {
      return _getBoxGeometryData(/* tuple */[
                  gameObject,
                  meshIndex
                ], geometry, /* tuple */[
                  boxGeometryDataMap,
                  customGeometryDataMap
                ], state);
    } else if (type_ === CurrentComponentDataMapService$Wonderjs.getCustomGeometryType(/* () */0)) {
      return _getCustomGeometryData(/* tuple */[
                  gameObject,
                  meshIndex
                ], geometry, /* tuple */[
                  boxGeometryDataMap,
                  customGeometryDataMap
                ], state);
    } else {
      return Log$WonderLog.fatal(Log$WonderLog.buildFatalMessage("unknown type_", "", "", "", "type_: " + (String(type_) + "")));
    }
  } else {
    return /* tuple */[
            undefined,
            undefined,
            meshIndex,
            /* tuple */[
              boxGeometryDataMap,
              customGeometryDataMap
            ]
          ];
  }
}

function _getLightMaterialData(param, lightMaterialDataMap, state) {
  var materialIndex = param[1];
  var gameObjectRecord = state[/* gameObjectRecord */10];
  var match = GetComponentGameObjectService$Wonderjs.getLightMaterialComponent(param[0], gameObjectRecord);
  if (match !== undefined) {
    var lightMaterial = match;
    var match$1 = SparseMapService$WonderCommonlib.get(lightMaterial, lightMaterialDataMap);
    if (match$1 !== undefined) {
      var match$2 = match$1;
      return /* tuple */[
              match$2[0],
              match$2[1],
              materialIndex,
              lightMaterialDataMap
            ];
    } else {
      var materialData = /* tuple */[
        lightMaterial,
        NameLightMaterialMainService$Wonderjs.getName(lightMaterial, state)
      ];
      return /* tuple */[
              materialIndex,
              materialData,
              materialIndex + 1 | 0,
              SparseMapService$WonderCommonlib.set(lightMaterial, /* tuple */[
                    materialIndex,
                    materialData
                  ], lightMaterialDataMap)
            ];
    }
  } else {
    return /* tuple */[
            undefined,
            undefined,
            materialIndex,
            lightMaterialDataMap
          ];
  }
}

function _getCameraData(param, state) {
  var cameraIndex = param[1];
  var gameObjectRecord = state[/* gameObjectRecord */10];
  var match = GetComponentGameObjectService$Wonderjs.getPerspectiveCameraProjectionComponent(param[0], gameObjectRecord);
  if (match !== undefined) {
    var cameraData = match;
    return /* tuple */[
            cameraIndex,
            cameraData,
            cameraIndex + 1 | 0
          ];
  } else {
    return /* tuple */[
            undefined,
            undefined,
            cameraIndex
          ];
  }
}

function _getLightData(param, state) {
  var lightIndex = param[1];
  var gameObject = param[0];
  var gameObjectRecord = state[/* gameObjectRecord */10];
  var match = GetComponentGameObjectService$Wonderjs.getDirectionLightComponent(gameObject, gameObjectRecord);
  if (match !== undefined) {
    var lightData = /* tuple */[
      "directional",
      match
    ];
    return /* tuple */[
            lightIndex,
            lightData,
            lightIndex + 1 | 0
          ];
  } else {
    var match$1 = GetComponentGameObjectService$Wonderjs.getPointLightComponent(gameObject, gameObjectRecord);
    if (match$1 !== undefined) {
      var lightData$1 = /* tuple */[
        "point",
        match$1
      ];
      return /* tuple */[
              lightIndex,
              lightData$1,
              lightIndex + 1 | 0
            ];
    } else {
      return /* tuple */[
              undefined,
              undefined,
              lightIndex
            ];
    }
  }
}

function getComponentData(param) {
  var match = param[4];
  var lightDataMap = match[3];
  var cameraDataMap = match[2];
  var materialDataMap = match[1];
  var meshPointDataMap = match[0];
  var match$1 = param[3];
  var match$2 = match$1[0];
  var match$3 = param[2];
  var state = param[1];
  var gameObject = param[0];
  var match$4 = _getMeshData(/* tuple */[
        gameObject,
        match$3[0]
      ], /* tuple */[
        match$2[0],
        match$2[1]
      ], state);
  var match$5 = match$4[3];
  var meshIndex = match$4[0];
  var meshPointDataMap$1 = meshIndex !== undefined ? SparseMapService$WonderCommonlib.set(meshIndex, OptionService$Wonderjs.unsafeGet(match$4[1]), meshPointDataMap) : meshPointDataMap;
  var match$6 = _getLightMaterialData(/* tuple */[
        gameObject,
        match$3[1]
      ], match$1[1], state);
  var materialIndex = match$6[0];
  var materialDataMap$1 = materialIndex !== undefined ? SparseMapService$WonderCommonlib.set(materialIndex, OptionService$Wonderjs.unsafeGet(match$6[1]), materialDataMap) : materialDataMap;
  var match$7 = _getCameraData(/* tuple */[
        gameObject,
        match$3[2]
      ], state);
  var cameraIndex = match$7[0];
  var cameraDataMap$1 = cameraIndex !== undefined ? SparseMapService$WonderCommonlib.set(cameraIndex, OptionService$Wonderjs.unsafeGet(match$7[1]), cameraDataMap) : cameraDataMap;
  var match$8 = _getLightData(/* tuple */[
        gameObject,
        match$3[3]
      ], state);
  var lightIndex = match$8[0];
  var lightDataMap$1 = lightIndex !== undefined ? SparseMapService$WonderCommonlib.set(lightIndex, OptionService$Wonderjs.unsafeGet(match$8[1]), lightDataMap) : lightDataMap;
  return /* tuple */[
          state,
          /* tuple */[
            meshIndex,
            materialIndex,
            cameraIndex,
            lightIndex
          ],
          /* tuple */[
            match$4[2],
            match$6[2],
            match$7[2],
            match$8[2]
          ],
          /* tuple */[
            /* tuple */[
              match$5[0],
              match$5[1]
            ],
            match$6[3]
          ],
          /* tuple */[
            meshPointDataMap$1,
            materialDataMap$1,
            cameraDataMap$1,
            lightDataMap$1
          ]
        ];
}

export {
  _hasMap ,
  _getBoxGeometryData ,
  _getCustomGeometryData ,
  _getMeshData ,
  _getLightMaterialData ,
  _getCameraData ,
  _getLightData ,
  getComponentData ,
  
}
/* Log-WonderLog Not a pure module */