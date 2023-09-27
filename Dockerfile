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
RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/10-2020q4/gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2 -O gcc-arm-none-eabi.tar.bz2

# unpack the archive to a neatly named target directory
RUN mkdir gcc-arm-none-eabi && tar xjfv gcc-arm-none-eabi.tar.bz2 -C gcc-arm-none-eabi --strip-components 1
# remove the archive
RUN rm gcc-arm-none-eabi.tar.bz2

# add the tools to the path
ENV PATH="/gcc-arm-none-eabi/bin:${PATH}"

WORKDIR /usr/project

ENTRYPOINT ["ceedling"]
CMD ["help"]