<template>
  <section class="panel-30633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30633");
const base = ref(30633);
const total = computed(() => base.value * 2);

function incrementar30633() {
  base.value++;
}
</script>
