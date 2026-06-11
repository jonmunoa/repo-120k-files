<template>
  <section class="panel-54321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54321");
const base = ref(54321);
const total = computed(() => base.value * 2);

function incrementar54321() {
  base.value++;
}
</script>
