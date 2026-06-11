<template>
  <section class="panel-16513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16513");
const base = ref(16513);
const total = computed(() => base.value * 2);

function incrementar16513() {
  base.value++;
}
</script>
