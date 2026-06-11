<template>
  <section class="panel-16497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16497");
const base = ref(16497);
const total = computed(() => base.value * 2);

function incrementar16497() {
  base.value++;
}
</script>
