<template>
  <section class="panel-54265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54265");
const base = ref(54265);
const total = computed(() => base.value * 2);

function incrementar54265() {
  base.value++;
}
</script>
