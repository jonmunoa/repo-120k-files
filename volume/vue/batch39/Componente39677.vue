<template>
  <section class="panel-39677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39677");
const base = ref(39677);
const total = computed(() => base.value * 2);

function incrementar39677() {
  base.value++;
}
</script>
