<template>
  <section class="panel-42793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42793");
const base = ref(42793);
const total = computed(() => base.value * 2);

function incrementar42793() {
  base.value++;
}
</script>
