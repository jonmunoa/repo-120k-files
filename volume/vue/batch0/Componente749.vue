<template>
  <section class="panel-749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 749");
const base = ref(749);
const total = computed(() => base.value * 2);

function incrementar749() {
  base.value++;
}
</script>
