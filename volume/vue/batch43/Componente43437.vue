<template>
  <section class="panel-43437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43437");
const base = ref(43437);
const total = computed(() => base.value * 2);

function incrementar43437() {
  base.value++;
}
</script>
