<template>
  <section class="panel-9473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9473");
const base = ref(9473);
const total = computed(() => base.value * 2);

function incrementar9473() {
  base.value++;
}
</script>
