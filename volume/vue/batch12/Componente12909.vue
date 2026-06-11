<template>
  <section class="panel-12909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12909");
const base = ref(12909);
const total = computed(() => base.value * 2);

function incrementar12909() {
  base.value++;
}
</script>
