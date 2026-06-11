<template>
  <section class="panel-1665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1665");
const base = ref(1665);
const total = computed(() => base.value * 2);

function incrementar1665() {
  base.value++;
}
</script>
