<template>
  <section class="panel-3753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3753");
const base = ref(3753);
const total = computed(() => base.value * 2);

function incrementar3753() {
  base.value++;
}
</script>
