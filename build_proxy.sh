set -x

function setup_proxy(){
  source /opt/rh/devtoolset-4/enable
}

function build_istio_proxy(){
#  /usr/local/bazel-0.9.0-installer-linux-x86_64.sh

  cd /root/proxy
  make cmake-x86 CMAKE_MAKE_OPT="-j 8"
  make cmake-x86 CMAKE_MAKE_OPT="-j 8"

  TAG=TB12 script/release-docker-rhel debug
}

