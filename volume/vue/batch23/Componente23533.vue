<template>
  <section class="panel-23533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23533");
const base = ref(23533);
const total = computed(() => base.value * 2);

function incrementar23533() {
  base.value++;
}
</script>
