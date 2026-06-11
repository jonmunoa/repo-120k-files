<template>
  <section class="panel-43057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43057");
const base = ref(43057);
const total = computed(() => base.value * 2);

function incrementar43057() {
  base.value++;
}
</script>
