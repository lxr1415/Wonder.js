let assembleWDB = AssembleWDBAPI.assembleWDB;

let assembleGLB = AssembleWDBAPI.assembleGLB;

let convertGLBToWDB = ConverterAPI.convertGLBToWDB;

let generateWDB = GenerateSceneGraphAPI.generateWDB;

let generateGLBData = GenerateSceneGraphAPI.generateGLBData;

let loadIMGUIAsset = LoaderManagerAPI.loadIMGUIAsset;

let loadWDB = LoaderManagerAPI.loadWDB;

let loadConfig = LoaderManagerAPI.loadConfig;

let getBasicCameraViewWorldToCameraMatrix = BasicCameraViewAPI.getBasicCameraViewWorldToCameraMatrix;

let unsafeGetGameObjectBasicCameraView = BasicCameraViewAPI.unsafeGetGameObjectBasicCameraView;

let createBasicCameraView = BasicCameraViewAPI.createBasicCameraView;

let setArcballCameraControllerRotateSpeed = ArcballCameraControllerAPI.setArcballCameraControllerRotateSpeed;

let unsafeGetArcballCameraControllerRotateSpeed = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerRotateSpeed;

let setArcballCameraControllerMoveSpeedY = ArcballCameraControllerAPI.setArcballCameraControllerMoveSpeedY;

let unsafeGetArcballCameraControllerMoveSpeedY = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMoveSpeedY;

let setArcballCameraControllerMoveSpeedX = ArcballCameraControllerAPI.setArcballCameraControllerMoveSpeedX;

let unsafeGetArcballCameraControllerMoveSpeedX = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMoveSpeedX;

let setArcballCameraControllerTarget = ArcballCameraControllerAPI.setArcballCameraControllerTarget;

let unsafeGetArcballCameraControllerTarget = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerTarget;

let setArcballCameraControllerThetaMargin = ArcballCameraControllerAPI.setArcballCameraControllerThetaMargin;

let unsafeGetArcballCameraControllerThetaMargin = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerThetaMargin;

let setArcballCameraControllerTheta = ArcballCameraControllerAPI.setArcballCameraControllerTheta;

let unsafeGetArcballCameraControllerTheta = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerTheta;

let setArcballCameraControllerPhi = ArcballCameraControllerAPI.setArcballCameraControllerPhi;

let unsafeGetArcballCameraControllerPhi = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerPhi;

let setArcballCameraControllerWheelSpeed = ArcballCameraControllerAPI.setArcballCameraControllerWheelSpeed;

let unsafeGetArcballCameraControllerWheelSpeed = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerWheelSpeed;

let setArcballCameraControllerMinDistance = ArcballCameraControllerAPI.setArcballCameraControllerMinDistance;

let unsafeGetArcballCameraControllerMinDistance = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerMinDistance;

let setArcballCameraControllerDistance = ArcballCameraControllerAPI.setArcballCameraControllerDistance;

let unsafeGetArcballCameraControllerDistance = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerDistance;

let unsafeGetArcballCameraControllerGameObject = ArcballCameraControllerAPI.unsafeGetArcballCameraControllerGameObject;

let createArcballCameraController = ArcballCameraControllerAPI.createArcballCameraController;

let unsafeGetGl = DeviceManagerAPI.unsafeGetGl;

let startDirector = DirectorAPI.startDirector;

let loopBody = DirectorAPI.loopBody;

let initDirector = DirectorAPI.initDirector;

let createCustomEvent = ManageEventAPI.createCustomEvent;

let emitCustomGameObjectEvent = ManageEventAPI.emitCustomGameObjectEvent;

let broadcastCustomGameObjectEvent = ManageEventAPI.broadcastCustomGameObjectEvent;

let triggerCustomGameObjectEvent = ManageEventAPI.triggerCustomGameObjectEvent;

let triggerCustomGlobalEvent = ManageEventAPI.triggerCustomGlobalEvent;

let offCustomGameObjectEventByHandleFunc = ManageEventAPI.offCustomGameObjectEventByHandleFunc;

let offCustomGameObjectEventByTarget = ManageEventAPI.offCustomGameObjectEventByTarget;

let onCustomGameObjectEvent = ManageEventAPI.onCustomGameObjectEvent;

let offCustomGlobalEventByHandleFunc = ManageEventAPI.offCustomGlobalEventByHandleFunc;

let offCustomGlobalEventByEventName = ManageEventAPI.offCustomGlobalEventByEventName;

let onCustomGlobalEvent = ManageEventAPI.onCustomGlobalEvent;

let offTouchEventByHandleFunc = ManageEventAPI.offTouchEventByHandleFunc;

let offKeyboardEventByHandleFunc = ManageEventAPI.offKeyboardEventByHandleFunc;

let offMouseEventByHandleFunc = ManageEventAPI.offMouseEventByHandleFunc;

let onTouchEvent = ManageEventAPI.onTouchEvent;

