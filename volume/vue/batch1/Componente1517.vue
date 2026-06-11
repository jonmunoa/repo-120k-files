<template>
  <section class="panel-1517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1517");
const base = ref(1517);
const total = computed(() => base.value * 2);

function incrementar1517() {
  base.value++;
}
</script>
