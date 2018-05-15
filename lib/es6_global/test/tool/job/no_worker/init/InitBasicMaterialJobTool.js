// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as Sinon                      from "../../../../../../../node_modules/wonder-bs-sinon/lib/es6_global/src/sinon.js";
import * as TestTool$Wonderjs          from "../../../TestTool.js";
import * as FakeGlTool$Wonderjs        from "../../../gl/FakeGlTool.js";
import * as GameObjectAPI$Wonderjs     from "../../../../../src/api/GameObjectAPI.js";
import * as BoxGeometryTool$Wonderjs   from "../../../service/geometry/BoxGeometryTool.js";
import * as BasicMaterialAPI$Wonderjs  from "../../../../../src/api/material/BasicMaterialAPI.js";
import * as InitRenderJobTool$Wonderjs from "./InitRenderJobTool.js";

function initWithJobConfigWithoutBuildFakeDom(sandbox, noWorkerJobRecord) {
  return TestTool$Wonderjs.initWithJobConfigWithoutBuildFakeDom(sandbox, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* Some */[noWorkerJobRecord], /* None */0, /* () */0);
}

function initWithJobConfig(sandbox, noWorkerJobRecord) {
  return TestTool$Wonderjs.initWithJobConfig(sandbox, /* None */0, /* None */0, /* Some */[noWorkerJobRecord], /* None */0, /* () */0);
}

function prepareGameObject(_, state) {
  var match = BasicMaterialAPI$Wonderjs.createBasicMaterial(state);
  var material = match[1];
  var match$1 = BoxGeometryTool$Wonderjs.createBoxGeometry(match[0]);
  var geometry = match$1[1];
  var match$2 = GameObjectAPI$Wonderjs.createGameObject(match$1[0]);
  var gameObject = match$2[1];
  var state$1 = GameObjectAPI$Wonderjs.addGameObjectBoxGeometryComponent(gameObject, geometry, GameObjectAPI$Wonderjs.addGameObjectBasicMaterialComponent(gameObject, material, match$2[0]));
  return /* tuple */[
          state$1,
          gameObject,
          geometry,
          material
        ];
}

var exec = InitRenderJobTool$Wonderjs.exec;

function prepareForJudgeGLSLNotExec(sandbox, state) {
  var match = prepareGameObject(sandbox, state);
  var shaderSource = Sinon.createEmptyStubWithJsObjSandbox(sandbox);
  var createProgram = Sinon.createEmptyStubWithJsObjSandbox(sandbox);
  var state$1 = FakeGlTool$Wonderjs.setFakeGl(FakeGlTool$Wonderjs.buildFakeGl(sandbox, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* Some */[shaderSource], /* None */0, /* None */0, /* None */0, /* Some */[createProgram], /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* () */0), match[0]);
  return /* tuple */[
          state$1,
          shaderSource,
          match[1]
        ];
}

function prepareForJudgeGLSL(sandbox, state) {
  var match = prepareForJudgeGLSLNotExec(sandbox, state);
  InitRenderJobTool$Wonderjs.exec(match[0]);
  return match[1];
}

export {
  initWithJobConfigWithoutBuildFakeDom ,
  initWithJobConfig                    ,
  prepareGameObject                    ,
  exec                                 ,
  prepareForJudgeGLSLNotExec           ,
  prepareForJudgeGLSL                  ,
  
}
/* Sinon Not a pure module */