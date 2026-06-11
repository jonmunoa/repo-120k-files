<template>
  <section class="panel-45585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45585");
const base = ref(45585);
const total = computed(() => base.value * 2);

function incrementar45585() {
  base.value++;
}
</script>
