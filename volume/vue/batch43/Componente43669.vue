<template>
  <section class="panel-43669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43669");
const base = ref(43669);
const total = computed(() => base.value * 2);

function incrementar43669() {
  base.value++;
}
</script>
