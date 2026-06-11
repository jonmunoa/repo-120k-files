<template>
  <section class="panel-43165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43165");
const base = ref(43165);
const total = computed(() => base.value * 2);

function incrementar43165() {
  base.value++;
}
</script>
