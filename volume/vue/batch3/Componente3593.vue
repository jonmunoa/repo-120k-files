<template>
  <section class="panel-3593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3593");
const base = ref(3593);
const total = computed(() => base.value * 2);

function incrementar3593() {
  base.value++;
}
</script>
