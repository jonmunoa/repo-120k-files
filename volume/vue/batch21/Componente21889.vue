<template>
  <section class="panel-21889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21889");
const base = ref(21889);
const total = computed(() => base.value * 2);

function incrementar21889() {
  base.value++;
}
</script>
