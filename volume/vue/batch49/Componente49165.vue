<template>
  <section class="panel-49165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49165");
const base = ref(49165);
const total = computed(() => base.value * 2);

function incrementar49165() {
  base.value++;
}
</script>
