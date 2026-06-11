<template>
  <section class="panel-19473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19473");
const base = ref(19473);
const total = computed(() => base.value * 2);

function incrementar19473() {
  base.value++;
}
</script>
