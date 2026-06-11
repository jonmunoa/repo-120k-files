<template>
  <section class="panel-6549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6549");
const base = ref(6549);
const total = computed(() => base.value * 2);

function incrementar6549() {
  base.value++;
}
</script>
