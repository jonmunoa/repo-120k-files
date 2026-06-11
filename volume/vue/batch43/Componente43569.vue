<template>
  <section class="panel-43569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43569");
const base = ref(43569);
const total = computed(() => base.value * 2);

function incrementar43569() {
  base.value++;
}
</script>
