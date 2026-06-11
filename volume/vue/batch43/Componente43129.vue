<template>
  <section class="panel-43129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43129");
const base = ref(43129);
const total = computed(() => base.value * 2);

function incrementar43129() {
  base.value++;
}
</script>
