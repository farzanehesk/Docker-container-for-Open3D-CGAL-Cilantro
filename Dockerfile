# Run ./docker_build.sh openblas-amd64-py310 according to Open3D documentation
# Then start from the built image

FROM open3d-ci:openblas-amd64-py310-release

# Install Eigen 3.4
WORKDIR /build_libs
RUN git clone https://gitlab.com/libeigen/eigen.git
WORKDIR /build_libs/eigen
RUN git checkout 3.4 #

# Build Eigen
RUN mkdir build
WORKDIR /build_libs/eigen/build
RUN cmake ..
RUN make -j4
RUN make install

# Install Cilantro
WORKDIR /build_libs
RUN git clone https://github.com/kzampog/cilantro.git
WORKDIR /build_libs/cilantro

# Build Cilantro
RUN mkdir build
WORKDIR /build_libs/cilantro/build
RUN cmake ..
RUN make -j4
RUN make install

# Install CGAL
WORKDIR /build_libs
RUN git clone https://github.com/CGAL/cgal.git
RUN git checkout v5.5.1

# Build
WORKDIR /build_libs/cilantro
RUN mkdir build
WORKDIR /build_libs/cilantro/build
RUN cmake ..
RUN make -j4
RUN make install
