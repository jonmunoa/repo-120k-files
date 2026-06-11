<template>
  <section class="panel-16057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16057");
const base = ref(16057);
const total = computed(() => base.value * 2);

function incrementar16057() {
  base.value++;
}
</script>
