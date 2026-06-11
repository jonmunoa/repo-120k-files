<template>
  <section class="panel-17165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17165");
const base = ref(17165);
const total = computed(() => base.value * 2);

function incrementar17165() {
  base.value++;
}
</script>
