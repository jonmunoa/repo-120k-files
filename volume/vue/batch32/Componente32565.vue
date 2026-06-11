<template>
  <section class="panel-32565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32565");
const base = ref(32565);
const total = computed(() => base.value * 2);

function incrementar32565() {
  base.value++;
}
</script>