let onKeyboardEvent = ManageEventAPI.onKeyboardEvent;

let onMouseEvent = ManageEventAPI.onMouseEvent;

let setGameObjectName = GameObjectAPI.setGameObjectName;

let unsafeGetGameObjectName = GameObjectAPI.unsafeGetGameObjectName;

let getGameObjectName = GameObjectAPI.getGameObjectName;

let cloneGameObject = GameObjectAPI.cloneGameObject;

let batchDisposeGameObjectKeepOrder = GameObjectAPI.batchDisposeGameObjectKeepOrder;

let batchDisposeGameObject = GameObjectAPI.batchDisposeGameObject;

let initGameObject = GameObjectAPI.initGameObject;

let disposeGameObjectKeepOrder = GameObjectAPI.disposeGameObjectKeepOrder;

let disposeGameObject = GameObjectAPI.disposeGameObject;

let isGameObjectAlive = GameObjectAPI.isGameObjectAlive;

let disposeGameObjectObjectInstanceComponent = GameObjectAPI.disposeGameObjectObjectInstanceComponent;

let unsafeGetGameObjectObjectInstanceComponent = GameObjectAPI.unsafeGetGameObjectObjectInstanceComponent;

let addGameObjectObjectInstanceComponent = GameObjectAPI.addGameObjectObjectInstanceComponent;

let disposeGameObjectSourceInstanceComponent = GameObjectAPI.disposeGameObjectSourceInstanceComponent;

let hasGameObjectSourceInstanceComponent = GameObjectAPI.hasGameObjectSourceInstanceComponent;

let unsafeGetGameObjectSourceInstanceComponent = GameObjectAPI.unsafeGetGameObjectSourceInstanceComponent;

let addGameObjectSourceInstanceComponent = GameObjectAPI.addGameObjectSourceInstanceComponent;

let hasGameObjectPointLightComponent = GameObjectAPI.hasGameObjectPointLightComponent;

let unsafeGetGameObjectPointLightComponent = GameObjectAPI.unsafeGetGameObjectPointLightComponent;

let disposeGameObjectPointLightComponent = GameObjectAPI.disposeGameObjectPointLightComponent;

let addGameObjectPointLightComponent = GameObjectAPI.addGameObjectPointLightComponent;

let hasGameObjectDirectionLightComponent = GameObjectAPI.hasGameObjectDirectionLightComponent;

let unsafeGetGameObjectDirectionLightComponent = GameObjectAPI.unsafeGetGameObjectDirectionLightComponent;

let disposeGameObjectDirectionLightComponent = GameObjectAPI.disposeGameObjectDirectionLightComponent;

let addGameObjectDirectionLightComponent = GameObjectAPI.addGameObjectDirectionLightComponent;

let hasGameObjectMeshRendererComponent = GameObjectAPI.hasGameObjectMeshRendererComponent;

let unsafeGetGameObjectMeshRendererComponent = GameObjectAPI.unsafeGetGameObjectMeshRendererComponent;

let disposeGameObjectMeshRendererComponent = GameObjectAPI.disposeGameObjectMeshRendererComponent;

let addGameObjectMeshRendererComponent = GameObjectAPI.addGameObjectMeshRendererComponent;

let hasGameObjectLightMaterialComponent = GameObjectAPI.hasGameObjectLightMaterialComponent;

let unsafeGetGameObjectLightMaterialComponent = GameObjectAPI.unsafeGetGameObjectLightMaterialComponent;

let disposeGameObjectLightMaterialComponent = GameObjectAPI.disposeGameObjectLightMaterialComponent;

let addGameObjectLightMaterialComponent = GameObjectAPI.addGameObjectLightMaterialComponent;

let hasGameObjectBasicMaterialComponent = GameObjectAPI.hasGameObjectBasicMaterialComponent;

let unsafeGetGameObjectBasicMaterialComponent = GameObjectAPI.unsafeGetGameObjectBasicMaterialComponent;

let disposeGameObjectBasicMaterialComponent = GameObjectAPI.disposeGameObjectBasicMaterialComponent;

let addGameObjectBasicMaterialComponent = GameObjectAPI.addGameObjectBasicMaterialComponent;

let hasGameObjectGeometryComponent = GameObjectAPI.hasGameObjectGeometryComponent;

let unsafeGetGameObjectGeometryComponent = GameObjectAPI.unsafeGetGameObjectGeometryComponent;

let disposeGameObjectCustomGeometryComponent = GameObjectAPI.disposeGameObjectCustomGeometryComponent;

let addGameObjectCustomGeometryComponent = GameObjectAPI.addGameObjectCustomGeometryComponent;

let hasGameObjectBoxGeometryComponent = GameObjectAPI.hasGameObjectBoxGeometryComponent;

let disposeGameObjectBoxGeometryComponent = GameObjectAPI.disposeGameObjectBoxGeometryComponent;

let addGameObjectBoxGeometryComponent = GameObjectAPI.addGameObjectBoxGeometryComponent;

