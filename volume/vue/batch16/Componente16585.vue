<template>
  <section class="panel-16585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16585");
const base = ref(16585);
const total = computed(() => base.value * 2);

function incrementar16585() {
  base.value++;
}
</script>
