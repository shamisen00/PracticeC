FROM nvidia/cuda:11.4.0-runtime-ubuntu18.04

RUN apt update && apt install -y git \
    gdb \
    curl \
    && rm -rf /var/lib/apt/lists
#   && apt-get -y install --no-install-recommends <your-package-list-here>

COPY . /workspace
