<template>
  <section class="panel-42129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42129");
const base = ref(42129);
const total = computed(() => base.value * 2);

function incrementar42129() {
  base.value++;
}
</script>
