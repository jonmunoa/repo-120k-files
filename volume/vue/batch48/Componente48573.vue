<template>
  <section class="panel-48573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48573");
const base = ref(48573);
const total = computed(() => base.value * 2);

function incrementar48573() {
  base.value++;
}
</script>
