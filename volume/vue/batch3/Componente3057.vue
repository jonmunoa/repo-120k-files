<template>
  <section class="panel-3057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3057");
const base = ref(3057);
const total = computed(() => base.value * 2);

function incrementar3057() {
  base.value++;
}
</script>
