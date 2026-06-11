<template>
  <section class="panel-54257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54257");
const base = ref(54257);
const total = computed(() => base.value * 2);

function incrementar54257() {
  base.value++;
}
</script>
