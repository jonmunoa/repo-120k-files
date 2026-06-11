<template>
  <section class="panel-30165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30165");
const base = ref(30165);
const total = computed(() => base.value * 2);

function incrementar30165() {
  base.value++;
}
</script>
