//
// Created by eskandar on 12.02.23.
//

#ifndef SHINGLEENVELOPEDIGITIZATION_MY_OPEN3D_H
#define SHINGLEENVELOPEDIGITIZATION_MY_OPEN3D_H

#include <string>
#include <iostream>

#include "open3d/Open3D.h"

namespace my_open3d
{


    inline void visualizer(std::shared_ptr < open3d::geometry::PointCloud> PC_o3d_ptr)
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //// http://www.open3d.org/html/cpp_api/classopen3d_1_1visualization_1_1_visualizer.html#aec583df646cf10d3869208f3c896327d
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    {
        std::shared_ptr <open3d::visualization::Visualizer> vis(new open3d::visualization::Visualizer());
        vis->CreateVisualizerWindow("Open3D", 840, 680, 50, 50);
        vis->AddGeometry(PC_o3d_ptr, true);
        vis->GetRenderOption().background_color_(Eigen::Vector3d(1, 1, 1));
        vis->GetRenderOption().ChangePointSize(0.3);
        //vis->CaptureScreenImage("C:\EPFL\Thesis\ShingleEnvelopesDigitization\CaptureScreen");
        //vis->CaptureDepthImage("C:\EPFL\Thesis\ShingleEnvelopesDigitization\CaptureScreen", true, 1000);
        vis->Run();
        vis->DestroyVisualizerWindow();

    };









}






#endif //SHINGLEENVELOPEDIGITIZATION_MY_OPEN3D_H
