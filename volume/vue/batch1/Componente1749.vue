<template>
  <section class="panel-1749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1749");
const base = ref(1749);
const total = computed(() => base.value * 2);

function incrementar1749() {
  base.value++;
}
</script>
