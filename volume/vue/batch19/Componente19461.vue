<template>
  <section class="panel-19461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19461");
const base = ref(19461);
const total = computed(() => base.value * 2);

function incrementar19461() {
  base.value++;
}
</script>
