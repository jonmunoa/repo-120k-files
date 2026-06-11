<template>
  <section class="panel-23077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23077");
const base = ref(23077);
const total = computed(() => base.value * 2);

function incrementar23077() {
  base.value++;
}
</script>
