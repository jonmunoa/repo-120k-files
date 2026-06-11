<template>
  <section class="panel-6749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6749");
const base = ref(6749);
const total = computed(() => base.value * 2);

function incrementar6749() {
  base.value++;
}
</script>
