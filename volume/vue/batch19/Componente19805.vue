<template>
  <section class="panel-19805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19805");
const base = ref(19805);
const total = computed(() => base.value * 2);

function incrementar19805() {
  base.value++;
}
</script>
