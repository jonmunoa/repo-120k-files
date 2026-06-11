<template>
  <section class="panel-12633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12633");
const base = ref(12633);
const total = computed(() => base.value * 2);

function incrementar12633() {
  base.value++;
}
</script>
