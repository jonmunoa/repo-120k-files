<template>
  <section class="panel-39701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39701");
const base = ref(39701);
const total = computed(() => base.value * 2);

function incrementar39701() {
  base.value++;
}
</script>
