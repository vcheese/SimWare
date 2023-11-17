#pragma once

#include "Event.h"

namespace SimWare {

	class SIMWARE_API MouseMoveEvent : public Event
	{
		EVENT_CLASS_TYPE(MouseMove)
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

	public:
		MouseMoveEvent(float x, float y)
			: m_mouseX(x)
			, m_mouseY(y)
		{}

		inline float GetX() const { return m_mouseX; }
		inline float GetX() const { return m_mouseY; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseMoveEvent: " << m_mouseX << ", " << m_mouseY;

			return ss.str();
		}

	private:
		float m_mouseX, m_mouseY;
	};

	class SIMWARE_API MouseScrollEvent : public Event
	{
		EVENT_CLASS_TYPE(MouseScroll)
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

	public:
		MouseScrollEvent(float offsetX, float offsetY)
			: m_offsetX(offsetX)
			, m_offsetY(offsetY)
		{}

		inline float GetOffsetX() const { return m_offsetX; }
		inline float GetOffsetY() const { return m_offsetY; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseScrollEvent: " << m_offsetX << ", " << m_offsetY;

			return ss.str();
		}

	private:
		float m_offsetX, m_offsetY;
	};

	class SIMWARE_API MouseButtonEvent : public Event
	{
		EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

	public:
		inline int32_t GetMouseButton() const { return m_button; }

	protected:
		MouseButtonEvent(int32_t button)
			: m_button(button)
		{}

	protected:
		int32_t m_button;
	};

	class SIMWARE_API MouseButtonPressEvent : public MouseButtonEvent
	{
		EVENT_CLASS_TYPE(MouseButtonPress)

	public:
		MouseButtonPressEvent(int32_t button)
			: MouseButtonEvent(button)
		{}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonPressEvent: " << m_button;

			return ss.str();
		}
	};

	class SIMWARE_API MouseButtonReleaseEvent : public MouseButtonEvent
	{
		EVENT_CLASS_TYPE(MouseButtonRelease)

	public:
		MouseButtonReleaseEvent(int32_t button)
			: MouseButtonEvent(button)
		{}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "MouseButtonReleaseEvent: " << m_button;

			return ss.str();
		}
	};

}