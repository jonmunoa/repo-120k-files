<template>
  <section class="panel-7633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7633");
const base = ref(7633);
const total = computed(() => base.value * 2);

function incrementar7633() {
  base.value++;
}
</script>
