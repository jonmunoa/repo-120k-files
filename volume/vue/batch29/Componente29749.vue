<template>
  <section class="panel-29749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29749");
const base = ref(29749);
const total = computed(() => base.value * 2);

function incrementar29749() {
  base.value++;
}
</script>
