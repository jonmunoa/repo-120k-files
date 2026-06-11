<template>
  <section class="panel-3345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3345");
const base = ref(3345);
const total = computed(() => base.value * 2);

function incrementar3345() {
  base.value++;
}
</script>
