<template>
  <section class="panel-45309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45309");
const base = ref(45309);
const total = computed(() => base.value * 2);

function incrementar45309() {
  base.value++;
}
</script>
