<template>
  <section class="panel-56081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56081");
const base = ref(56081);
const total = computed(() => base.value * 2);

function incrementar56081() {
  base.value++;
}
</script>
