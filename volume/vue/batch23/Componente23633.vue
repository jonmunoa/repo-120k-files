<template>
  <section class="panel-23633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23633");
const base = ref(23633);
const total = computed(() => base.value * 2);

function incrementar23633() {
  base.value++;
}
</script>
