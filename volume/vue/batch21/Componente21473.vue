<template>
  <section class="panel-21473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21473");
const base = ref(21473);
const total = computed(() => base.value * 2);

function incrementar21473() {
  base.value++;
}
</script>
