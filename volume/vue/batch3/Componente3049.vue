<template>
  <section class="panel-3049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3049");
const base = ref(3049);
const total = computed(() => base.value * 2);

function incrementar3049() {
  base.value++;
}
</script>
