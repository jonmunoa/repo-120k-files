<template>
  <section class="panel-42341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42341");
const base = ref(42341);
const total = computed(() => base.value * 2);

function incrementar42341() {
  base.value++;
}
</script>
