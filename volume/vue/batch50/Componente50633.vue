<template>
  <section class="panel-50633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50633");
const base = ref(50633);
const total = computed(() => base.value * 2);

function incrementar50633() {
  base.value++;
}
</script>
