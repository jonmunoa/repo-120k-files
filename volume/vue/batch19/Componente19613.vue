<template>
  <section class="panel-19613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19613");
const base = ref(19613);
const total = computed(() => base.value * 2);

function incrementar19613() {
  base.value++;
}
</script>
