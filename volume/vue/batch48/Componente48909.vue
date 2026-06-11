<template>
  <section class="panel-48909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48909");
const base = ref(48909);
const total = computed(() => base.value * 2);

function incrementar48909() {
  base.value++;
}
</script>
