<template>
  <section class="panel-16129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16129");
const base = ref(16129);
const total = computed(() => base.value * 2);

function incrementar16129() {
  base.value++;
}
</script>
