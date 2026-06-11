<template>
  <section class="panel-19165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19165");
const base = ref(19165);
const total = computed(() => base.value * 2);

function incrementar19165() {
  base.value++;
}
</script>
