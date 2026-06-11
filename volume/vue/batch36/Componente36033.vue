<template>
  <section class="panel-36033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36033");
const base = ref(36033);
const total = computed(() => base.value * 2);

function incrementar36033() {
  base.value++;
}
</script>
