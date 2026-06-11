<template>
  <section class="panel-6165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6165");
const base = ref(6165);
const total = computed(() => base.value * 2);

function incrementar6165() {
  base.value++;
}
</script>
