#pragma once
#include <stdint.h>

namespace multiboot {
	extern uint8_t memory_base;
	extern uint8_t memory_length;

	struct multiboot_tag {
		uint32_t type;
		uint32_t size;
	};
		uint64_t addr;
		uint64_t len;
#define MULTIBOOT_MEMORY_AVAILABLE 1
#define MULTIBOOT_MEMORY_RESERVED 2
#define MULTIBOOT_MEMORY_ACPI_RECLAIMABLE 3
#define MULTIBOOT_MEMORY_NVS 4
		uint32_t type;
		uint32_t zero;
	} __attribute__((packed));
	{
		uint32_t type;
		uint32_t size;
		uint32_t entry_size;
		uint32_t entry_version;
		struct multiboot_mmap_entry entries[0];
	};