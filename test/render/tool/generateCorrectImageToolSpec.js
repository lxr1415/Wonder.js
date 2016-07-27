describe("generate correct image tool", function () {
    var sandbox;
    var tester;

    function body(wrapper){
        wrapper.load([
            ])
            .do(initSample);

        function initSample() {
            var director = wd.Director.getInstance();

            director.scene.addChild(createTriangle());
            director.scene.addChild(createRect());
            director.scene.addChild(createCamera());

            director.start();
        }

        function createTriangle() {
            var material = wd.BasicMaterial.create();
            material.color = wd.Color.create("#888888");
            material.side = wd.ESide.BOTH;

            var geometry = wd.TriangleGeometry.create();
            geometry.material = material;
            geometry.width = 5;
            geometry.height = 5;


            var gameObject = wd.GameObject.create();
            gameObject.addComponent(geometry);

            gameObject.addComponent(wd.MeshRenderer.create());

            var action = wd.RepeatForever.create(wd.CallFunc.create(function () {
                gameObject.transform.rotate(0, 1, 0);
            }));

            gameObject.addComponent(action);

            gameObject.transform.translate(0, 5, 0);

            return gameObject;
        }

        function createRect() {
            var material = wd.BasicMaterial.create();
            material.color = wd.Color.create("#aaa123");

            var geometry = wd.RectGeometry.create();
            geometry.material = material;
            geometry.width = 5;
            geometry.height = 5;


            var gameObject = wd.GameObject.create();
            gameObject.addComponent(geometry);

            gameObject.addComponent(wd.MeshRenderer.create());

            var tween1 = wd.Tween.create();
            var tween2 = wd.Tween.create();

            tween1.from({x: -10, y: 1})
                .to({x: 10, y: 2}, 3000)
                .easing(wd.Tween.Easing.Cubic.InOut)
                .onUpdate(function () {
                    gameObject.transform.position = wd.Vector3.create(this.x, -5, 0);
                    gameObject.transform.scale = wd.Vector3.create(1, this.y, 1);
                });

            tween2.from({x: 10, y: 2})
                .to({x: -10, y: 1}, 3000)
                .easing(wd.Tween.Easing.Cubic.InOut)
                .onUpdate(function () {
                    gameObject.transform.position = wd.Vector3.create(this.x, -5, 0);
                    gameObject.transform.scale = wd.Vector3.create(1, this.y, 1);
                });

            var action = wd.RepeatForever.create(wd.Sequence.create(tween1, tween2));

            gameObject.addComponent(action);

            gameObject.transform.translate(-10, -5, 0);

            return gameObject;
        }

        function createCamera() {
            var camera = wd.GameObject.create(),
                view = wd.Director.getInstance().view,
                cameraComponent = wd.PerspectiveCamera.create();

            cameraComponent.fovy = 60;
            cameraComponent.aspect = view.width / view.height;
            cameraComponent.near = 0.1;
            cameraComponent.far = 80;

            var controller = wd.BasicCameraController.create(cameraComponent);
            camera.addComponent(controller);

            camera.transform.translate(wd.Vector3.create(0, 0, 30));

            return camera;
        }


    }


    beforeEach(function (done) {
        sandbox = sinon.sandbox.create();

        tester = SceneTester.create(sandbox);

        renderTestTool.prepareContext();


        tester.execBody(body, done);
    });
    afterEach(function () {
        sandbox.restore();
    });

    it("generate correct image", function () {
        tester.generateBatchAt(
            [
                {
                    frameIndex:1,
                    imageName:"animation_translate_rotate_scale_frame1.png"
                },
                {
                    frameIndex:30,
                    //step:200,
                    imageName:"animation_translate_rotate_scale_frame30.png"
                }
            ]
        );
    });
});

