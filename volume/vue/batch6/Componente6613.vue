<template>
  <section class="panel-6613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6613");
const base = ref(6613);
const total = computed(() => base.value * 2);

function incrementar6613() {
  base.value++;
}
</script>
