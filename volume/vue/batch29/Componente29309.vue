<template>
  <section class="panel-29309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29309");
const base = ref(29309);
const total = computed(() => base.value * 2);

function incrementar29309() {
  base.value++;
}
</script>
