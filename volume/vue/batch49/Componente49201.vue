<template>
  <section class="panel-49201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49201");
const base = ref(49201);
const total = computed(() => base.value * 2);

function incrementar49201() {
  base.value++;
}
</script>
