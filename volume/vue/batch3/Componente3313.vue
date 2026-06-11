<template>
  <section class="panel-3313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3313");
const base = ref(3313);
const total = computed(() => base.value * 2);

function incrementar3313() {
  base.value++;
}
</script>
