<template>
  <section class="panel-4793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4793");
const base = ref(4793);
const total = computed(() => base.value * 2);

function incrementar4793() {
  base.value++;
}
</script>