let hasGameObjectTransformComponent = GameObjectAPI.hasGameObjectTransformComponent;

let unsafeGetGameObjectTransformComponent = GameObjectAPI.unsafeGetGameObjectTransformComponent;

let disposeGameObjectTransformComponent = GameObjectAPI.disposeGameObjectTransformComponent;

let addGameObjectTransformComponent = GameObjectAPI.addGameObjectTransformComponent;

let hasGameObjectArcballCameraControllerComponent = GameObjectAPI.hasGameObjectArcballCameraControllerComponent;

let unsafeGetGameObjectArcballCameraControllerComponent = GameObjectAPI.unsafeGetGameObjectArcballCameraControllerComponent;

let disposeGameObjectArcballCameraControllerComponent = GameObjectAPI.disposeGameObjectArcballCameraControllerComponent;

let addGameObjectArcballCameraControllerComponent = GameObjectAPI.addGameObjectArcballCameraControllerComponent;

let hasGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.hasGameObjectPerspectiveCameraProjectionComponent;

let unsafeGetGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.unsafeGetGameObjectPerspectiveCameraProjectionComponent;

let disposeGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.disposeGameObjectPerspectiveCameraProjectionComponent;

let addGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.addGameObjectPerspectiveCameraProjectionComponent;

let hasGameObjectBasicCameraViewComponent = GameObjectAPI.hasGameObjectBasicCameraViewComponent;

let unsafeGetGameObjectBasicCameraViewComponent = GameObjectAPI.unsafeGetGameObjectBasicCameraViewComponent;

let disposeGameObjectBasicCameraViewComponent = GameObjectAPI.disposeGameObjectBasicCameraViewComponent;

let addGameObjectBasicCameraViewComponent = GameObjectAPI.addGameObjectBasicCameraViewComponent;

let createGameObject = GameObjectAPI.createGameObject;

let unsafeGetBoxGeometryGameObject = BoxGeometryAPI.unsafeGetBoxGeometryGameObject;

let getBoxGeometryIndices = BoxGeometryAPI.getBoxGeometryIndices;

let getBoxGeometryNormals = BoxGeometryAPI.getBoxGeometryNormals;

let getBoxGeometryTexCoords = BoxGeometryAPI.getBoxGeometryTexCoords;

let getBoxGeometryVertices = BoxGeometryAPI.getBoxGeometryVertices;

let getBoxGeometryDrawMode = BoxGeometryAPI.getBoxGeometryDrawMode;

let createBoxGeometry = BoxGeometryAPI.createBoxGeometry;

let unsafeGetCustomGeometryGameObject = CustomGeometryAPI.unsafeGetCustomGeometryGameObject;

let setCustomGeometryIndices = CustomGeometryAPI.setCustomGeometryIndices;

let getCustomGeometryIndices = CustomGeometryAPI.getCustomGeometryIndices;

let setCustomGeometryNormals = CustomGeometryAPI.setCustomGeometryNormals;

let getCustomGeometryNormals = CustomGeometryAPI.getCustomGeometryNormals;

let setCustomGeometryTexCoords = CustomGeometryAPI.setCustomGeometryTexCoords;

let getCustomGeometryTexCoords = CustomGeometryAPI.getCustomGeometryTexCoords;

let setCustomGeometryVertices = CustomGeometryAPI.setCustomGeometryVertices;

let getCustomGeometryVertices = CustomGeometryAPI.getCustomGeometryVertices;

let getCustomGeometryDrawMode = CustomGeometryAPI.getCustomGeometryDrawMode;

let createCustomGeometry = CustomGeometryAPI.createCustomGeometry;

let setSetting = ManageIMGUIAPI.setSetting;

let getSetting = ManageIMGUIAPI.getSetting;

let setIMGUIFunc = ManageIMGUIAPI.setIMGUIFunc;

let removeWorkerMainLoopJob = JobAPI.removeWorkerMainLoopJob;

let addWorkerMainLoopJob = JobAPI.addWorkerMainLoopJob;

let removeWorkerMainInitJob = JobAPI.removeWorkerMainInitJob;

let addWorkerMainInitJob = JobAPI.addWorkerMainInitJob;

let removeNoWorkerLoopJob = JobAPI.removeNoWorkerLoopJob;

let removeNoWorkerInitJob = JobAPI.removeNoWorkerInitJob;

let addNoWorkerLoopJob = JobAPI.addNoWorkerLoopJob;

let addNoWorkerInitJob = JobAPI.addNoWorkerInitJob;

let setDirectionLightIntensity = DirectionLightAPI.setDirectionLightIntensity;

let getDirectionLightIntensity = DirectionLightAPI.getDirectionLightIntensity;

let setDirectionLightColor = DirectionLightAPI.setDirectionLightColor;

let getDirectionLightColor = DirectionLightAPI.getDirectionLightColor;

let unsafeGetDirectionLightGameObject = DirectionLightAPI.unsafeGetDirectionLightGameObject;

