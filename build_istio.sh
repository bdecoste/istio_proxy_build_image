set -x

function setup_istio(){
  echo ""
}

function build_istio_istio(){
  export GOPATH=/root/go
  export PATH=$PATH:$GOPATH/bin
  export ISTIO=$GOPATH/src/istio.io
 
  cd $ISTIO/istio
  make 
  TAG=TB12 make docker.prebuilt
}

