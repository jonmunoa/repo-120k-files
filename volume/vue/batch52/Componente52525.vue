<template>
  <section class="panel-52525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52525");
const base = ref(52525);
const total = computed(() => base.value * 2);

function incrementar52525() {
  base.value++;
}
</script>
