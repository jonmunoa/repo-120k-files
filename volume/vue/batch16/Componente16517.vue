<template>
  <section class="panel-16517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16517");
const base = ref(16517);
const total = computed(() => base.value * 2);

function incrementar16517() {
  base.value++;
}
</script>
