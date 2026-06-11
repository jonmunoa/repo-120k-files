<template>
  <section class="panel-48749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48749");
const base = ref(48749);
const total = computed(() => base.value * 2);

function incrementar48749() {
  base.value++;
}
</script>
