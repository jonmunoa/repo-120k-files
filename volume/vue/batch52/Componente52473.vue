<template>
  <section class="panel-52473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52473");
const base = ref(52473);
const total = computed(() => base.value * 2);

function incrementar52473() {
  base.value++;
}
</script>
