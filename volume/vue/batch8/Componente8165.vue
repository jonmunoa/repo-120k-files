<template>
  <section class="panel-8165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8165");
const base = ref(8165);
const total = computed(() => base.value * 2);

function incrementar8165() {
  base.value++;
}
</script>
