<template>
  <section class="panel-39613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39613");
const base = ref(39613);
const total = computed(() => base.value * 2);

function incrementar39613() {
  base.value++;
}
</script>
