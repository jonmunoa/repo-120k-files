<template>
  <section class="panel-29957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29957");
const base = ref(29957);
const total = computed(() => base.value * 2);

function incrementar29957() {
  base.value++;
}
</script>
