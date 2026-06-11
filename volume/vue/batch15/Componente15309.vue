<template>
  <section class="panel-15309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15309");
const base = ref(15309);
const total = computed(() => base.value * 2);

function incrementar15309() {
  base.value++;
}
</script>
