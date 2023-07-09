//#line 2 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the uuv_control package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __uuv_control__ACCELERATIONCONTROLCONFIG_H__
#define __uuv_control__ACCELERATIONCONTROLCONFIG_H__

#if __cplusplus >= 201103L
#define DYNAMIC_RECONFIGURE_FINAL final
#else
#define DYNAMIC_RECONFIGURE_FINAL
#endif

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace uuv_control
{
  class AccelerationControlConfigStatics;

  class AccelerationControlConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }

      virtual void clamp(AccelerationControlConfig &config, const AccelerationControlConfig &max, const AccelerationControlConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const AccelerationControlConfig &config1, const AccelerationControlConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, AccelerationControlConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const AccelerationControlConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, AccelerationControlConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const AccelerationControlConfig &config) const = 0;
      virtual void getValue(const AccelerationControlConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template <class T>
    class ParamDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T AccelerationControlConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T AccelerationControlConfig::* field;

      virtual void clamp(AccelerationControlConfig &config, const AccelerationControlConfig &max, const AccelerationControlConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const AccelerationControlConfig &config1, const AccelerationControlConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, AccelerationControlConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const AccelerationControlConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, AccelerationControlConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const AccelerationControlConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const AccelerationControlConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, AccelerationControlConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template<class T, class PT>
    class GroupDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, AccelerationControlConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T PT::* field;
      std::vector<AccelerationControlConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(AccelerationControlConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("tf_prefix"==(*_i)->name){tf_prefix = boost::any_cast<std::string>(val);}
        if("base_frame_name"==(*_i)->name){base_frame_name = boost::any_cast<std::string>(val);}
        if("thruster_frame_base"==(*_i)->name){thruster_frame_base = boost::any_cast<std::string>(val);}
        if("max_thrust"==(*_i)->name){max_thrust = boost::any_cast<double>(val);}
        if("thrust_gain"==(*_i)->name){thrust_gain = boost::any_cast<double>(val);}
        if("total_mass"==(*_i)->name){total_mass = boost::any_cast<double>(val);}
        if("ixx"==(*_i)->name){ixx = boost::any_cast<double>(val);}
        if("ixy"==(*_i)->name){ixy = boost::any_cast<double>(val);}
        if("ixz"==(*_i)->name){ixz = boost::any_cast<double>(val);}
        if("iyy"==(*_i)->name){iyy = boost::any_cast<double>(val);}
        if("iyz"==(*_i)->name){iyz = boost::any_cast<double>(val);}
        if("izz"==(*_i)->name){izz = boost::any_cast<double>(val);}
        if("thruster_topic_prefix"==(*_i)->name){thruster_topic_prefix = boost::any_cast<std::string>(val);}
        if("thruster_topic_suffix"==(*_i)->name){thruster_topic_suffix = boost::any_cast<std::string>(val);}
      }
    }

    std::string tf_prefix;
std::string base_frame_name;
std::string thruster_frame_base;
double max_thrust;
double thrust_gain;
double total_mass;
double ixx;
double ixy;
double ixz;
double iyy;
double iyz;
double izz;
std::string thruster_topic_prefix;
std::string thruster_topic_suffix;

    bool state;
    std::string name;

    
}groups;



