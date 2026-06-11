<template>
  <section class="panel-23345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23345");
const base = ref(23345);
const total = computed(() => base.value * 2);

function incrementar23345() {
  base.value++;
}
</script>
