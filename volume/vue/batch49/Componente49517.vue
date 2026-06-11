<template>
  <section class="panel-49517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49517");
const base = ref(49517);
const total = computed(() => base.value * 2);

function incrementar49517() {
  base.value++;
}
</script>
