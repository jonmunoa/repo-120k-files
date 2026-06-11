<template>
  <section class="panel-30237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30237");
const base = ref(30237);
const total = computed(() => base.value * 2);

function incrementar30237() {
  base.value++;
}
</script>
