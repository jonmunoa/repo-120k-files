<template>
  <section class="panel-54309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54309");
const base = ref(54309);
const total = computed(() => base.value * 2);

function incrementar54309() {
  base.value++;
}
</script>
