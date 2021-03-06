'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var DpContainer$Wonderjs = require("../../../../../dependency/container/DpContainer.bs.js");

function handleAddComponent(geometry, gameObject) {
  return Curry._2(DpContainer$Wonderjs.unsafeGetGeometryRepoDp(undefined).addGameObject, geometry, gameObject);
}

exports.handleAddComponent = handleAddComponent;
/* No side effect */
