<template>
  <section class="panel-43341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43341");
const base = ref(43341);
const total = computed(() => base.value * 2);

function incrementar43341() {
  base.value++;
}
</script>
