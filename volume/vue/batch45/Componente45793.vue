<template>
  <section class="panel-45793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45793");
const base = ref(45793);
const total = computed(() => base.value * 2);

function incrementar45793() {
  base.value++;
}
</script>
