#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginSaptakRobot : public WorldPlugin
  {
    public: WorldPluginSaptakRobot() : WorldPlugin()
    {
      printf("Welcome to Saptak's world!\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginSaptakRobot)
}
