<template>
  <section class="panel-56889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56889");
const base = ref(56889);
const total = computed(() => base.value * 2);

function incrementar56889() {
  base.value++;
}
</script>
