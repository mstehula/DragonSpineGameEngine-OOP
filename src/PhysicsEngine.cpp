#include "PhysicsEngine.h"

namespace dragonspinegameengine
{
    PhysicsEngine* PhysicsEngine::instance_;
    PhysicsEngine* PhysicsEngine::GetInstance()
    {
        if(instance_ == nullptr)
        {
            instance_ = new PhysicsEngine();
        }
        return instance_;
    }

    PhysicsEngine::PhysicsEngine()
    {
        //ctor
    }

    void PhysicsEngine::Simulate(PhysicsObject* physics_object)
<<<<<<< HEAD
    {
        physics_object->Simulate();
    }

    void PhysicsObject::Simulate()
    {
        position_ += velocity_;
    }

    void PhysicsObject::SetPosition(glm::vec3 position)
    {
        position_ = position;
    }

    glm::vec3 PhysicsObject::GetPosition()
    {
        return position_;
    }

    void PhysicsObject::SetVelocity(glm::vec3 velocity)
    {
        velocity_ = velocity;
    }

    glm::vec3 PhysicsObject::GetVelocity()
    {
        return velocity_;
    }

    void PhysicsObject::ApplyForce(float x_force, float y_force, float z_force)
    {
        glm::vec3 acceleration = glm::vec3(x_force * mass_, y_force * mass_, z_force * mass_);
        velocity_ += acceleration;
=======
    {
        physics_object->Simulate();
    }

    void PhysicsObject::Simulate()
    {
        position_ = position_ + velocity_;
    }

    void PhysicsObject::ApplyForce(float x_force, float y_force, float z_force)
    {

    }

    void PhysicsObject::ApplyForceDir(float front_force, float side_force, float up_force)
    {

>>>>>>> 030ad8506f6c2c8351350b15f4679771f893177a
    }

}

