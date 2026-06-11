<template>
  <section class="panel-43353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43353");
const base = ref(43353);
const total = computed(() => base.value * 2);

function incrementar43353() {
  base.value++;
}
</script>
