<template>
  <section class="panel-16593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16593");
const base = ref(16593);
const total = computed(() => base.value * 2);

function incrementar16593() {
  base.value++;
}
</script>
