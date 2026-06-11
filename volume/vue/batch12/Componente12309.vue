<template>
  <section class="panel-12309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12309");
const base = ref(12309);
const total = computed(() => base.value * 2);

function incrementar12309() {
  base.value++;
}
</script>
