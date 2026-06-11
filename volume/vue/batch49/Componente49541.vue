<template>
  <section class="panel-49541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49541");
const base = ref(49541);
const total = computed(() => base.value * 2);

function incrementar49541() {
  base.value++;
}
</script>
