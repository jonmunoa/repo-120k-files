<template>
  <section class="panel-43949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43949");
const base = ref(43949);
const total = computed(() => base.value * 2);

function incrementar43949() {
  base.value++;
}
</script>
