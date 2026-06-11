<template>
  <section class="panel-21309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21309");
const base = ref(21309);
const total = computed(() => base.value * 2);

function incrementar21309() {
  base.value++;
}
</script>
