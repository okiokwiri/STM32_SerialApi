FROM ruby:2.5-stretch

MAINTAINER Ryan Moore <moorer@udel.edu>

# Update package manager
RUN apt-get update
RUN apt-get upgrade -y

# Build essential has stuff like gcc, make, and libc6-dev
RUN apt-get install -y build-essential
RUN apt-get install -y valgrind
RUN apt-get install -y cmake

RUN gem install ceedling


RUN apt-get update && apt-get install -y wget make

# add cpio
RUN apt-get install cpio libncurses5 -y

# get the toolchain
RUN apt update && \
    apt install -y gnupg build-essential git git-lfs ca-certificates libltdl-dev \
    ninja-build gcc-multilib pkg-config libffi-dev gcc-mingw-w64 cmake \
    autoconf autotools-dev automake autogen libtool m4 gettext wget qemu-system

# Remove second copy of python, ensure correct version is used
RUN rm /usr/bin/python3

RUN pip install -U pip setuptools wheel pipenv cpp-coveralls black

ARG GCC_ARM_RELEASE=gcc-arm-none-eabi-9-2019-q4-major
ARG GCC_ARM_RELEASE_FILE=${GCC_ARM_RELEASE}-x86_64-linux.tar.bz2
RUN wget --progress=dot:giga https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/RC2.1/${GCC_ARM_RELEASE_FILE}

RUN tar -xjvf ${GCC_ARM_RELEASE_FILE}
RUN rm ${GCC_ARM_RELEASE_FILE}

ENV PATH="/${GCC_ARM_RELEASE}/bin/:${PATH}"

# Print out installed version
RUN VERSION=$(arm-none-eabi-gcc -dumpversion); \
   echo "VERSION=$VERSION"

ENV LC_ALL=C.UTF-8
ENV LANG=C.UTF-8

# Clean up cache
RUN rm -rf /var/cache/apk/*


ENTRYPOINT ["ceedling"]
CMD ["help"]