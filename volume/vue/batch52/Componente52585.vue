<template>
  <section class="panel-52585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52585");
const base = ref(52585);
const total = computed(() => base.value * 2);

function incrementar52585() {
  base.value++;
}
</script>
