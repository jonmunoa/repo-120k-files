<template>
  <section class="panel-49613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49613");
const base = ref(49613);
const total = computed(() => base.value * 2);

function incrementar49613() {
  base.value++;
}
</script>
