<template>
  <section class="panel-44613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44613");
const base = ref(44613);
const total = computed(() => base.value * 2);

function incrementar44613() {
  base.value++;
}
</script>
