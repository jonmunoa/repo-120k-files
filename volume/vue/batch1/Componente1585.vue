<template>
  <section class="panel-1585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1585");
const base = ref(1585);
const total = computed(() => base.value * 2);

function incrementar1585() {
  base.value++;
}
</script>
