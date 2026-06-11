<template>
  <section class="panel-44341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44341");
const base = ref(44341);
const total = computed(() => base.value * 2);

function incrementar44341() {
  base.value++;
}
</script>
