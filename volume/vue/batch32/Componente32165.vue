<template>
  <section class="panel-32165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32165");
const base = ref(32165);
const total = computed(() => base.value * 2);

function incrementar32165() {
  base.value++;
}
</script>
