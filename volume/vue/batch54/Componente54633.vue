<template>
  <section class="panel-54633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54633");
const base = ref(54633);
const total = computed(() => base.value * 2);

function incrementar54633() {
  base.value++;
}
</script>
