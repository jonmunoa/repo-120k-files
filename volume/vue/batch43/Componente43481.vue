<template>
  <section class="panel-43481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43481");
const base = ref(43481);
const total = computed(() => base.value * 2);

function incrementar43481() {
  base.value++;
}
</script>
