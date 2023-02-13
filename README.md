  
  ## cmake
    sudo snap install cmake --classic
  
 
  
  
  ## eigen
     sudo apt-get install libeigen3-dev
  
  
  
  ## boost
    sudo apt-get install libboost-all-dev
  
  
  
  ## gmp
    sudo apt-get install libgmp3-dev
  
  
  
  ## mpfr
    sudo apt-get install libmpfr-dev
  
  
  
  mkdir external
  cd external/
  git init
  
  #####################################################
  ## open3d
  #####################################################
  git submodule add https://github.com/isl-org/Open3D
  cd Open3D/
  cd util/
  ./install_deps_ubuntu.sh
  cd ..
  mkdir build
  cd build/
  cmake ..
  make -j8
  sudo make install
  
  
  #####################################################
  ## cilantro
  #####################################################
  git submodule add https://github.com/kzampog/cilantro
  mkdir build
  cd build/
  cmake ..
  make -j4
  sudo make install


  #####################################################
  ## cgal
  #####################################################
  git submodule add https://github.com/CGAL/cgal
  mkdir build
  cd build/
  cmake ..
  make -j4
  sudo make install
  
  
  
  
  
  

