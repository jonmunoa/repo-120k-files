<template>
  <section class="panel-54057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54057");
const base = ref(54057);
const total = computed(() => base.value * 2);

function incrementar54057() {
  base.value++;
}
</script>
