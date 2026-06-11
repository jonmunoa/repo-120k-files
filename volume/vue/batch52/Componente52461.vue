<template>
  <section class="panel-52461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52461");
const base = ref(52461);
const total = computed(() => base.value * 2);

function incrementar52461() {
  base.value++;
}
</script>
