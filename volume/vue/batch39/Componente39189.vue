<template>
  <section class="panel-39189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39189");
const base = ref(39189);
const total = computed(() => base.value * 2);

function incrementar39189() {
  base.value++;
}
</script>
