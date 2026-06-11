<template>
  <section class="panel-29721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29721");
const base = ref(29721);
const total = computed(() => base.value * 2);

function incrementar29721() {
  base.value++;
}
</script>
