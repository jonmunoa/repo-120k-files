<template>
  <section class="panel-33517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33517");
const base = ref(33517);
const total = computed(() => base.value * 2);

function incrementar33517() {
  base.value++;
}
</script>
