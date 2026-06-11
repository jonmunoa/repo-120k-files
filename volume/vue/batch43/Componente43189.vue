<template>
  <section class="panel-43189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43189");
const base = ref(43189);
const total = computed(() => base.value * 2);

function incrementar43189() {
  base.value++;
}
</script>
