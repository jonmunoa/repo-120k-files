<template>
  <section class="panel-3633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3633");
const base = ref(3633);
const total = computed(() => base.value * 2);

function incrementar3633() {
  base.value++;
}
</script>
