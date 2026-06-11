<template>
  <section class="panel-23833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23833");
const base = ref(23833);
const total = computed(() => base.value * 2);

function incrementar23833() {
  base.value++;
}
</script>
