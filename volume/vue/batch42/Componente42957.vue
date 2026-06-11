<template>
  <section class="panel-42957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42957");
const base = ref(42957);
const total = computed(() => base.value * 2);

function incrementar42957() {
  base.value++;
}
</script>
