<template>
  <section class="panel-17237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17237");
const base = ref(17237);
const total = computed(() => base.value * 2);

function incrementar17237() {
  base.value++;
}
</script>
