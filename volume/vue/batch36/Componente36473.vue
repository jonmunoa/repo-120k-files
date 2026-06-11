<template>
  <section class="panel-36473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36473");
const base = ref(36473);
const total = computed(() => base.value * 2);

function incrementar36473() {
  base.value++;
}
</script>
