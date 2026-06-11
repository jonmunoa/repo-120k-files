<template>
  <section class="panel-12753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12753");
const base = ref(12753);
const total = computed(() => base.value * 2);

function incrementar12753() {
  base.value++;
}
</script>
