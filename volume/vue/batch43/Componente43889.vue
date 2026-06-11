<template>
  <section class="panel-43889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43889");
const base = ref(43889);
const total = computed(() => base.value * 2);

function incrementar43889() {
  base.value++;
}
</script>
