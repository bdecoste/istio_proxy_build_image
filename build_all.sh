set -x

source /usr/local/bin/build_proxy.sh
source /usr/local/bin/build_iptables.sh
source /usr/local/bin/build_istio.sh

function setup(){
#  setup_proxy
#  setup_iptables
  setup_istio
}

setup
#build_istio_proxy
#build_istio_iptables
build_istio_istio


