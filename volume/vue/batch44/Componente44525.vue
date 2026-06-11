<template>
  <section class="panel-44525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44525");
const base = ref(44525);
const total = computed(() => base.value * 2);

function incrementar44525() {
  base.value++;
}
</script>
