<template>
  <section class="panel-12165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12165");
const base = ref(12165);
const total = computed(() => base.value * 2);

function incrementar12165() {
  base.value++;
}
</script>
