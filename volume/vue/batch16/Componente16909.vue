<template>
  <section class="panel-16909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16909");
const base = ref(16909);
const total = computed(() => base.value * 2);

function incrementar16909() {
  base.value++;
}
</script>
