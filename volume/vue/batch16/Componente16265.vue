<template>
  <section class="panel-16265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16265");
const base = ref(16265);
const total = computed(() => base.value * 2);

function incrementar16265() {
  base.value++;
}
</script>