let createDirectionLight = DirectionLightAPI.createDirectionLight;

let setPointLightRangeLevel = PointLightAPI.setPointLightRangeLevel;

let setPointLightRange = PointLightAPI.setPointLightRange;

let getPointLightRange = PointLightAPI.getPointLightRange;

let setPointLightQuadratic = PointLightAPI.setPointLightQuadratic;

let getPointLightQuadratic = PointLightAPI.getPointLightQuadratic;

let setPointLightLinear = PointLightAPI.setPointLightLinear;

let getPointLightLinear = PointLightAPI.getPointLightLinear;

let setPointLightConstant = PointLightAPI.setPointLightConstant;

let getPointLightConstant = PointLightAPI.getPointLightConstant;

let setPointLightIntensity = PointLightAPI.setPointLightIntensity;

let getPointLightIntensity = PointLightAPI.getPointLightIntensity;

let setPointLightColor = PointLightAPI.setPointLightColor;

let getPointLightColor = PointLightAPI.getPointLightColor;

let unsafeGetPointLightGameObject = PointLightAPI.unsafeGetPointLightGameObject;

let createPointLight = PointLightAPI.createPointLight;

let hasBasicMaterialMap = BasicMaterialAPI.hasBasicMaterialMap;

let setBasicMaterialMap = BasicMaterialAPI.setBasicMaterialMap;

let unsafeGetBasicMaterialMap = BasicMaterialAPI.unsafeGetBasicMaterialMap;

let setBasicMaterialColor = BasicMaterialAPI.setBasicMaterialColor;

let getBasicMaterialColor = BasicMaterialAPI.getBasicMaterialColor;

let unsafeGetBasicMaterialGameObject = BasicMaterialAPI.unsafeGetBasicMaterialGameObject;

let createBasicMaterial = BasicMaterialAPI.createBasicMaterial;

let setLightMaterialName = LightMaterialAPI.setLightMaterialName;

let unsafeGetLightMaterialName = LightMaterialAPI.unsafeGetLightMaterialName;

let hasLightMaterialSpecularMap = LightMaterialAPI.hasLightMaterialSpecularMap;

let setLightMaterialSpecularMap = LightMaterialAPI.setLightMaterialSpecularMap;

let unsafeGetLightMaterialSpecularMap = LightMaterialAPI.unsafeGetLightMaterialSpecularMap;

let hasLightMaterialDiffuseMap = LightMaterialAPI.hasLightMaterialDiffuseMap;

let setLightMaterialDiffuseMap = LightMaterialAPI.setLightMaterialDiffuseMap;

let unsafeGetLightMaterialDiffuseMap = LightMaterialAPI.unsafeGetLightMaterialDiffuseMap;

let setLightMaterialShininess = LightMaterialAPI.setLightMaterialShininess;

let getLightMaterialShininess = LightMaterialAPI.getLightMaterialShininess;

let setLightMaterialSpecularColor = LightMaterialAPI.setLightMaterialSpecularColor;

let getLightMaterialSpecularColor = LightMaterialAPI.getLightMaterialSpecularColor;

let setLightMaterialDiffuseColor = LightMaterialAPI.setLightMaterialDiffuseColor;

let getLightMaterialDiffuseColor = LightMaterialAPI.getLightMaterialDiffuseColor;

let unsafeGetLightMaterialGameObject = LightMaterialAPI.unsafeGetLightMaterialGameObject;

let createLightMaterial = LightMaterialAPI.createLightMaterial;

let replaceMaterial = MaterialAPI.replaceMaterial;

let unsafeGetMeshRendererGameObject = MeshRendererAPI.unsafeGetMeshRendererGameObject;

let createMeshRenderer = MeshRendererAPI.createMeshRenderer;

let setPerspectiveCameraProjectionFar = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFar;

let unsafeGetPerspectiveCameraFar = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFar;

let setPerspectiveCameraProjectionNear = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionNear;

let unsafeGetPerspectiveCameraNear = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraNear;

let setPerspectiveCameraProjectionAspect = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionAspect;

let unsafeGetPerspectiveCameraAspect = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraAspect;

let setPerspectiveCameraProjectionFovy = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFovy;

let unsafeGetPerspectiveCameraFovy = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFovy;

let unsafeGetPerspectiveCameraProjectionGameObject = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionGameObject;

let unsafeGetPerspectiveCameraProjectionPMatrix = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionPMatrix;

let createPerspectiveCameraProjection = PerspectiveCameraProjectionAPI.createPerspectiveCameraProjection;

let addSceneChildren = SceneAPI.addSceneChildren;

let addSceneChild = SceneAPI.addSceneChild;

let getSceneGameObject = SceneAPI.getSceneGameObject;

let setAmbientLightColor = SceneAPI.setAmbientLightColor;

let getAmbientLightColor = SceneAPI.getAmbientLightColor;

