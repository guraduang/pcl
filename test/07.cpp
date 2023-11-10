#include <vtkSmartPointer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkPolyData.h>
#include <vtkPoints.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkGlyph3D.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_cloud.h>



int main() {
    // 创建 VTK 渲染窗口和交互器
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::io::loadPCDFile("/home/duang/code/pcl/save/pcd_save/pcd.pcd", *cloud);
    vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    renderWindow->AddRenderer(renderer);
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    renderWindowInteractor->SetRenderWindow(renderWindow);

    // 创建 VTK 数据结构来表示点云
    // 此处省略将点云数据加载到 VTK 格式的步骤
    // 你需要使用 PCL 和 VTK 相关函数来实现这一步骤

    // 创建点云的 VTK 映射器和演员
    vtkSmartPointer<vtkPolyData> polydata = vtkSmartPointer<vtkPolyData>::New();
    vtkSmartPointer<vtkPoints> points = vtkSmartPointer<vtkPoints>::New();
    // 在此处将点云数据添加到 points
    polydata->SetPoints(points);
    vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper->SetInputData(polydata);
    vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
    actor->SetMapper(mapper);

    // 创建渲染器和窗口
    renderer->AddActor(actor);
    renderWindow->Render();
    
    // 启动交互器
    renderWindowInteractor->Start();
    
    return 0;
}
