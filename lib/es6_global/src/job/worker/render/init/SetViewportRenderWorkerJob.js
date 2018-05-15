// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

import * as MostUtils$Wonderjs                from "../../../../asset/utils/MostUtils.js";
import * as MessageService$Wonderjs           from "../../../../service/primitive/worker/MessageService.js";
import * as DeviceManagerService$Wonderjs     from "../../../../service/record/all/device/DeviceManagerService.js";
import * as StateRenderWorkerService$Wonderjs from "../../../../service/state/render_worker/state/StateRenderWorkerService.js";

function execJob(_, e, stateData) {
  return MostUtils$Wonderjs.callFunc((function () {
                var state = StateRenderWorkerService$Wonderjs.unsafeGetState(stateData);
                var data = MessageService$Wonderjs.getRecord(e);
                var viewportData = data.viewportData;
                state[/* deviceManagerRecord */3] = DeviceManagerService$Wonderjs.setViewportData(viewportData, DeviceManagerService$Wonderjs.setViewportOfGl(DeviceManagerService$Wonderjs.unsafeGetGl(state[/* deviceManagerRecord */3]), viewportData, state[/* deviceManagerRecord */3]));
                StateRenderWorkerService$Wonderjs.setState(stateData, state);
                return e;
              }));
}

export {
  execJob ,
  
}
/* MostUtils-Wonderjs Not a pure module */