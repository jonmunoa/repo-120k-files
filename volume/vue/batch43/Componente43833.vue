<template>
  <section class="panel-43833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43833");
const base = ref(43833);
const total = computed(() => base.value * 2);

function incrementar43833() {
  base.value++;
}
</script>
