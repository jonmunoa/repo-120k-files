<template>
  <section class="panel-3585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3585");
const base = ref(3585);
const total = computed(() => base.value * 2);

function incrementar3585() {
  base.value++;
}
</script>
