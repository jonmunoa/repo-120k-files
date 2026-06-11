<template>
  <section class="panel-43153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43153");
const base = ref(43153);
const total = computed(() => base.value * 2);

function incrementar43153() {
  base.value++;
}
</script>
