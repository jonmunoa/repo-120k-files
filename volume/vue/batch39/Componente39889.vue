<template>
  <section class="panel-39889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39889");
const base = ref(39889);
const total = computed(() => base.value * 2);

function incrementar39889() {
  base.value++;
}
</script>
