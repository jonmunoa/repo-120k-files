<template>
  <section class="panel-30585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30585");
const base = ref(30585);
const total = computed(() => base.value * 2);

function incrementar30585() {
  base.value++;
}
</script>
