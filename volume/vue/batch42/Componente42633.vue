<template>
  <section class="panel-42633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42633");
const base = ref(42633);
const total = computed(() => base.value * 2);

function incrementar42633() {
  base.value++;
}
</script>
