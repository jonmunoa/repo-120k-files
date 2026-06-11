<template>
  <section class="panel-43585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43585");
const base = ref(43585);
const total = computed(() => base.value * 2);

function incrementar43585() {
  base.value++;
}
</script>
