<template>
  <section class="panel-1549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1549");
const base = ref(1549);
const total = computed(() => base.value * 2);

function incrementar1549() {
  base.value++;
}
</script>
