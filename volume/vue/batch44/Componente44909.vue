<template>
  <section class="panel-44909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44909");
const base = ref(44909);
const total = computed(() => base.value * 2);

function incrementar44909() {
  base.value++;
}
</script>
