<template>
  <section class="panel-48189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48189");
const base = ref(48189);
const total = computed(() => base.value * 2);

function incrementar48189() {
  base.value++;
}
</script>
