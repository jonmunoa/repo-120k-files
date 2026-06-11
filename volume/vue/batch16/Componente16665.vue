<template>
  <section class="panel-16665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16665");
const base = ref(16665);
const total = computed(() => base.value * 2);

function incrementar16665() {
  base.value++;
}
</script>
