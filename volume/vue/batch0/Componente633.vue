<template>
  <section class="panel-633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 633");
const base = ref(633);
const total = computed(() => base.value * 2);

function incrementar633() {
  base.value++;
}
</script>
