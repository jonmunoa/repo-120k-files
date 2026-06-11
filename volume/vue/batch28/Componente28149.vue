<template>
  <section class="panel-28149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28149");
const base = ref(28149);
const total = computed(() => base.value * 2);

function incrementar28149() {
  base.value++;
}
</script>
