<template>
  <section class="panel-51237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51237");
const base = ref(51237);
const total = computed(() => base.value * 2);

function incrementar51237() {
  base.value++;
}
</script>
