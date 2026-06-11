<template>
  <section class="panel-23593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23593");
const base = ref(23593);
const total = computed(() => base.value * 2);

function incrementar23593() {
  base.value++;
}
</script>
