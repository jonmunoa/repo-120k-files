<template>
  <section class="panel-12345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12345");
const base = ref(12345);
const total = computed(() => base.value * 2);

function incrementar12345() {
  base.value++;
}
</script>