let setCurrentCameraGameObject = SceneAPI.setCurrentCameraGameObject;

let getCurrentCameraGameObject = SceneAPI.getCurrentCameraGameObject;

let markSourceInstanceModelMatrixIsStatic = SourceInstanceAPI.markSourceInstanceModelMatrixIsStatic;

let getSourceInstanceObjectInstanceTransformArray = SourceInstanceAPI.getSourceInstanceObjectInstanceTransformArray;

let createObjectInstanceGameObject = SourceInstanceAPI.createObjectInstanceGameObject;

let unsafeGetSourceInstanceGameObject = SourceInstanceAPI.unsafeGetSourceInstanceGameObject;

let createSourceInstance = SourceInstanceAPI.createSourceInstance;

let setIsDebug = StateAPI.setIsDebug;

let setStateToData = StateAPI.setStateToData;

let setState = StateAPI.setState;

let createState = StateAPI.createState;

let getStateFromData = StateAPI.getStateFromData;

let unsafeGetState = StateAPI.unsafeGetState;

let createStateData = StateAPI.createStateData;

let getStateData = StateAPI.getStateData;

let restoreState = StateAPI.restoreState;

let deepCopyForRestore = StateAPI.deepCopyForRestore;

let setSparseMapValue = SparseMapAPI.setSparseMapValue;

let getSparseMapValue = SparseMapAPI.getSparseMapValue;

let unsafeGetSparseMapValue = SparseMapAPI.unsafeGetSparseMapValue;

let createSparseMap = SparseMapAPI.createSparseMap;

let setArrayBufferViewSourceTextureName = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureName;

let unsafeGetArrayBufferViewSourceTextureName = ArrayBufferViewSourceTextureAPI.unsafeGetArrayBufferViewSourceTextureName;

let setArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureHeight;

let getArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureHeight;

let setArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWidth;

let getArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWidth;

let setArrayBufferViewSourceTextureFlipY = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureFlipY;

let getArrayBufferViewSourceTextureFlipY = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureFlipY;

let setArrayBufferViewSourceTextureType = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureType;

let getArrayBufferViewSourceTextureType = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureType;

let setArrayBufferViewSourceTextureFormat = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureFormat;

let getArrayBufferViewSourceTextureFormat = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureFormat;

let setArrayBufferViewSourceTextureMinFilter = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureMinFilter;

let getArrayBufferViewSourceTextureMinFilter = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureMinFilter;

let setArrayBufferViewSourceTextureMagFilter = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureMagFilter;

let getArrayBufferViewSourceTextureMagFilter = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureMagFilter;

let setArrayBufferViewSourceTextureWrapT = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWrapT;

let getArrayBufferViewSourceTextureWrapT = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWrapT;

let setArrayBufferViewSourceTextureWrapS = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureWrapS;

let getArrayBufferViewSourceTextureWrapS = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWrapS;

let getArrayBufferViewSourceTextureHeight = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureHeight;

let getArrayBufferViewSourceTextureWidth = ArrayBufferViewSourceTextureAPI.getArrayBufferViewSourceTextureWidth;

let setArrayBufferViewSourceTextureSource = ArrayBufferViewSourceTextureAPI.setArrayBufferViewSourceTextureSource;

let unsafeGetArrayBufferViewSourceTextureSource = ArrayBufferViewSourceTextureAPI.unsafeGetArrayBufferViewSourceTextureSource;

let createArrayBufferViewSourceTexture = ArrayBufferViewSourceTextureAPI.createArrayBufferViewSourceTexture;

let setBasicSourceTextureName = BasicSourceTextureAPI.setBasicSourceTextureName;

let unsafeGetBasicSourceTextureName = BasicSourceTextureAPI.unsafeGetBasicSourceTextureName;

let getBasicSourceTextureName = BasicSourceTextureAPI.getBasicSourceTextureName;

let setBasicSourceTextureFlipY = BasicSourceTextureAPI.setBasicSourceTextureFlipY;

let getBasicSourceTextureFlipY = BasicSourceTextureAPI.getBasicSourceTextureFlipY;

let setBasicSourceTextureType = BasicSourceTextureAPI.setBasicSourceTextureType;

let getBasicSourceTextureType = BasicSourceTextureAPI.getBasicSourceTextureType;

let setBasicSourceTextureFormat = BasicSourceTextureAPI.setBasicSourceTextureFormat;

let getBasicSourceTextureFormat = BasicSourceTextureAPI.getBasicSourceTextureFormat;

let setBasicSourceTextureMinFilter = BasicSourceTextureAPI.setBasicSourceTextureMinFilter;

let getBasicSourceTextureMinFilter = BasicSourceTextureAPI.getBasicSourceTextureMinFilter;

let setBasicSourceTextureMagFilter = BasicSourceTextureAPI.setBasicSourceTextureMagFilter;

let getBasicSourceTextureMagFilter = BasicSourceTextureAPI.getBasicSourceTextureMagFilter;

