<template>
  <section class="panel-6497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6497");
const base = ref(6497);
const total = computed(() => base.value * 2);

function incrementar6497() {
  base.value++;
}
</script>
