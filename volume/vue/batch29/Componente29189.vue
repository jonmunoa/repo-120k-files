<template>
  <section class="panel-29189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29189");
const base = ref(29189);
const total = computed(() => base.value * 2);

function incrementar29189() {
  base.value++;
}
</script>
