<template>
  <section class="panel-16881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16881");
const base = ref(16881);
const total = computed(() => base.value * 2);

function incrementar16881() {
  base.value++;
}
</script>
