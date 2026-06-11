<template>
  <section class="panel-6957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6957");
const base = ref(6957);
const total = computed(() => base.value * 2);

function incrementar6957() {
  base.value++;
}
</script>
