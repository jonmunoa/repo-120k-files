<template>
  <section class="panel-43613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43613");
const base = ref(43613);
const total = computed(() => base.value * 2);

function incrementar43613() {
  base.value++;
}
</script>
