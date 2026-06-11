<template>
  <section class="panel-1165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1165");
const base = ref(1165);
const total = computed(() => base.value * 2);

function incrementar1165() {
  base.value++;
}
</script>
