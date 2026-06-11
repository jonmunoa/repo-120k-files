<template>
  <section class="panel-52001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52001");
const base = ref(52001);
const total = computed(() => base.value * 2);

function incrementar52001() {
  base.value++;
}
</script>