//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string tf_prefix;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string base_frame_name;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string thruster_frame_base;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double max_thrust;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double thrust_gain;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double total_mass;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double ixx;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double ixy;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double ixz;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double iyy;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double iyz;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double izz;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string thruster_topic_prefix;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      std::string thruster_topic_suffix;
//#line 228 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("AccelerationControlConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const AccelerationControlConfig &__max__ = __getMax__();
      const AccelerationControlConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const AccelerationControlConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const AccelerationControlConfig &__getDefault__();
    static const AccelerationControlConfig &__getMax__();
    static const AccelerationControlConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const AccelerationControlConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void AccelerationControlConfig::ParamDescription<std::string>::clamp(AccelerationControlConfig &config, const AccelerationControlConfig &max, const AccelerationControlConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class AccelerationControlConfigStatics
  {
    friend class AccelerationControlConfig;

    AccelerationControlConfigStatics()
    {
AccelerationControlConfig::GroupDescription<AccelerationControlConfig::DEFAULT, AccelerationControlConfig> Default("Default", "", 0, 0, true, &AccelerationControlConfig::groups);
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.tf_prefix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.tf_prefix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.tf_prefix = "dummy_uuv/";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("tf_prefix", "str", 0, "prefix for all tf frames", "", &AccelerationControlConfig::tf_prefix)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("tf_prefix", "str", 0, "prefix for all tf frames", "", &AccelerationControlConfig::tf_prefix)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.base_frame_name = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.base_frame_name = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.base_frame_name = "base_link";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("base_frame_name", "str", 0, "Name of base frame you want to control", "", &AccelerationControlConfig::base_frame_name)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("base_frame_name", "str", 0, "Name of base frame you want to control", "", &AccelerationControlConfig::base_frame_name)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.thruster_frame_base = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.thruster_frame_base = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.thruster_frame_base = "thruster_";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_frame_base", "str", 0, "Base name (without id) of thruster tf frame", "", &AccelerationControlConfig::thruster_frame_base)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_frame_base", "str", 0, "Base name (without id) of thruster tf frame", "", &AccelerationControlConfig::thruster_frame_base)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_thrust = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_thrust = 30000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_thrust = 1500.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("max_thrust", "double", 0, "Maximum thrust in [N]", "", &AccelerationControlConfig::max_thrust)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("max_thrust", "double", 0, "Maximum thrust in [N]", "", &AccelerationControlConfig::max_thrust)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.thrust_gain = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.thrust_gain = 1.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.thrust_gain = 0.00031;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("thrust_gain", "double", 0, "thruster gain", "", &AccelerationControlConfig::thrust_gain)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("thrust_gain", "double", 0, "thruster gain", "", &AccelerationControlConfig::thrust_gain)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.total_mass = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.total_mass = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.total_mass = 3500.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("total_mass", "double", 0, "Total mass in [kg]", "", &AccelerationControlConfig::total_mass)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("total_mass", "double", 0, "Total mass in [kg]", "", &AccelerationControlConfig::total_mass)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.ixx = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.ixx = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.ixx = 1970.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixx", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixx)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixx", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixx)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.ixy = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.ixy = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.ixy = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixy", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixy)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixy", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixy)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.ixz = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.ixz = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.ixz = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("ixz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::ixz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.iyy = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.iyy = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.iyy = 3215.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("iyy", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::iyy)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("iyy", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::iyy)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.iyz = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.iyz = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.iyz = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("iyz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::iyz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("iyz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::iyz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.izz = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.izz = 5000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.izz = 3037.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("izz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::izz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<double>("izz", "double", 0, "inertia tensor in [kg m^2]", "", &AccelerationControlConfig::izz)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.thruster_topic_prefix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.thruster_topic_prefix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.thruster_topic_prefix = "thrusters/";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_topic_prefix", "str", 0, "Prefix of thruster topic (before id)", "", &AccelerationControlConfig::thruster_topic_prefix)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_topic_prefix", "str", 0, "Prefix of thruster topic (before id)", "", &AccelerationControlConfig::thruster_topic_prefix)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.thruster_topic_suffix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.thruster_topic_suffix = "";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.thruster_topic_suffix = "/input";
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_topic_suffix", "str", 0, "Suffix of thruster topic (before id)", "", &AccelerationControlConfig::thruster_topic_suffix)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AccelerationControlConfig::AbstractParamDescriptionConstPtr(new AccelerationControlConfig::ParamDescription<std::string>("thruster_topic_suffix", "str", 0, "Suffix of thruster topic (before id)", "", &AccelerationControlConfig::thruster_topic_suffix)));
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(AccelerationControlConfig::AbstractGroupDescriptionConstPtr(new AccelerationControlConfig::GroupDescription<AccelerationControlConfig::DEFAULT, AccelerationControlConfig>(Default)));
//#line 366 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<AccelerationControlConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<AccelerationControlConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<AccelerationControlConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    AccelerationControlConfig __max__;
    AccelerationControlConfig __min__;
    AccelerationControlConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const AccelerationControlConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static AccelerationControlConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &AccelerationControlConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const AccelerationControlConfig &AccelerationControlConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const AccelerationControlConfig &AccelerationControlConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const AccelerationControlConfig &AccelerationControlConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<AccelerationControlConfig::AbstractParamDescriptionConstPtr> &AccelerationControlConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<AccelerationControlConfig::AbstractGroupDescriptionConstPtr> &AccelerationControlConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const AccelerationControlConfigStatics *AccelerationControlConfig::__get_statics__()
  {
    const static AccelerationControlConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = AccelerationControlConfigStatics::get_instance();

    return statics;
  }


}

#undef DYNAMIC_RECONFIGURE_FINAL

#endif // __ACCELERATIONCONTROLRECONFIGURATOR_H__
