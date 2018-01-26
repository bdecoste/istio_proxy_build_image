# Istio Proxy Builder Image

## To build the builder image:

* ./repo init -u http://github.com/costinm/istio-repo
* repo sync -c --force-sync
* docker build .


## To run the builder image:

* docker run -it -v /var/run/docker.sock:/var/run/docker.sock builderImage:tag 

This will create:

* gcr.io/istio-testing/envoy-debug:TB12
* gcr.io/istio-testing/iptables:TB12
* istio/proxy_debug:TB12
* istio/proxy_init:Tb12


