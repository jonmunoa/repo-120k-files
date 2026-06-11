<template>
  <section class="panel-43433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43433");
const base = ref(43433);
const total = computed(() => base.value * 2);

function incrementar43433() {
  base.value++;
}
</script>
