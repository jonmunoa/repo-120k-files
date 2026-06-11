<template>
  <section class="panel-43749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43749");
const base = ref(43749);
const total = computed(() => base.value * 2);

function incrementar43749() {
  base.value++;
}
</script>
