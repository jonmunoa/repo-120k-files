<template>
  <section class="panel-3989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3989");
const base = ref(3989);
const total = computed(() => base.value * 2);

function incrementar3989() {
  base.value++;
}
</script>
