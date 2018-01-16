# Copyright 2017 Red Hat
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# ------------------------------------------------------------------------
#
# This is a Dockerfile for the jboss/openjdk18-rhel7:1.2 image.

FROM rhel7:latest

USER root

# Add custom repo files
COPY *.repo /etc/yum.repos.d/

# Install required RPMs and ensure that the packages were installed
RUN yum install -y --disablerepo=\* --enablerepo=rhel-7-server-extras-rpms --enablerepo=rhel-7-server-optional-rpms --enablerepo=epel --enablerepo=rhel-7-server-rpms --enablerepo=rhel-server-rhscl-7-rpms docker wget golang git cmake3 devtoolset-4-gcc devtoolset-4-gcc-c++ devtoolset-4-libatomic-devel devtoolset-4-libstdc++-devel devtoolset-4-runtime \
    && yum clean all

RUN yum groupinstall -y --disablerepo=\* --enablerepo=rhel-7-server-optional-rpms --enablerepo=epel --enablerepo=rhel-7-server-rpms --enablerepo=rhel-server-rhscl-7-rpms 'Development Tools' \
    && yum clean all

RUN ln -s /usr/bin/cmake3 /usr/bin/cmake

ADD start.sh /usr/local/bin/start.sh

ADD bazel-0.9.0-installer-linux-x86_64.sh /usr/local
RUN /usr/local/bazel-0.9.0-installer-linux-x86_64.sh

ENTRYPOINT /usr/local/bin/start.sh


