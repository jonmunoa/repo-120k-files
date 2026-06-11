<template>
  <section class="panel-28165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28165");
const base = ref(28165);
const total = computed(() => base.value * 2);

function incrementar28165() {
  base.value++;
}
</script>
