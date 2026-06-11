<template>
  <section class="panel-5665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5665");
const base = ref(5665);
const total = computed(() => base.value * 2);

function incrementar5665() {
  base.value++;
}
</script>
