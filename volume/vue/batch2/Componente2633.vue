<template>
  <section class="panel-2633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2633");
const base = ref(2633);
const total = computed(() => base.value * 2);

function incrementar2633() {
  base.value++;
}
</script>
