<template>
  <section class="panel-20165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20165");
const base = ref(20165);
const total = computed(() => base.value * 2);

function incrementar20165() {
  base.value++;
}
</script>
