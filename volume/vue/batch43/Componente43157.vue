<template>
  <section class="panel-43157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43157");
const base = ref(43157);
const total = computed(() => base.value * 2);

function incrementar43157() {
  base.value++;
}
</script>
