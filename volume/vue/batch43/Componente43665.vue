<template>
  <section class="panel-43665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43665");
const base = ref(43665);
const total = computed(() => base.value * 2);

function incrementar43665() {
  base.value++;
}
</script>
