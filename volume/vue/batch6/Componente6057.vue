<template>
  <section class="panel-6057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6057");
const base = ref(6057);
const total = computed(() => base.value * 2);

function incrementar6057() {
  base.value++;
}
</script>
