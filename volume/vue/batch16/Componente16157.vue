<template>
  <section class="panel-16157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16157");
const base = ref(16157);
const total = computed(() => base.value * 2);

function incrementar16157() {
  base.value++;
}
</script>
