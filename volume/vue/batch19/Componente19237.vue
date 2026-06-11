<template>
  <section class="panel-19237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19237");
const base = ref(19237);
const total = computed(() => base.value * 2);

function incrementar19237() {
  base.value++;
}
</script>
