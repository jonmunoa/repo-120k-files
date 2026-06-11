<template>
  <section class="panel-30473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30473");
const base = ref(30473);
const total = computed(() => base.value * 2);

function incrementar30473() {
  base.value++;
}
</script>
