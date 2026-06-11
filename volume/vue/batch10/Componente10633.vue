<template>
  <section class="panel-10633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10633");
const base = ref(10633);
const total = computed(() => base.value * 2);

function incrementar10633() {
  base.value++;
}
</script>
