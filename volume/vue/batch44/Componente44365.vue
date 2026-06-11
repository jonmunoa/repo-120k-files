<template>
  <section class="panel-44365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44365");
const base = ref(44365);
const total = computed(() => base.value * 2);

function incrementar44365() {
  base.value++;
}
</script>
