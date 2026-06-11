<template>
  <section class="panel-16317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16317");
const base = ref(16317);
const total = computed(() => base.value * 2);

function incrementar16317() {
  base.value++;
}
</script>
