<template>
  <section class="panel-29909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29909");
const base = ref(29909);
const total = computed(() => base.value * 2);

function incrementar29909() {
  base.value++;
}
</script>
