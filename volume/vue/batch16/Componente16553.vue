<template>
  <section class="panel-16553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16553");
const base = ref(16553);
const total = computed(() => base.value * 2);

function incrementar16553() {
  base.value++;
}
</script>
