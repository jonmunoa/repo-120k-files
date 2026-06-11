<template>
  <section class="panel-29153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29153");
const base = ref(29153);
const total = computed(() => base.value * 2);

function incrementar29153() {
  base.value++;
}
</script>
