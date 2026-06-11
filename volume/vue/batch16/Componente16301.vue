<template>
  <section class="panel-16301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16301");
const base = ref(16301);
const total = computed(() => base.value * 2);

function incrementar16301() {
  base.value++;
}
</script>
