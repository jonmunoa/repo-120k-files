<template>
  <section class="panel-54665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54665");
const base = ref(54665);
const total = computed(() => base.value * 2);

function incrementar54665() {
  base.value++;
}
</script>
