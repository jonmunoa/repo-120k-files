<template>
  <section class="panel-23309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23309");
const base = ref(23309);
const total = computed(() => base.value * 2);

function incrementar23309() {
  base.value++;
}
</script>
