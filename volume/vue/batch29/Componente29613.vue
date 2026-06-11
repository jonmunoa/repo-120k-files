<template>
  <section class="panel-29613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29613");
const base = ref(29613);
const total = computed(() => base.value * 2);

function incrementar29613() {
  base.value++;
}
</script>
