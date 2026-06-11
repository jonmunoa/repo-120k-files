<template>
  <section class="panel-43553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43553");
const base = ref(43553);
const total = computed(() => base.value * 2);

function incrementar43553() {
  base.value++;
}
</script>
