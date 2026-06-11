<template>
  <section class="panel-1453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1453");
const base = ref(1453);
const total = computed(() => base.value * 2);

function incrementar1453() {
  base.value++;
}
</script>
