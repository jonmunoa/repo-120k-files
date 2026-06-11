<template>
  <section class="panel-30129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30129");
const base = ref(30129);
const total = computed(() => base.value * 2);

function incrementar30129() {
  base.value++;
}
</script>
