<template>
  <section class="panel-13165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13165");
const base = ref(13165);
const total = computed(() => base.value * 2);

function incrementar13165() {
  base.value++;
}
</script>
