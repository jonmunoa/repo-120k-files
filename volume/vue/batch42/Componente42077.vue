<template>
  <section class="panel-42077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42077");
const base = ref(42077);
const total = computed(() => base.value * 2);

function incrementar42077() {
  base.value++;
}
</script>
