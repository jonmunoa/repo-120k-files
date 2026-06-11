<template>
  <section class="panel-44345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44345");
const base = ref(44345);
const total = computed(() => base.value * 2);

function incrementar44345() {
  base.value++;
}
</script>
