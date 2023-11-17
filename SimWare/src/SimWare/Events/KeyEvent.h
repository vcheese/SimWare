#pragma once

#include "Event.h"

namespace SimWare {

	class SIMWARE_API KeyEvent : public Event
	{
		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

	public:
		inline int32_t GetKeyCode() const { return m_keyCode; }

	protected:
		KeyEvent(int32_t keyCode)
			: m_keyCode(keyCode)
		{}

	protected:
		int32_t m_keyCode;
	};

	class SIMWARE_API KeyPressEvent : public KeyEvent
	{
		EVENT_CLASS_TYPE(KeyPress)

	public:
		KeyPressEvent(int32_t keyCode, int32_t repeatCount)
			: KeyEvent(keyCode)
			, m_repeatCount(repeatCount)
		{}

		inline int GetRepeatCount() const { return m_repeatCount; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressEvent: " << m_keyCode << " (" << m_repeatCount << " repeats)";

			return ss.str();
		}

	private:
		int32_t m_repeatCount;
	};

	class SIMWARE_API KeyReleaseEvent : public KeyEvent
	{
		EVENT_CLASS_TYPE(KeyRelease)

	public:
		KeyReleaseEvent(int keyCode)
			: KeyEvent(keyCode)
		{}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleaseEvent: " << m_keyCode;

			return ss.str();
		}
	};
}