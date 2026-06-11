<template>
  <section class="panel-56753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56753");
const base = ref(56753);
const total = computed(() => base.value * 2);

function incrementar56753() {
  base.value++;
}
</script>
