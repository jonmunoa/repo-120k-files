<template>
  <section class="panel-41889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41889");
const base = ref(41889);
const total = computed(() => base.value * 2);

function incrementar41889() {
  base.value++;
}
</script>
