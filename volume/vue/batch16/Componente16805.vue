<template>
  <section class="panel-16805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16805");
const base = ref(16805);
const total = computed(() => base.value * 2);

function incrementar16805() {
  base.value++;
}
</script>
