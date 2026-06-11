<template>
  <section class="panel-23549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23549");
const base = ref(23549);
const total = computed(() => base.value * 2);

function incrementar23549() {
  base.value++;
}
</script>
