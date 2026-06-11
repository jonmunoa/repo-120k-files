<template>
  <section class="panel-38165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38165");
const base = ref(38165);
const total = computed(() => base.value * 2);

function incrementar38165() {
  base.value++;
}
</script>
