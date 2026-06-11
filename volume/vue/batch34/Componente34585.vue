<template>
  <section class="panel-34585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34585");
const base = ref(34585);
const total = computed(() => base.value * 2);

function incrementar34585() {
  base.value++;
}
</script>
