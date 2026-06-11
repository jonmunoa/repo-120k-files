<template>
  <section class="panel-36593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36593");
const base = ref(36593);
const total = computed(() => base.value * 2);

function incrementar36593() {
  base.value++;
}
</script>
