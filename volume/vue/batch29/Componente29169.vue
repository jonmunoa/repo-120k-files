<template>
  <section class="panel-29169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29169");
const base = ref(29169);
const total = computed(() => base.value * 2);

function incrementar29169() {
  base.value++;
}
</script>
