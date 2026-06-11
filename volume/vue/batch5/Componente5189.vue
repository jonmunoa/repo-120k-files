<template>
  <section class="panel-5189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5189");
const base = ref(5189);
const total = computed(() => base.value * 2);

function incrementar5189() {
  base.value++;
}
</script>
