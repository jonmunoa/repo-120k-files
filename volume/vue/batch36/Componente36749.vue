<template>
  <section class="panel-36749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36749");
const base = ref(36749);
const total = computed(() => base.value * 2);

function incrementar36749() {
  base.value++;
}
</script>
