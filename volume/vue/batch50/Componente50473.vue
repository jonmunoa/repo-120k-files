<template>
  <section class="panel-50473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50473");
const base = ref(50473);
const total = computed(() => base.value * 2);

function incrementar50473() {
  base.value++;
}
</script>
