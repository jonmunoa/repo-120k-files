<template>
  <section class="panel-44453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44453");
const base = ref(44453);
const total = computed(() => base.value * 2);

function incrementar44453() {
  base.value++;
}
</script>
