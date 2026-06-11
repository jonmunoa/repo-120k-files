<template>
  <section class="panel-56473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56473");
const base = ref(56473);
const total = computed(() => base.value * 2);

function incrementar56473() {
  base.value++;
}
</script>
