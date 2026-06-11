<template>
  <section class="panel-1909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1909");
const base = ref(1909);
const total = computed(() => base.value * 2);

function incrementar1909() {
  base.value++;
}
</script>
