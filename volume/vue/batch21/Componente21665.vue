<template>
  <section class="panel-21665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21665");
const base = ref(21665);
const total = computed(() => base.value * 2);

function incrementar21665() {
  base.value++;
}
</script>
