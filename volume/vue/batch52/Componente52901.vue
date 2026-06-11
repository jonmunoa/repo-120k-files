<template>
  <section class="panel-52901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52901");
const base = ref(52901);
const total = computed(() => base.value * 2);

function incrementar52901() {
  base.value++;
}
</script>
