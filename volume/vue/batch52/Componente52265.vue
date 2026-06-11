<template>
  <section class="panel-52265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52265");
const base = ref(52265);
const total = computed(() => base.value * 2);

function incrementar52265() {
  base.value++;
}
</script>
