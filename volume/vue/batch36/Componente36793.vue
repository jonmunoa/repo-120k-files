<template>
  <section class="panel-36793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36793");
const base = ref(36793);
const total = computed(() => base.value * 2);

function incrementar36793() {
  base.value++;
}
</script>
