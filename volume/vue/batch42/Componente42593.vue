<template>
  <section class="panel-42593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42593");
const base = ref(42593);
const total = computed(() => base.value * 2);

function incrementar42593() {
  base.value++;
}
</script>
