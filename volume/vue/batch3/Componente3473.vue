<template>
  <section class="panel-3473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3473");
const base = ref(3473);
const total = computed(() => base.value * 2);

function incrementar3473() {
  base.value++;
}
</script>
