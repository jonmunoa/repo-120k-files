<template>
  <section class="panel-36625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36625");
const base = ref(36625);
const total = computed(() => base.value * 2);

function incrementar36625() {
  base.value++;
}
</script>
