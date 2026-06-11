<template>
  <section class="panel-16525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16525");
const base = ref(16525);
const total = computed(() => base.value * 2);

function incrementar16525() {
  base.value++;
}
</script>
