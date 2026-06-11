<template>
  <section class="panel-48425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48425");
const base = ref(48425);
const total = computed(() => base.value * 2);

function incrementar48425() {
  base.value++;
}
</script>
