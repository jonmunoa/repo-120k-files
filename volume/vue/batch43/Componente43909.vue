<template>
  <section class="panel-43909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43909");
const base = ref(43909);
const total = computed(() => base.value * 2);

function incrementar43909() {
  base.value++;
}
</script>
