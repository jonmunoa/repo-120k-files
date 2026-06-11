<template>
  <section class="panel-52889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52889");
const base = ref(52889);
const total = computed(() => base.value * 2);

function incrementar52889() {
  base.value++;
}
</script>
