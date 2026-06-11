<template>
  <section class="panel-43673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43673");
const base = ref(43673);
const total = computed(() => base.value * 2);

function incrementar43673() {
  base.value++;
}
</script>
