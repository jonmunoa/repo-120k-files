<template>
  <section class="panel-30345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30345");
const base = ref(30345);
const total = computed(() => base.value * 2);

function incrementar30345() {
  base.value++;
}
</script>
