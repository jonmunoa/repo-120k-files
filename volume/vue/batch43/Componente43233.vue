<template>
  <section class="panel-43233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43233");
const base = ref(43233);
const total = computed(() => base.value * 2);

function incrementar43233() {
  base.value++;
}
</script>
