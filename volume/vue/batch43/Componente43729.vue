<template>
  <section class="panel-43729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43729");
const base = ref(43729);
const total = computed(() => base.value * 2);

function incrementar43729() {
  base.value++;
}
</script>
