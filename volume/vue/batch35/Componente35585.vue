<template>
  <section class="panel-35585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35585");
const base = ref(35585);
const total = computed(() => base.value * 2);

function incrementar35585() {
  base.value++;
}
</script>
