<template>
  <section class="panel-8517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8517");
const base = ref(8517);
const total = computed(() => base.value * 2);

function incrementar8517() {
  base.value++;
}
</script>
