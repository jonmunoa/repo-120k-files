<template>
  <section class="panel-50889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50889");
const base = ref(50889);
const total = computed(() => base.value * 2);

function incrementar50889() {
  base.value++;
}
</script>
