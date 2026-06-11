<template>
  <section class="panel-19453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19453");
const base = ref(19453);
const total = computed(() => base.value * 2);

function incrementar19453() {
  base.value++;
}
</script>
