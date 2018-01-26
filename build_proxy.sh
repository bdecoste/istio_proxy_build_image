set -x

function setup_proxy(){
  source /opt/rh/devtoolset-4/enable
}

function build_istio_proxy(){

  mkdir /root/proxy/project
  cp -rf /root/proxy/src /root/proxy/project

  cd /root/proxy
  make cmake-x86 CMAKE_MAKE_OPT="-j 8"
  make cmake-x86 CMAKE_MAKE_OPT="-j 8"

  TAG=TB12 script/release-docker-rhel debug
}

