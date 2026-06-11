<template>
  <section class="panel-39585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39585");
const base = ref(39585);
const total = computed(() => base.value * 2);

function incrementar39585() {
  base.value++;
}
</script>
