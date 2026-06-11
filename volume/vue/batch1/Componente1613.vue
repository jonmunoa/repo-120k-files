<template>
  <section class="panel-1613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1613");
const base = ref(1613);
const total = computed(() => base.value * 2);

function incrementar1613() {
  base.value++;
}
</script>
