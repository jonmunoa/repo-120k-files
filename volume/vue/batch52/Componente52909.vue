<template>
  <section class="panel-52909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52909");
const base = ref(52909);
const total = computed(() => base.value * 2);

function incrementar52909() {
  base.value++;
}
</script>
