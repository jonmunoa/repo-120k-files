<template>
  <section class="panel-22057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22057");
const base = ref(22057);
const total = computed(() => base.value * 2);

function incrementar22057() {
  base.value++;
}
</script>
