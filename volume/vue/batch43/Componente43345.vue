<template>
  <section class="panel-43345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43345");
const base = ref(43345);
const total = computed(() => base.value * 2);

function incrementar43345() {
  base.value++;
}
</script>
