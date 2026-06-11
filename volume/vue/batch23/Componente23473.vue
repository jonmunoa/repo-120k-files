<template>
  <section class="panel-23473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23473");
const base = ref(23473);
const total = computed(() => base.value * 2);

function incrementar23473() {
  base.value++;
}
</script>
