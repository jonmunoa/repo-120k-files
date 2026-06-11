<template>
  <section class="panel-27421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27421");
const base = ref(27421);
const total = computed(() => base.value * 2);

function incrementar27421() {
  base.value++;
}
</script>
