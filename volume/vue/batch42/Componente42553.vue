<template>
  <section class="panel-42553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42553");
const base = ref(42553);
const total = computed(() => base.value * 2);

function incrementar42553() {
  base.value++;
}
</script>
