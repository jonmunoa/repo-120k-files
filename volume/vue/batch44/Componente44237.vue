<template>
  <section class="panel-44237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44237");
const base = ref(44237);
const total = computed(() => base.value * 2);

function incrementar44237() {
  base.value++;
}
</script>
