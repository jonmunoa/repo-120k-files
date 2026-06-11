<template>
  <section class="panel-54645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54645");
const base = ref(54645);
const total = computed(() => base.value * 2);

function incrementar54645() {
  base.value++;
}
</script>
