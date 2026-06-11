<template>
  <section class="panel-43313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43313");
const base = ref(43313);
const total = computed(() => base.value * 2);

function incrementar43313() {
  base.value++;
}
</script>
