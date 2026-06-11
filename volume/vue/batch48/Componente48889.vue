<template>
  <section class="panel-48889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48889");
const base = ref(48889);
const total = computed(() => base.value * 2);

function incrementar48889() {
  base.value++;
}
</script>
