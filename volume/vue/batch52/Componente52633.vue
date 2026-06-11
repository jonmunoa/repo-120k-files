<template>
  <section class="panel-52633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52633");
const base = ref(52633);
const total = computed(() => base.value * 2);

function incrementar52633() {
  base.value++;
}
</script>
