<template>
  <section class="panel-45633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45633");
const base = ref(45633);
const total = computed(() => base.value * 2);

function incrementar45633() {
  base.value++;
}
</script>
