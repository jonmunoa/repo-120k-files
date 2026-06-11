<template>
  <section class="panel-21633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21633");
const base = ref(21633);
const total = computed(() => base.value * 2);

function incrementar21633() {
  base.value++;
}
</script>
