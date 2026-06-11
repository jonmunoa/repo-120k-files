<template>
  <section class="panel-23949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23949");
const base = ref(23949);
const total = computed(() => base.value * 2);

function incrementar23949() {
  base.value++;
}
</script>
