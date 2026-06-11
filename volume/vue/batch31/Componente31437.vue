<template>
  <section class="panel-31437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31437");
const base = ref(31437);
const total = computed(() => base.value * 2);

function incrementar31437() {
  base.value++;
}
</script>
