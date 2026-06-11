<template>
  <section class="panel-23201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23201");
const base = ref(23201);
const total = computed(() => base.value * 2);

function incrementar23201() {
  base.value++;
}
</script>
