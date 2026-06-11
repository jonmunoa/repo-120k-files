<template>
  <section class="panel-56237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56237");
const base = ref(56237);
const total = computed(() => base.value * 2);

function incrementar56237() {
  base.value++;
}
</script>
