<template>
  <section class="panel-29497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29497");
const base = ref(29497);
const total = computed(() => base.value * 2);

function incrementar29497() {
  base.value++;
}
</script>