let setBasicSourceTextureWrapT = BasicSourceTextureAPI.setBasicSourceTextureWrapT;

let getBasicSourceTextureWrapT = BasicSourceTextureAPI.getBasicSourceTextureWrapT;

let setBasicSourceTextureWrapS = BasicSourceTextureAPI.setBasicSourceTextureWrapS;

let getBasicSourceTextureWrapS = BasicSourceTextureAPI.getBasicSourceTextureWrapS;

let getBasicSourceTextureHeight = BasicSourceTextureAPI.getBasicSourceTextureHeight;

let getBasicSourceTextureWidth = BasicSourceTextureAPI.getBasicSourceTextureWidth;

let setBasicSourceTextureSource = BasicSourceTextureAPI.setBasicSourceTextureSource;

let unsafeGetBasicSourceTextureSource = BasicSourceTextureAPI.unsafeGetBasicSourceTextureSource;

let createBasicSourceTexture = BasicSourceTextureAPI.createBasicSourceTexture;

let getFps = TimeControllerAPI.getFps;

let getGameTime = TimeControllerAPI.getGameTime;

let lookAtWithUp = TransformAPI.lookAtWithUp;

let lookAt = TransformAPI.lookAt;

let setTransformScale = TransformAPI.setTransformScale;

let getTransformScale = TransformAPI.getTransformScale;

let setTransformLocalScale = TransformAPI.setTransformLocalScale;

let getTransformLocalScale = TransformAPI.getTransformLocalScale;

let setTransformRotation = TransformAPI.setTransformRotation;

let getTransformRotation = TransformAPI.getTransformRotation;

let setTransformLocalRotation = TransformAPI.setTransformLocalRotation;

let getTransformLocalRotation = TransformAPI.getTransformLocalRotation;

let setTransformPosition = TransformAPI.setTransformPosition;

let getTransformPosition = TransformAPI.getTransformPosition;

let setTransformLocalPosition = TransformAPI.setTransformLocalPosition;

let getTransformLocalPosition = TransformAPI.getTransformLocalPosition;

let unsafeGetTransformChildren = TransformAPI.unsafeGetTransformChildren;

let setTransformParentKeepOrder = TransformAPI.setTransformParentKeepOrder;

let setTransformParent = TransformAPI.setTransformParent;

let unsafeGetTransformParent = TransformAPI.unsafeGetTransformParent;

let unsafeGetTransformGameObject = TransformAPI.unsafeGetTransformGameObject;

let createTransform = TransformAPI.createTransform;

let getBasicCameraViewWorldToCameraMatrix = BasicCameraViewAPI.getBasicCameraViewWorldToCameraMatrix;

let unsafeGetGameObjectBasicCameraView = BasicCameraViewAPI.unsafeGetGameObjectBasicCameraView;

let createBasicCameraView = BasicCameraViewAPI.createBasicCameraView;

let unsafeGetGl = DeviceManagerAPI.unsafeGetGl;

let startDirector = DirectorAPI.startDirector;

let loopBody = DirectorAPI.loopBody;

let initDirector = DirectorAPI.initDirector;

let setGameObjectName = GameObjectAPI.setGameObjectName;

let unsafeGetGameObjectName = GameObjectAPI.unsafeGetGameObjectName;

let getGameObjectName = GameObjectAPI.getGameObjectName;

let cloneGameObject = GameObjectAPI.cloneGameObject;

let batchDisposeGameObjectKeepOrder = GameObjectAPI.batchDisposeGameObjectKeepOrder;

let batchDisposeGameObject = GameObjectAPI.batchDisposeGameObject;

let initGameObject = GameObjectAPI.initGameObject;

let disposeGameObjectKeepOrder = GameObjectAPI.disposeGameObjectKeepOrder;

let disposeGameObject = GameObjectAPI.disposeGameObject;

let isGameObjectAlive = GameObjectAPI.isGameObjectAlive;

let disposeGameObjectObjectInstanceComponent = GameObjectAPI.disposeGameObjectObjectInstanceComponent;

let unsafeGetGameObjectObjectInstanceComponent = GameObjectAPI.unsafeGetGameObjectObjectInstanceComponent;

let addGameObjectObjectInstanceComponent = GameObjectAPI.addGameObjectObjectInstanceComponent;

let disposeGameObjectSourceInstanceComponent = GameObjectAPI.disposeGameObjectSourceInstanceComponent;

let hasGameObjectSourceInstanceComponent = GameObjectAPI.hasGameObjectSourceInstanceComponent;

let unsafeGetGameObjectSourceInstanceComponent = GameObjectAPI.unsafeGetGameObjectSourceInstanceComponent;

let addGameObjectSourceInstanceComponent = GameObjectAPI.addGameObjectSourceInstanceComponent;

let hasGameObjectPointLightComponent = GameObjectAPI.hasGameObjectPointLightComponent;

