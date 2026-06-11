<template>
  <section class="panel-43309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43309");
const base = ref(43309);
const total = computed(() => base.value * 2);

function incrementar43309() {
  base.value++;
}
</script>
