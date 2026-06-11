<template>
  <section class="panel-30453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30453");
const base = ref(30453);
const total = computed(() => base.value * 2);

function incrementar30453() {
  base.value++;
}
</script>
