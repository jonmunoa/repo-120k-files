<template>
  <section class="panel-29525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29525");
const base = ref(29525);
const total = computed(() => base.value * 2);

function incrementar29525() {
  base.value++;
}
</script>
