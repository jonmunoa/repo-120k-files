<template>
  <section class="panel-35165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35165");
const base = ref(35165);
const total = computed(() => base.value * 2);

function incrementar35165() {
  base.value++;
}
</script>
