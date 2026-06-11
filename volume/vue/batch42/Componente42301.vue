<template>
  <section class="panel-42301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42301");
const base = ref(42301);
const total = computed(() => base.value * 2);

function incrementar42301() {
  base.value++;
}
</script>
