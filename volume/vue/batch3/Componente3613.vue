<template>
  <section class="panel-3613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3613");
const base = ref(3613);
const total = computed(() => base.value * 2);

function incrementar3613() {
  base.value++;
}
</script>
