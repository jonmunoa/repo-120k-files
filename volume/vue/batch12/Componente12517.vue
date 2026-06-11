<template>
  <section class="panel-12517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12517");
const base = ref(12517);
const total = computed(() => base.value * 2);

function incrementar12517() {
  base.value++;
}
</script>
