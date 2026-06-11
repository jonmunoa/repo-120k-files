<template>
  <section class="panel-53585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53585");
const base = ref(53585);
const total = computed(() => base.value * 2);

function incrementar53585() {
  base.value++;
}
</script>
