<template>
  <section class="panel-36585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36585");
const base = ref(36585);
const total = computed(() => base.value * 2);

function incrementar36585() {
  base.value++;
}
</script>
