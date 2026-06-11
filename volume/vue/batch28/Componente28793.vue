<template>
  <section class="panel-28793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28793");
const base = ref(28793);
const total = computed(() => base.value * 2);

function incrementar28793() {
  base.value++;
}
</script>
