<template>
  <section class="panel-33613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33613");
const base = ref(33613);
const total = computed(() => base.value * 2);

function incrementar33613() {
  base.value++;
}
</script>
