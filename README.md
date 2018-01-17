# Istio Proxy Builder Image

Download https://github.com/bazelbuild/bazel/releases/download/0.9.0/bazel-0.9.0-installer-linux-x86_64.sh before running docker build

Build the builderImage using: docker build .

To run the builder image run: docker run -it -v /var/run/docker.sock:/var/run/docker.sock builderImage:tag 

This will create gcr.io/istio-testing/envoy-debug:tag

To run this image: docker run -u istio-proxy envoy-debug:tag

