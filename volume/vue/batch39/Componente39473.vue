<template>
  <section class="panel-39473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39473");
const base = ref(39473);
const total = computed(() => base.value * 2);

function incrementar39473() {
  base.value++;
}
</script>
