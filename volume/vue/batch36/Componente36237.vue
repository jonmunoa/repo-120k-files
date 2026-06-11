<template>
  <section class="panel-36237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36237");
const base = ref(36237);
const total = computed(() => base.value * 2);

function incrementar36237() {
  base.value++;
}
</script>
