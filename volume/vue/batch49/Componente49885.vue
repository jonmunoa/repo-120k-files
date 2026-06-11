<template>
  <section class="panel-49885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49885");
const base = ref(49885);
const total = computed(() => base.value * 2);

function incrementar49885() {
  base.value++;
}
</script>
