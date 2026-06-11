<template>
  <section class="panel-35189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35189");
const base = ref(35189);
const total = computed(() => base.value * 2);

function incrementar35189() {
  base.value++;
}
</script>
