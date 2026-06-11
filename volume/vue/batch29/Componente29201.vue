<template>
  <section class="panel-29201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29201");
const base = ref(29201);
const total = computed(() => base.value * 2);

function incrementar29201() {
  base.value++;
}
</script>
