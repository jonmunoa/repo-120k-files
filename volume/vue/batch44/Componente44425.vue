<template>
  <section class="panel-44425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44425");
const base = ref(44425);
const total = computed(() => base.value * 2);

function incrementar44425() {
  base.value++;
}
</script>
