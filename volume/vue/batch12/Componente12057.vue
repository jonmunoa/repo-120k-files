<template>
  <section class="panel-12057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12057");
const base = ref(12057);
const total = computed(() => base.value * 2);

function incrementar12057() {
  base.value++;
}
</script>
