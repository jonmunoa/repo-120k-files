<template>
  <section class="panel-43549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43549");
const base = ref(43549);
const total = computed(() => base.value * 2);

function incrementar43549() {
  base.value++;
}
</script>
