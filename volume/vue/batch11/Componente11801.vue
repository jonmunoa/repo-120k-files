<template>
  <section class="panel-11801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11801");
const base = ref(11801);
const total = computed(() => base.value * 2);

function incrementar11801() {
  base.value++;
}
</script>
