<template>
  <section class="panel-17201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17201");
const base = ref(17201);
const total = computed(() => base.value * 2);

function incrementar17201() {
  base.value++;
}
</script>
