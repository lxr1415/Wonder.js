// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE

import * as TypeArrayService$Wonderjs from "../../service/primitive/buffer/TypeArrayService.js";
import * as ArrayService$WonderCommonlib from "../../../../../node_modules/wonder-commonlib/lib/es6_global/src/ArrayService.js";

function _fillVertexBuffer(buffer, points, offset) {
  TypeArrayService$Wonderjs.setFloat32Array(points, new Float32Array(buffer, offset, points.length));
  return buffer;
}

function _fillIndexBuffer(buffer, indices, offset) {
  TypeArrayService$Wonderjs.setUint16Array(indices, new Uint16Array(buffer, offset, indices.length));
  return buffer;
}

function _fillImageUint8ArrayBuffer(buffer, uint8Array, offset) {
  TypeArrayService$Wonderjs.setUint8Array(uint8Array, new Uint8Array(buffer, offset, uint8Array.length));
  return buffer;
}

function build(totalByteLength, param, imageUint8DataArr) {
  var match = param[1];
  var buffer = new ArrayBuffer(totalByteLength);
  var buffer$1 = ArrayService$WonderCommonlib.reduceOneParam((function (buffer, param) {
          return _fillVertexBuffer(buffer, param[1], param[0]);
        }), buffer, match[0]);
  var buffer$2 = ArrayService$WonderCommonlib.reduceOneParam((function (buffer, param) {
          return _fillIndexBuffer(buffer, param[1], param[0]);
        }), buffer$1, match[1]);
  return ArrayService$WonderCommonlib.reduceOneParam((function (buffer, param) {
                return _fillImageUint8ArrayBuffer(buffer, param[/* uint8Array */2], param[/* byteOffset */3]);
              }), buffer$2, imageUint8DataArr);
}

export {
  _fillVertexBuffer ,
  _fillIndexBuffer ,
  _fillImageUint8ArrayBuffer ,
  build ,
  
}
/* TypeArrayService-Wonderjs Not a pure module */