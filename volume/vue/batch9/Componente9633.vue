<template>
  <section class="panel-9633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9633");
const base = ref(9633);
const total = computed(() => base.value * 2);

function incrementar9633() {
  base.value++;
}
</script>
