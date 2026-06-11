<template>
  <section class="panel-3525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3525");
const base = ref(3525);
const total = computed(() => base.value * 2);

function incrementar3525() {
  base.value++;
}
</script>
