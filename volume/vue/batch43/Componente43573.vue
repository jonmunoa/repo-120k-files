<template>
  <section class="panel-43573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43573");
const base = ref(43573);
const total = computed(() => base.value * 2);

function incrementar43573() {
  base.value++;
}
</script>
