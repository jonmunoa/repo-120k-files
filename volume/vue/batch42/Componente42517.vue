<template>
  <section class="panel-42517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42517");
const base = ref(42517);
const total = computed(() => base.value * 2);

function incrementar42517() {
  base.value++;
}
</script>
