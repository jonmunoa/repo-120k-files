<template>
  <section class="panel-38257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38257");
const base = ref(38257);
const total = computed(() => base.value * 2);

function incrementar38257() {
  base.value++;
}
</script>
