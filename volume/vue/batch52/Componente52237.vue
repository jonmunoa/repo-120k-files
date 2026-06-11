<template>
  <section class="panel-52237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52237");
const base = ref(52237);
const total = computed(() => base.value * 2);

function incrementar52237() {
  base.value++;
}
</script>
