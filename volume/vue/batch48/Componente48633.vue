<template>
  <section class="panel-48633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48633");
const base = ref(48633);
const total = computed(() => base.value * 2);

function incrementar48633() {
  base.value++;
}
</script>
