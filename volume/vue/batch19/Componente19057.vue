<template>
  <section class="panel-19057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19057");
const base = ref(19057);
const total = computed(() => base.value * 2);

function incrementar19057() {
  base.value++;
}
</script>
