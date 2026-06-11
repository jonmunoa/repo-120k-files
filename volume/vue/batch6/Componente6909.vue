<template>
  <section class="panel-6909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6909");
const base = ref(6909);
const total = computed(() => base.value * 2);

function incrementar6909() {
  base.value++;
}
</script>
