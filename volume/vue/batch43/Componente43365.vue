<template>
  <section class="panel-43365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43365");
const base = ref(43365);
const total = computed(() => base.value * 2);

function incrementar43365() {
  base.value++;
}
</script>
