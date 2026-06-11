<template>
  <section class="panel-42585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42585");
const base = ref(42585);
const total = computed(() => base.value * 2);

function incrementar42585() {
  base.value++;
}
</script>
