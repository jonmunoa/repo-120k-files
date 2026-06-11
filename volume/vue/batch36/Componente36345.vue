<template>
  <section class="panel-36345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36345");
const base = ref(36345);
const total = computed(() => base.value * 2);

function incrementar36345() {
  base.value++;
}
</script>
