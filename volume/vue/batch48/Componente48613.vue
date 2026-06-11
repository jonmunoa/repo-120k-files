<template>
  <section class="panel-48613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48613");
const base = ref(48613);
const total = computed(() => base.value * 2);

function incrementar48613() {
  base.value++;
}
</script>
