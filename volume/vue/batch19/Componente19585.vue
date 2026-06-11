<template>
  <section class="panel-19585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19585");
const base = ref(19585);
const total = computed(() => base.value * 2);

function incrementar19585() {
  base.value++;
}
</script>
