<template>
  <section class="panel-52129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52129");
const base = ref(52129);
const total = computed(() => base.value * 2);

function incrementar52129() {
  base.value++;
}
</script>
