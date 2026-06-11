<template>
  <section class="panel-10909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10909");
const base = ref(10909);
const total = computed(() => base.value * 2);

function incrementar10909() {
  base.value++;
}
</script>
