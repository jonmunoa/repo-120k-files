<template>
  <section class="panel-42665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42665");
const base = ref(42665);
const total = computed(() => base.value * 2);

function incrementar42665() {
  base.value++;
}
</script>
