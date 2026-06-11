<template>
  <section class="panel-1633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1633");
const base = ref(1633);
const total = computed(() => base.value * 2);

function incrementar1633() {
  base.value++;
}
</script>
