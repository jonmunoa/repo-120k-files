<template>
  <section class="panel-6729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6729");
const base = ref(6729);
const total = computed(() => base.value * 2);

function incrementar6729() {
  base.value++;
}
</script>
