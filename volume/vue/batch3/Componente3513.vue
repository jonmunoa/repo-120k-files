<template>
  <section class="panel-3513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3513");
const base = ref(3513);
const total = computed(() => base.value * 2);

function incrementar3513() {
  base.value++;
}
</script>
