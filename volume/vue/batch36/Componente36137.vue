<template>
  <section class="panel-36137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36137");
const base = ref(36137);
const total = computed(() => base.value * 2);

function incrementar36137() {
  base.value++;
}
</script>
