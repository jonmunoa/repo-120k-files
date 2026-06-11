<template>
  <section class="panel-41613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41613");
const base = ref(41613);
const total = computed(() => base.value * 2);

function incrementar41613() {
  base.value++;
}
</script>
