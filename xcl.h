#pragma once
#include <concepts>

namespace xcl
{
#pragma region std Aliases
	template<class T, class U>
	concept same_as = std::same_as<T, U>;

	template<class T, class U>
	concept common_reference_with = std::common_reference_with<T, U>;

	template<class T, class U>
	concept common_with = std::common_with<T, U>;

	template<class T>
	concept integral = std::integral<T>;

	template<class T>
	concept signed_integral = std::signed_integral<T>;

	template<class T>
	concept unsigned_integral = std::unsigned_integral<T>;

	template<class T>
	concept floating_point = std::floating_point<T>;

	template<class LHS, class RHS>
	concept assignable_from = std::assignable_from<LHS, RHS>;

	template<class T>
	concept swappable = std::swappable<T>;

	template<class T, class U>
	concept swappable_with = std::swappable_with<T, U>;

	template<class T>
	concept destructible = std::destructible<T>;

	template<class T, class... Args>
	concept constructible_from = std::constructible_from<T, Args...>;

	template<class T>
	concept default_initializable = std::default_initializable<T>;

	template<class T>
	concept move_constructible = std::move_constructible<T>;

	template<class T>
	concept copy_constructible = std::copy_constructible<T>;

	template<class T>
	concept equality_comparable = std::equality_comparable<T>;

	template<class T, class U>
	concept equality_comparable_with = std::equality_comparable_with<T, U>;

	template<class T>
	concept totally_ordered = std::totally_ordered<T>;

	template<class T, class U>
	concept totally_ordered_with = std::totally_ordered_with<T, U>;

	template<class T>
	concept movable = std::movable<T>;

	template<class T>
	concept copyable = std::copyable<T>;

	template<class T>
	concept semiregular = std::semiregular<T>;

	template<class T>
	concept regular = std::regular<T>;

	template<class F, class ...Args>
	concept invocable = std::invocable<F, Args...>;

	template<class F, class ...Args>
	concept regular_invocable = std::regular_invocable<F, Args...>;

	template<class F, class ...Args>
	concept predicate = std::predicate<F, Args...>;

	template<class R, class T, class U>
	concept relation = std::relation<R, T, U>;

	template<class R, class T, class U>
	concept equivalence_relation = std::equivalence_relation<R, T, U>;

	template<class R, class T, class U>
	concept strict_weak_order = std::strict_weak_order<R, T, U>;
#pragma endregion

	template<class T>
	concept enumeration = std::is_enum_v<T>;

	template<typename T1, typename T2>
	concept different_from = !same_as<T1, T2>;
}
