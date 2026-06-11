<template>
  <section class="panel-44517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44517");
const base = ref(44517);
const total = computed(() => base.value * 2);

function incrementar44517() {
  base.value++;
}
</script>
