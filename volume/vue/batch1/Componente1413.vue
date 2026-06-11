<template>
  <section class="panel-1413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1413");
const base = ref(1413);
const total = computed(() => base.value * 2);

function incrementar1413() {
  base.value++;
}
</script>
