<template>
  <section class="panel-44129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44129");
const base = ref(44129);
const total = computed(() => base.value * 2);

function incrementar44129() {
  base.value++;
}
</script>
