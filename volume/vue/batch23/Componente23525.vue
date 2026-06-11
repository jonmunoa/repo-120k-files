<template>
  <section class="panel-23525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23525");
const base = ref(23525);
const total = computed(() => base.value * 2);

function incrementar23525() {
  base.value++;
}
</script>
