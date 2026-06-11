<template>
  <section class="panel-41517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41517");
const base = ref(41517);
const total = computed(() => base.value * 2);

function incrementar41517() {
  base.value++;
}
</script>
