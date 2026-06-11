<template>
  <section class="panel-15613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15613");
const base = ref(15613);
const total = computed(() => base.value * 2);

function incrementar15613() {
  base.value++;
}
</script>
