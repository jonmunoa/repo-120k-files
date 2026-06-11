<template>
  <section class="panel-6437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6437");
const base = ref(6437);
const total = computed(() => base.value * 2);

function incrementar6437() {
  base.value++;
}
</script>
