<template>
  <section class="panel-3885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3885");
const base = ref(3885);
const total = computed(() => base.value * 2);

function incrementar3885() {
  base.value++;
}
</script>
