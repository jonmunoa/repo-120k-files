<template>
  <section class="panel-42753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42753");
const base = ref(42753);
const total = computed(() => base.value * 2);

function incrementar42753() {
  base.value++;
}
</script>
