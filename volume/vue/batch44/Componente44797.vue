<template>
  <section class="panel-44797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44797");
const base = ref(44797);
const total = computed(() => base.value * 2);

function incrementar44797() {
  base.value++;
}
</script>
