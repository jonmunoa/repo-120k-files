<template>
  <section class="panel-49129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49129");
const base = ref(49129);
const total = computed(() => base.value * 2);

function incrementar49129() {
  base.value++;
}
</script>
