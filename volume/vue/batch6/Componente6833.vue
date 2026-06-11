<template>
  <section class="panel-6833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6833");
const base = ref(6833);
const total = computed(() => base.value * 2);

function incrementar6833() {
  base.value++;
}
</script>
