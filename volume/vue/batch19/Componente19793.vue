<template>
  <section class="panel-19793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19793");
const base = ref(19793);
const total = computed(() => base.value * 2);

function incrementar19793() {
  base.value++;
}
</script>
