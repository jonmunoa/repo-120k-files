<template>
  <section class="panel-21613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21613");
const base = ref(21613);
const total = computed(() => base.value * 2);

function incrementar21613() {
  base.value++;
}
</script>
