<template>
  <section class="panel-43237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43237");
const base = ref(43237);
const total = computed(() => base.value * 2);

function incrementar43237() {
  base.value++;
}
</script>
