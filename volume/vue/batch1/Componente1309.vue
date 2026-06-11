<template>
  <section class="panel-1309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1309");
const base = ref(1309);
const total = computed(() => base.value * 2);

function incrementar1309() {
  base.value++;
}
</script>
