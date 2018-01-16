set -x

source /opt/rh/devtoolset-4/enable

echo $PATH
echo $GOPATH

#git clone https://boringssl.googlesource.com/boringssl
#cd boringssl
#mkdir build
#cd build
#cmake ..
#make

git clone https://github.com/bdecoste/proxy -b rhel
cd proxy
script/release-docker-rhel debug

