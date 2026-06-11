<template>
  <section class="panel-51453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51453");
const base = ref(51453);
const total = computed(() => base.value * 2);

function incrementar51453() {
  base.value++;
}
</script>
