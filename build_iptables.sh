set -x

function setup_iptables(){
  echo ""
}

function build_istio_iptables(){
  /root/go/src/istio.io/istio/pilot/bin/push-iptables-image-rhel  
}

