<template>
  <section class="panel-2165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2165");
const base = ref(2165);
const total = computed(() => base.value * 2);

function incrementar2165() {
  base.value++;
}
</script>
