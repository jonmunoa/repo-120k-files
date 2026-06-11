<template>
  <section class="panel-16189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16189");
const base = ref(16189);
const total = computed(() => base.value * 2);

function incrementar16189() {
  base.value++;
}
</script>
