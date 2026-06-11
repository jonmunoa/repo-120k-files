<template>
  <section class="panel-44165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44165");
const base = ref(44165);
const total = computed(() => base.value * 2);

function incrementar44165() {
  base.value++;
}
</script>
