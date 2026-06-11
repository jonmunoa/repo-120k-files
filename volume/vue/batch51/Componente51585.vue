<template>
  <section class="panel-51585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51585");
const base = ref(51585);
const total = computed(() => base.value * 2);

function incrementar51585() {
  base.value++;
}
</script>
