<template>
  <section class="panel-31889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31889");
const base = ref(31889);
const total = computed(() => base.value * 2);

function incrementar31889() {
  base.value++;
}
</script>
