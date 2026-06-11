<template>
  <section class="panel-12553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12553");
const base = ref(12553);
const total = computed(() => base.value * 2);

function incrementar12553() {
  base.value++;
}
</script>
