<template>
  <section class="panel-525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 525");
const base = ref(525);
const total = computed(() => base.value * 2);

function incrementar525() {
  base.value++;
}
</script>
