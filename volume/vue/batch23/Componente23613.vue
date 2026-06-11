<template>
  <section class="panel-23613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23613");
const base = ref(23613);
const total = computed(() => base.value * 2);

function incrementar23613() {
  base.value++;
}
</script>
