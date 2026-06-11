<template>
  <section class="panel-53757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53757");
const base = ref(53757);
const total = computed(() => base.value * 2);

function incrementar53757() {
  base.value++;
}
</script>
