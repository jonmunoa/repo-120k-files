<template>
  <section class="panel-23057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23057");
const base = ref(23057);
const total = computed(() => base.value * 2);

function incrementar23057() {
  base.value++;
}
</script>
