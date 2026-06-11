<template>
  <section class="panel-31793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31793");
const base = ref(31793);
const total = computed(() => base.value * 2);

function incrementar31793() {
  base.value++;
}
</script>
