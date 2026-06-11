<template>
  <section class="panel-23753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23753");
const base = ref(23753);
const total = computed(() => base.value * 2);

function incrementar23753() {
  base.value++;
}
</script>
