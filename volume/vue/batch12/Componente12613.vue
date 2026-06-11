<template>
  <section class="panel-12613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12613");
const base = ref(12613);
const total = computed(() => base.value * 2);

function incrementar12613() {
  base.value++;
}
</script>
