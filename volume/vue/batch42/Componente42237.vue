<template>
  <section class="panel-42237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42237");
const base = ref(42237);
const total = computed(() => base.value * 2);

function incrementar42237() {
  base.value++;
}
</script>
