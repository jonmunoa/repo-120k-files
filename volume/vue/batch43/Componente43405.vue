<template>
  <section class="panel-43405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43405");
const base = ref(43405);
const total = computed(() => base.value * 2);

function incrementar43405() {
  base.value++;
}
</script>
