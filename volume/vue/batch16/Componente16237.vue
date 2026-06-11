<template>
  <section class="panel-16237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16237");
const base = ref(16237);
const total = computed(() => base.value * 2);

function incrementar16237() {
  base.value++;
}
</script>
