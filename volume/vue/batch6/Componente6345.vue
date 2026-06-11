<template>
  <section class="panel-6345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6345");
const base = ref(6345);
const total = computed(() => base.value * 2);

function incrementar6345() {
  base.value++;
}
</script>
