<template>
  <section class="panel-3417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3417");
const base = ref(3417);
const total = computed(() => base.value * 2);

function incrementar3417() {
  base.value++;
}
</script>
