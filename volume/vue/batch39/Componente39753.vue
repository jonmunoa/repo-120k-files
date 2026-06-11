<template>
  <section class="panel-39753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39753");
const base = ref(39753);
const total = computed(() => base.value * 2);

function incrementar39753() {
  base.value++;
}
</script>
