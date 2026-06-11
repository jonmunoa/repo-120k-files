<template>
  <section class="panel-16949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16949");
const base = ref(16949);
const total = computed(() => base.value * 2);

function incrementar16949() {
  base.value++;
}
</script>
