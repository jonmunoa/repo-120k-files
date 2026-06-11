<template>
  <section class="panel-23129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23129");
const base = ref(23129);
const total = computed(() => base.value * 2);

function incrementar23129() {
  base.value++;
}
</script>
