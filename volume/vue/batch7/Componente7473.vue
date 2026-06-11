<template>
  <section class="panel-7473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7473");
const base = ref(7473);
const total = computed(() => base.value * 2);

function incrementar7473() {
  base.value++;
}
</script>
