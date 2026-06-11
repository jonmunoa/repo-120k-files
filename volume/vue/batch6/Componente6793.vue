<template>
  <section class="panel-6793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6793");
const base = ref(6793);
const total = computed(() => base.value * 2);

function incrementar6793() {
  base.value++;
}
</script>
