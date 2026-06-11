<template>
  <section class="panel-56613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56613");
const base = ref(56613);
const total = computed(() => base.value * 2);

function incrementar56613() {
  base.value++;
}
</script>
