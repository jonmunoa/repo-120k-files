<template>
  <section class="panel-43761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43761");
const base = ref(43761);
const total = computed(() => base.value * 2);

function incrementar43761() {
  base.value++;
}
</script>
