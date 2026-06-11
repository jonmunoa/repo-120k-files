<template>
  <section class="panel-54585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54585");
const base = ref(54585);
const total = computed(() => base.value * 2);

function incrementar54585() {
  base.value++;
}
</script>
