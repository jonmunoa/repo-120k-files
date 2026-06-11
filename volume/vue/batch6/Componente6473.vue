<template>
  <section class="panel-6473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6473");
const base = ref(6473);
const total = computed(() => base.value * 2);

function incrementar6473() {
  base.value++;
}
</script>
