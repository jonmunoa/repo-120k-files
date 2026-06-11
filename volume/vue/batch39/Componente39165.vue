<template>
  <section class="panel-39165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39165");
const base = ref(39165);
const total = computed(() => base.value * 2);

function incrementar39165() {
  base.value++;
}
</script>
