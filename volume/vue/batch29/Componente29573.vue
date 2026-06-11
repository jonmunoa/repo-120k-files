<template>
  <section class="panel-29573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29573");
const base = ref(29573);
const total = computed(() => base.value * 2);

function incrementar29573() {
  base.value++;
}
</script>
