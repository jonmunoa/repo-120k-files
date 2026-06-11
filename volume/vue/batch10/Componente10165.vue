<template>
  <section class="panel-10165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10165");
const base = ref(10165);
const total = computed(() => base.value * 2);

function incrementar10165() {
  base.value++;
}
</script>
