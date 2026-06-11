<template>
  <section class="panel-21237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21237");
const base = ref(21237);
const total = computed(() => base.value * 2);

function incrementar21237() {
  base.value++;
}
</script>
