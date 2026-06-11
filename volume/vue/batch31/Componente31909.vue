<template>
  <section class="panel-31909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31909");
const base = ref(31909);
const total = computed(() => base.value * 2);

function incrementar31909() {
  base.value++;
}
</script>
