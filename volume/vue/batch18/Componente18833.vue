<template>
  <section class="panel-18833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18833");
const base = ref(18833);
const total = computed(() => base.value * 2);

function incrementar18833() {
  base.value++;
}
</script>
