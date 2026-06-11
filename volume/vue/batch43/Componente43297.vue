<template>
  <section class="panel-43297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43297");
const base = ref(43297);
const total = computed(() => base.value * 2);

function incrementar43297() {
  base.value++;
}
</script>
