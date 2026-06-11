<template>
  <section class="panel-2453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2453");
const base = ref(2453);
const total = computed(() => base.value * 2);

function incrementar2453() {
  base.value++;
}
</script>
