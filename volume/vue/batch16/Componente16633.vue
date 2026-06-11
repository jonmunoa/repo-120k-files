<template>
  <section class="panel-16633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16633");
const base = ref(16633);
const total = computed(() => base.value * 2);

function incrementar16633() {
  base.value++;
}
</script>
