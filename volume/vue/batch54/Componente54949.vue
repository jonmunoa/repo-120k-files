<template>
  <section class="panel-54949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54949");
const base = ref(54949);
const total = computed(() => base.value * 2);

function incrementar54949() {
  base.value++;
}
</script>
