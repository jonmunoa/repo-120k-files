<template>
  <section class="panel-3309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3309");
const base = ref(3309);
const total = computed(() => base.value * 2);

function incrementar3309() {
  base.value++;
}
</script>
