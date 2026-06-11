<template>
  <section class="panel-43753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43753");
const base = ref(43753);
const total = computed(() => base.value * 2);

function incrementar43753() {
  base.value++;
}
</script>
