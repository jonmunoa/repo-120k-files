<template>
  <section class="panel-24165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24165");
const base = ref(24165);
const total = computed(() => base.value * 2);

function incrementar24165() {
  base.value++;
}
</script>
