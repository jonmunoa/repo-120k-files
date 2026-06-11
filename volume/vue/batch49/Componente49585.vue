<template>
  <section class="panel-49585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49585");
const base = ref(49585);
const total = computed(() => base.value * 2);

function incrementar49585() {
  base.value++;
}
</script>