let unsafeGetGameObjectPointLightComponent = GameObjectAPI.unsafeGetGameObjectPointLightComponent;

let disposeGameObjectPointLightComponent = GameObjectAPI.disposeGameObjectPointLightComponent;

let addGameObjectPointLightComponent = GameObjectAPI.addGameObjectPointLightComponent;

let hasGameObjectDirectionLightComponent = GameObjectAPI.hasGameObjectDirectionLightComponent;

let unsafeGetGameObjectDirectionLightComponent = GameObjectAPI.unsafeGetGameObjectDirectionLightComponent;

let disposeGameObjectDirectionLightComponent = GameObjectAPI.disposeGameObjectDirectionLightComponent;

let addGameObjectDirectionLightComponent = GameObjectAPI.addGameObjectDirectionLightComponent;

let hasGameObjectMeshRendererComponent = GameObjectAPI.hasGameObjectMeshRendererComponent;

let unsafeGetGameObjectMeshRendererComponent = GameObjectAPI.unsafeGetGameObjectMeshRendererComponent;

let disposeGameObjectMeshRendererComponent = GameObjectAPI.disposeGameObjectMeshRendererComponent;

let addGameObjectMeshRendererComponent = GameObjectAPI.addGameObjectMeshRendererComponent;

let hasGameObjectLightMaterialComponent = GameObjectAPI.hasGameObjectLightMaterialComponent;

let unsafeGetGameObjectLightMaterialComponent = GameObjectAPI.unsafeGetGameObjectLightMaterialComponent;

let disposeGameObjectLightMaterialComponent = GameObjectAPI.disposeGameObjectLightMaterialComponent;

let addGameObjectLightMaterialComponent = GameObjectAPI.addGameObjectLightMaterialComponent;

let hasGameObjectBasicMaterialComponent = GameObjectAPI.hasGameObjectBasicMaterialComponent;

let unsafeGetGameObjectBasicMaterialComponent = GameObjectAPI.unsafeGetGameObjectBasicMaterialComponent;

let disposeGameObjectBasicMaterialComponent = GameObjectAPI.disposeGameObjectBasicMaterialComponent;

let addGameObjectBasicMaterialComponent = GameObjectAPI.addGameObjectBasicMaterialComponent;

let hasGameObjectGeometryComponent = GameObjectAPI.hasGameObjectGeometryComponent;

let unsafeGetGameObjectGeometryComponent = GameObjectAPI.unsafeGetGameObjectGeometryComponent;

let disposeGameObjectCustomGeometryComponent = GameObjectAPI.disposeGameObjectCustomGeometryComponent;

let addGameObjectCustomGeometryComponent = GameObjectAPI.addGameObjectCustomGeometryComponent;

let hasGameObjectBoxGeometryComponent = GameObjectAPI.hasGameObjectBoxGeometryComponent;

let disposeGameObjectBoxGeometryComponent = GameObjectAPI.disposeGameObjectBoxGeometryComponent;

let addGameObjectBoxGeometryComponent = GameObjectAPI.addGameObjectBoxGeometryComponent;

let hasGameObjectTransformComponent = GameObjectAPI.hasGameObjectTransformComponent;

let unsafeGetGameObjectTransformComponent = GameObjectAPI.unsafeGetGameObjectTransformComponent;

let disposeGameObjectTransformComponent = GameObjectAPI.disposeGameObjectTransformComponent;

let addGameObjectTransformComponent = GameObjectAPI.addGameObjectTransformComponent;

let hasGameObjectArcballCameraControllerComponent = GameObjectAPI.hasGameObjectArcballCameraControllerComponent;

let unsafeGetGameObjectArcballCameraControllerComponent = GameObjectAPI.unsafeGetGameObjectArcballCameraControllerComponent;

let disposeGameObjectArcballCameraControllerComponent = GameObjectAPI.disposeGameObjectArcballCameraControllerComponent;

let addGameObjectArcballCameraControllerComponent = GameObjectAPI.addGameObjectArcballCameraControllerComponent;

let hasGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.hasGameObjectPerspectiveCameraProjectionComponent;

let unsafeGetGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.unsafeGetGameObjectPerspectiveCameraProjectionComponent;

let disposeGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.disposeGameObjectPerspectiveCameraProjectionComponent;

let addGameObjectPerspectiveCameraProjectionComponent = GameObjectAPI.addGameObjectPerspectiveCameraProjectionComponent;

let hasGameObjectBasicCameraViewComponent = GameObjectAPI.hasGameObjectBasicCameraViewComponent;

let unsafeGetGameObjectBasicCameraViewComponent = GameObjectAPI.unsafeGetGameObjectBasicCameraViewComponent;

let disposeGameObjectBasicCameraViewComponent = GameObjectAPI.disposeGameObjectBasicCameraViewComponent;

let addGameObjectBasicCameraViewComponent = GameObjectAPI.addGameObjectBasicCameraViewComponent;

let createGameObject = GameObjectAPI.createGameObject;

