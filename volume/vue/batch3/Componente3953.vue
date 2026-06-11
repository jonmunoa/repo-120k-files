<template>
  <section class="panel-3953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3953");
const base = ref(3953);
const total = computed(() => base.value * 2);

function incrementar3953() {
  base.value++;
}
</script>
