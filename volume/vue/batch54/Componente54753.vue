<template>
  <section class="panel-54753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54753");
const base = ref(54753);
const total = computed(() => base.value * 2);

function incrementar54753() {
  base.value++;
}
</script>
