<template>
  <section class="panel-52165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52165");
const base = ref(52165);
const total = computed(() => base.value * 2);

function incrementar52165() {
  base.value++;
}
</script>
