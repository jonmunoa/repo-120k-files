<template>
  <section class="panel-137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 137");
const base = ref(137);
const total = computed(() => base.value * 2);

function incrementar137() {
  base.value++;
}
</script>
