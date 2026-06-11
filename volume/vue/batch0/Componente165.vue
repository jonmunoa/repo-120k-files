<template>
  <section class="panel-165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 165");
const base = ref(165);
const total = computed(() => base.value * 2);

function incrementar165() {
  base.value++;
}
</script>
