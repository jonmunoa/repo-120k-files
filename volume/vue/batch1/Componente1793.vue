<template>
  <section class="panel-1793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1793");
const base = ref(1793);
const total = computed(() => base.value * 2);

function incrementar1793() {
  base.value++;
}
</script>
