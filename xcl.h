#pragma once
namespace xcl
{
	template<typename T>
	concept integral = std::is_integral_v<T>;

	template<typename T>
	concept enumeration = std::is_enum_v<T>;

	template<typename T1, typename T2>
	concept different_from = !std::is_same_v<T1, T2>;

	template<typename T>
	struct has_flag
	{

	};
}
