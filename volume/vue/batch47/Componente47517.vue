<template>
  <section class="panel-47517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47517");
const base = ref(47517);
const total = computed(() => base.value * 2);

function incrementar47517() {
  base.value++;
}
</script>
