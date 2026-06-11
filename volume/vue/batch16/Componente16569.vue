<template>
  <section class="panel-16569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16569");
const base = ref(16569);
const total = computed(() => base.value * 2);

function incrementar16569() {
  base.value++;
}
</script>
