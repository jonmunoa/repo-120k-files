<template>
  <section class="panel-54201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54201");
const base = ref(54201);
const total = computed(() => base.value * 2);

function incrementar54201() {
  base.value++;
}
</script>
