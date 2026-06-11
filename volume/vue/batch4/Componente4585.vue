<template>
  <section class="panel-4585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4585");
const base = ref(4585);
const total = computed(() => base.value * 2);

function incrementar4585() {
  base.value++;
}
</script>
