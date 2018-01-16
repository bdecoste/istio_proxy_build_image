# Istio Proxy Builder Image

Download https://github.com/bazelbuild/bazel/releases/download/0.9.0/bazel-0.9.0-installer-linux-x86_64.sh before running docker build

After building the builder image, run: docker run -it -v /var/run/docker.sock:/var/run/docker.sock --privileged builderImage:tag 

This will create: gcr.io/istio-testing/envoy-debug:tag
