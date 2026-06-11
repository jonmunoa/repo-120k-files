<template>
  <section class="panel-3909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3909");
const base = ref(3909);
const total = computed(() => base.value * 2);

function incrementar3909() {
  base.value++;
}
</script>
