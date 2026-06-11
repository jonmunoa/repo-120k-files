<template>
  <section class="panel-48129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48129");
const base = ref(48129);
const total = computed(() => base.value * 2);

function incrementar48129() {
  base.value++;
}
</script>
