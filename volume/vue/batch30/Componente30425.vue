<template>
  <section class="panel-30425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30425");
const base = ref(30425);
const total = computed(() => base.value * 2);

function incrementar30425() {
  base.value++;
}
</script>
