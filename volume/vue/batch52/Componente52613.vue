<template>
  <section class="panel-52613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52613");
const base = ref(52613);
const total = computed(() => base.value * 2);

function incrementar52613() {
  base.value++;
}
</script>
