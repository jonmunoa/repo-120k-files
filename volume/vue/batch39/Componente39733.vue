<template>
  <section class="panel-39733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39733");
const base = ref(39733);
const total = computed(() => base.value * 2);

function incrementar39733() {
  base.value++;
}
</script>
