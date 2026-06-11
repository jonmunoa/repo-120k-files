<template>
  <section class="panel-10237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10237");
const base = ref(10237);
const total = computed(() => base.value * 2);

function incrementar10237() {
  base.value++;
}
</script>
