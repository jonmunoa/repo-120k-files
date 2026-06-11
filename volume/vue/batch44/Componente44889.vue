<template>
  <section class="panel-44889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44889");
const base = ref(44889);
const total = computed(() => base.value * 2);

function incrementar44889() {
  base.value++;
}
</script>
