<template>
  <section class="panel-43025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43025");
const base = ref(43025);
const total = computed(() => base.value * 2);

function incrementar43025() {
  base.value++;
}
</script>
