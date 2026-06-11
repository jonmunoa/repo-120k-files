<template>
  <section class="panel-49213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49213");
const base = ref(49213);
const total = computed(() => base.value * 2);

function incrementar49213() {
  base.value++;
}
</script>
