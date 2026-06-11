<template>
  <section class="panel-1889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1889");
const base = ref(1889);
const total = computed(() => base.value * 2);

function incrementar1889() {
  base.value++;
}
</script>
