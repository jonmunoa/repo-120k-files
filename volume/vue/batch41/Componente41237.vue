<template>
  <section class="panel-41237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41237");
const base = ref(41237);
const total = computed(() => base.value * 2);

function incrementar41237() {
  base.value++;
}
</script>
