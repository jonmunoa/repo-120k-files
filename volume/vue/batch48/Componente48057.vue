<template>
  <section class="panel-48057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48057");
const base = ref(48057);
const total = computed(() => base.value * 2);

function incrementar48057() {
  base.value++;
}
</script>
