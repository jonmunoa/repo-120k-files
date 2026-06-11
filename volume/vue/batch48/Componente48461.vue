<template>
  <section class="panel-48461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48461");
const base = ref(48461);
const total = computed(() => base.value * 2);

function incrementar48461() {
  base.value++;
}
</script>
