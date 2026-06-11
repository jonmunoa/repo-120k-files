<template>
  <section class="panel-53793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53793");
const base = ref(53793);
const total = computed(() => base.value * 2);

function incrementar53793() {
  base.value++;
}
</script>
