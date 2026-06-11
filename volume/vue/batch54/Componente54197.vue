<template>
  <section class="panel-54197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54197");
const base = ref(54197);
const total = computed(() => base.value * 2);

function incrementar54197() {
  base.value++;
}
</script>
