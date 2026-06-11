<template>
  <section class="panel-32801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32801");
const base = ref(32801);
const total = computed(() => base.value * 2);

function incrementar32801() {
  base.value++;
}
</script>
