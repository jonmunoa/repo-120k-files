<template>
  <section class="panel-42213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42213");
const base = ref(42213);
const total = computed(() => base.value * 2);

function incrementar42213() {
  base.value++;
}
</script>
