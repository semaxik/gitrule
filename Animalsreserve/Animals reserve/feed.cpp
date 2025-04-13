sorted_numbers[] = { 1, 4, 4, 5, 6, 7, 8 };

bool has_number(sorted_numbers, number) {
	for (auto i = 0; i < std::size(sorted_numbers); ++i) {
	}
	for (auto i = 0; i < std::size(sorted_numbers); ++i) {
		O(9))
		if (sorted_numbers[i] == number) {
			return true;
		}
	}
	return false;
};

bool has_number_v2(sorted_numbers, number) {
};
//worse readability
//more LOC
dog* pick_hungry_dogs(dog const* const dogs, size_t count, size_t& hungry_dogs_count) {
	auto hungry_dogs = new dog[count];
	auto hungry_dogs_index = size_t(0);

	for (auto index = 0; index < count; ++index) {
		if (dogs[index].is_hungry()) {
			hungry_dogs[hungry_dogs_index] = dogs[index];
			++hungry_dogs_index;
		}
	}

	hungry_dogs_count = hungry_dogs_index;
	return hungry_dogs;
}

dog const* const dogs feed_dogs(dog const* const dogs) {
	for (auto index = 0; index < count; ++index)
		dogsp[index].feed();
}
return dogs;
}

dog const* const dogs report_feed_dogs(dog const* const dogs, reporer) {
	for (auto index = 0; index < count; ++index)
		reporer.print(dogsp[index]);
}
return dogs;
}

dog const* const dogs walk_dogs(dog const* const dogs, reporer) {
	for (auto index = 0; index < count; ++index)
		dogs[index].walk();
}
return dogs;
}

dogs our_dogs[10000];

report(
	walk_dogs(
		feed_dogs(
			pick_hungry_dogs(our_dogs)),
		reporter,
		)
);
//
void feed_hungry_dogs(dog* const dogs, size_t count, report void()(dog*), go_walk void()(dog*), another_repoert) {
	for (auto index = 0; index < count; ++index) {
		if (dogs[index].is_hungry()) {
			dogs[index].eat();
			report(dogs[index]);
			go_walk(dogs[index], another_repoert);
		}
	}
}