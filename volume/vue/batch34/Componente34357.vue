<template>
  <section class="panel-34357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34357");
const base = ref(34357);
const total = computed(() => base.value * 2);

function incrementar34357() {
  base.value++;
}
</script>
