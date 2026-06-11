<template>
  <section class="panel-29633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29633");
const base = ref(29633);
const total = computed(() => base.value * 2);

function incrementar29633() {
  base.value++;
}
</script>
