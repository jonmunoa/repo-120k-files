<template>
  <section class="panel-41801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41801");
const base = ref(41801);
const total = computed(() => base.value * 2);

function incrementar41801() {
  base.value++;
}
</script>
