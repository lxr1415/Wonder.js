open StateDataRenderWorkerType;

let setGPUDetectDataAllowHardwareInstance = (sandbox, state) => {
  ...state,
  gpuDetectRecord: {
    ...state.gpuDetectRecord,
    extensionInstancedArrays:
      Some({
        "drawElementsInstancedANGLE": Sinon.createEmptyStubWithJsObjSandbox(sandbox),
        "vertexAttribDivisorANGLE": Sinon.createEmptyStubWithJsObjSandbox(sandbox)
      })
  }
};

let getExtensionInstancedArrays = (state) =>
  state.gpuDetectRecord.extensionInstancedArrays |> OptionTool.unsafeGet;