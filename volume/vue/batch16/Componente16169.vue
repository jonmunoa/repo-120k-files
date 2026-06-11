<template>
  <section class="panel-16169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16169");
const base = ref(16169);
const total = computed(() => base.value * 2);

function incrementar16169() {
  base.value++;
}
</script>
