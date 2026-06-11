<template>
  <section class="panel-32633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32633");
const base = ref(32633);
const total = computed(() => base.value * 2);

function incrementar32633() {
  base.value++;
}
</script>
