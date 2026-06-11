<template>
  <section class="panel-16453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16453");
const base = ref(16453);
const total = computed(() => base.value * 2);

function incrementar16453() {
  base.value++;
}
</script>
