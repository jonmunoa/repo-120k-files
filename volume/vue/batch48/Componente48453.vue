<template>
  <section class="panel-48453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48453");
const base = ref(48453);
const total = computed(() => base.value * 2);

function incrementar48453() {
  base.value++;
}
</script>
