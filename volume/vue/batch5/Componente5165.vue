<template>
  <section class="panel-5165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5165");
const base = ref(5165);
const total = computed(() => base.value * 2);

function incrementar5165() {
  base.value++;
}
</script>
