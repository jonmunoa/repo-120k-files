<template>
  <section class="panel-41793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41793");
const base = ref(41793);
const total = computed(() => base.value * 2);

function incrementar41793() {
  base.value++;
}
</script>
