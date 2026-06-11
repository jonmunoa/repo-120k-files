<template>
  <section class="panel-1753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1753");
const base = ref(1753);
const total = computed(() => base.value * 2);

function incrementar1753() {
  base.value++;
}
</script>
