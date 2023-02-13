#include <string>
#include <iostream>
#include <vector>



#include "open3d/Open3D.h"

#include "CGAL/linear_least_squares_fitting_3.h"
#include "CGAL/Exact_predicates_exact_constructions_kernel.h"
#include "CGAL/centroid.h"
#include <CGAL/Default_diagonalize_traits.h>
#include <CGAL/Simple_cartesian.h>



#include <cilantro/utilities/point_cloud.hpp>
#include <cilantro/utilities/io_utilities.hpp>
#include <cilantro/utilities/ply_io.hpp>
#include <cilantro/utilities/timer.hpp>
#include <cilantro/clustering/connected_component_extraction.hpp>
#include <cilantro/utilities/nearest_neighbor_graph_utilities.hpp>
#include <cilantro/clustering/spectral_clustering.hpp>
#include <cilantro/clustering/mean_shift.hpp>



#include "open3d/Open3D.h"
#include <open3d/pipelines/registration/RobustKernel.h>
#include <open3d/pipelines/registration/ColoredICP.h>
#include <open3d/pipelines/registration/FastGlobalRegistration.h>

#include "my_open3d"







const char* read_filepath = "/home/eskandar/epfl/Docker-container-for-cpp-libraries/T (1).ply";


int main(int argc, char *argv[]) {

    /////////////////////////////////////////////////////////////////////////////////////
    // Import scans
    /////////////////////////////////////////////////////////////////////////////////////

    PC_o3d_ptr pointcloud_o3d(new PC_o3d);
    open3d::io::ReadPointCloud(read_filepath, *pointcloud_o3d);
    my_open3d::visualizer(pointcloud_o3d);








    return 0;
}