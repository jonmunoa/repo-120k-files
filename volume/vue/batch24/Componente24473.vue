<template>
  <section class="panel-24473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24473");
const base = ref(24473);
const total = computed(() => base.value * 2);

function incrementar24473() {
  base.value++;
}
</script>
