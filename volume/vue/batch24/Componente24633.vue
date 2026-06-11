<template>
  <section class="panel-24633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24633");
const base = ref(24633);
const total = computed(() => base.value * 2);

function incrementar24633() {
  base.value++;
}
</script>
