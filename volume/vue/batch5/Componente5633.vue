<template>
  <section class="panel-5633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5633");
const base = ref(5633);
const total = computed(() => base.value * 2);

function incrementar5633() {
  base.value++;
}
</script>
