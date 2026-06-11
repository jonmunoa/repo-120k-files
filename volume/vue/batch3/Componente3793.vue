<template>
  <section class="panel-3793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3793");
const base = ref(3793);
const total = computed(() => base.value * 2);

function incrementar3793() {
  base.value++;
}
</script>
