<template>
  <section class="panel-43973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43973");
const base = ref(43973);
const total = computed(() => base.value * 2);

function incrementar43973() {
  base.value++;
}
</script>
