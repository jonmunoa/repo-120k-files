<template>
  <section class="panel-31989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31989");
const base = ref(31989);
const total = computed(() => base.value * 2);

function incrementar31989() {
  base.value++;
}
</script>
