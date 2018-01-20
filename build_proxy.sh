set -x

function setup_proxy(){
  source /opt/rh/devtoolset-4/enable
}

function build_istio_proxy(){
  /usr/local/bazel-0.9.0-installer-linux-x86_64.sh

  cd /root/proxy
  TAG=62ea2e2c70df6a08fd981ae0c0bf3945f93ccd72 script/release-docker-rhel debug
}

