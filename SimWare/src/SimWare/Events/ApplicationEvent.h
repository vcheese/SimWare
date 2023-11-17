#pragma once

#include "Event.h"

namespace SimWare {

	class SIMWARE_API WindowResizeEvent : public Event
	{
		EVENT_CLASS_TYPE(WindowResize)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)

	public:
		WindowResizeEvent(uint32_t width, uint32_t height)
			: m_width(width)
			, m_height(height)
		{}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizeEvent: " << m_width << ", " << m_height;

			return ss.str();
		}

	private:
		uint32_t m_width, m_height;
	};

	class SIMWARE_API WindowCloseEvent : public Event
	{
		EVENT_CLASS_TYPE(WindowClose)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)

	public:
		WindowCloseEvent() {}
	};

	class SIMWARE_API AppTickEvent : public Event
	{
		EVENT_CLASS_TYPE(AppTick)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)

	public:
		AppTickEvent() {}
	};

	class SIMWARE_API AppUpdateEvent : public Event
	{
		EVENT_CLASS_TYPE(AppUpdate)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)

	public:
		AppUpdateEvent() {}
	};

	class SIMWARE_API AppRenderEvent : public Event
	{
		EVENT_CLASS_TYPE(AppRender)
			EVENT_CLASS_CATEGORY(EventCategoryApplication)

	public:
		AppRenderEvent() {}
	};
}