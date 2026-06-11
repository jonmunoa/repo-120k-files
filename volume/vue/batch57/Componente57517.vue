<template>
  <section class="panel-57517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57517");
const base = ref(57517);
const total = computed(() => base.value * 2);

function incrementar57517() {
  base.value++;
}
</script>
