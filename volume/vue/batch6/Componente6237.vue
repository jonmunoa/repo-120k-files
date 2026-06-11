<template>
  <section class="panel-6237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6237");
const base = ref(6237);
const total = computed(() => base.value * 2);

function incrementar6237() {
  base.value++;
}
</script>
