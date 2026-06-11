<template>
  <section class="panel-18801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18801");
const base = ref(18801);
const total = computed(() => base.value * 2);

function incrementar18801() {
  base.value++;
}
</script>
