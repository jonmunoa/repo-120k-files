<template>
  <section class="panel-43529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43529");
const base = ref(43529);
const total = computed(() => base.value * 2);

function incrementar43529() {
  base.value++;
}
</script>
