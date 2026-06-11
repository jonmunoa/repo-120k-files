<template>
  <section class="panel-19701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19701");
const base = ref(19701);
const total = computed(() => base.value * 2);

function incrementar19701() {
  base.value++;
}
</script>
