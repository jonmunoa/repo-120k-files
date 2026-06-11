<template>
  <section class="panel-54909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54909");
const base = ref(54909);
const total = computed(() => base.value * 2);

function incrementar54909() {
  base.value++;
}
</script>
