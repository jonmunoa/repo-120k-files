<template>
  <section class="panel-45165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45165");
const base = ref(45165);
const total = computed(() => base.value * 2);

function incrementar45165() {
  base.value++;
}
</script>
