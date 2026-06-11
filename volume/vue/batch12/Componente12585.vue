<template>
  <section class="panel-12585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12585");
const base = ref(12585);
const total = computed(() => base.value * 2);

function incrementar12585() {
  base.value++;
}
</script>
