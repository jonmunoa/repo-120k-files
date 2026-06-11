<template>
  <section class="panel-3321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3321");
const base = ref(3321);
const total = computed(() => base.value * 2);

function incrementar3321() {
  base.value++;
}
</script>
