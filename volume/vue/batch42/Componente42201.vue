<template>
  <section class="panel-42201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42201");
const base = ref(42201);
const total = computed(() => base.value * 2);

function incrementar42201() {
  base.value++;
}
</script>
