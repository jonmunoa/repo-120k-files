<template>
  <section class="panel-3165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3165");
const base = ref(3165);
const total = computed(() => base.value * 2);

function incrementar3165() {
  base.value++;
}
</script>
