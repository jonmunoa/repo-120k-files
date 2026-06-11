<template>
  <section class="panel-5793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5793");
const base = ref(5793);
const total = computed(() => base.value * 2);

function incrementar5793() {
  base.value++;
}
</script>
