<template>
  <section class="panel-42309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42309");
const base = ref(42309);
const total = computed(() => base.value * 2);

function incrementar42309() {
  base.value++;
}
</script>
