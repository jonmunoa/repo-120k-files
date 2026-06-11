<template>
  <section class="panel-48345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48345");
const base = ref(48345);
const total = computed(() => base.value * 2);

function incrementar48345() {
  base.value++;
}
</script>
