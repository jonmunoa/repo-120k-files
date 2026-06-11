<template>
  <section class="panel-54613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54613");
const base = ref(54613);
const total = computed(() => base.value * 2);

function incrementar54613() {
  base.value++;
}
</script>
