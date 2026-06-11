<template>
  <section class="panel-29753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29753");
const base = ref(29753);
const total = computed(() => base.value * 2);

function incrementar29753() {
  base.value++;
}
</script>
