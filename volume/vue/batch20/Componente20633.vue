<template>
  <section class="panel-20633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20633");
const base = ref(20633);
const total = computed(() => base.value * 2);

function incrementar20633() {
  base.value++;
}
</script>
