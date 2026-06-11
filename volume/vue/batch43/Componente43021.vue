<template>
  <section class="panel-43021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43021");
const base = ref(43021);
const total = computed(() => base.value * 2);

function incrementar43021() {
  base.value++;
}
</script>
