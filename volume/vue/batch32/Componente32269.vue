<template>
  <section class="panel-32269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32269");
const base = ref(32269);
const total = computed(() => base.value * 2);

function incrementar32269() {
  base.value++;
}
</script>
