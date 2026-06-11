<template>
  <section class="panel-42321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42321");
const base = ref(42321);
const total = computed(() => base.value * 2);

function incrementar42321() {
  base.value++;
}
</script>
