<template>
  <section class="panel-43565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43565");
const base = ref(43565);
const total = computed(() => base.value * 2);

function incrementar43565() {
  base.value++;
}
</script>