let removeWorkerMainLoopJob = JobAPI.removeWorkerMainLoopJob;

let addWorkerMainLoopJob = JobAPI.addWorkerMainLoopJob;

let removeWorkerMainInitJob = JobAPI.removeWorkerMainInitJob;

let addWorkerMainInitJob = JobAPI.addWorkerMainInitJob;

let removeNoWorkerLoopJob = JobAPI.removeNoWorkerLoopJob;

let removeNoWorkerInitJob = JobAPI.removeNoWorkerInitJob;

let addNoWorkerLoopJob = JobAPI.addNoWorkerLoopJob;

let addNoWorkerInitJob = JobAPI.addNoWorkerInitJob;

let unsafeGetMeshRendererGameObject = MeshRendererAPI.unsafeGetMeshRendererGameObject;

let createMeshRenderer = MeshRendererAPI.createMeshRenderer;

let setPerspectiveCameraProjectionFar = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFar;

let unsafeGetPerspectiveCameraFar = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFar;

let setPerspectiveCameraProjectionNear = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionNear;

let unsafeGetPerspectiveCameraNear = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraNear;

let setPerspectiveCameraProjectionAspect = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionAspect;

let unsafeGetPerspectiveCameraAspect = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraAspect;

let setPerspectiveCameraProjectionFovy = PerspectiveCameraProjectionAPI.setPerspectiveCameraProjectionFovy;

let unsafeGetPerspectiveCameraFovy = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraFovy;

let unsafeGetPerspectiveCameraProjectionGameObject = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionGameObject;

let unsafeGetPerspectiveCameraProjectionPMatrix = PerspectiveCameraProjectionAPI.unsafeGetPerspectiveCameraProjectionPMatrix;

let createPerspectiveCameraProjection = PerspectiveCameraProjectionAPI.createPerspectiveCameraProjection;

let addSceneChildren = SceneAPI.addSceneChildren;

let addSceneChild = SceneAPI.addSceneChild;

let getSceneGameObject = SceneAPI.getSceneGameObject;

let setAmbientLightColor = SceneAPI.setAmbientLightColor;

let getAmbientLightColor = SceneAPI.getAmbientLightColor;

let setCurrentCameraGameObject = SceneAPI.setCurrentCameraGameObject;

let getCurrentCameraGameObject = SceneAPI.getCurrentCameraGameObject;

let markSourceInstanceModelMatrixIsStatic = SourceInstanceAPI.markSourceInstanceModelMatrixIsStatic;

let getSourceInstanceObjectInstanceTransformArray = SourceInstanceAPI.getSourceInstanceObjectInstanceTransformArray;

let createObjectInstanceGameObject = SourceInstanceAPI.createObjectInstanceGameObject;

let unsafeGetSourceInstanceGameObject = SourceInstanceAPI.unsafeGetSourceInstanceGameObject;

let createSourceInstance = SourceInstanceAPI.createSourceInstance;

let setIsDebug = StateAPI.setIsDebug;

let setStateToData = StateAPI.setStateToData;

let setState = StateAPI.setState;

let createState = StateAPI.createState;

let getStateFromData = StateAPI.getStateFromData;

let unsafeGetState = StateAPI.unsafeGetState;

let createStateData = StateAPI.createStateData;

let getStateData = StateAPI.getStateData;

let restoreState = StateAPI.restoreState;

let deepCopyForRestore = StateAPI.deepCopyForRestore;

let getFps = TimeControllerAPI.getFps;

let getGameTime = TimeControllerAPI.getGameTime;

let lookAtWithUp = TransformAPI.lookAtWithUp;

let lookAt = TransformAPI.lookAt;

let setTransformScale = TransformAPI.setTransformScale;

let getTransformScale = TransformAPI.getTransformScale;

let setTransformLocalScale = TransformAPI.setTransformLocalScale;

let getTransformLocalScale = TransformAPI.getTransformLocalScale;

let setTransformRotation = TransformAPI.setTransformRotation;

let getTransformRotation = TransformAPI.getTransformRotation;

let setTransformLocalRotation = TransformAPI.setTransformLocalRotation;

let getTransformLocalRotation = TransformAPI.getTransformLocalRotation;

let setTransformPosition = TransformAPI.setTransformPosition;

let getTransformPosition = TransformAPI.getTransformPosition;

let setTransformLocalPosition = TransformAPI.setTransformLocalPosition;

let getTransformLocalPosition = TransformAPI.getTransformLocalPosition;

let unsafeGetTransformChildren = TransformAPI.unsafeGetTransformChildren;

let setTransformParentKeepOrder = TransformAPI.setTransformParentKeepOrder;

let setTransformParent = TransformAPI.setTransformParent;

let unsafeGetTransformParent = TransformAPI.unsafeGetTransformParent;

let unsafeGetTransformGameObject = TransformAPI.unsafeGetTransformGameObject;

let createTransform = TransformAPI.createTransform;