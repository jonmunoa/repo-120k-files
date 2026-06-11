<template>
  <section class="panel-23909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23909");
const base = ref(23909);
const total = computed(() => base.value * 2);

function incrementar23909() {
  base.value++;
}
</script>
