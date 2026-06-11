<template>
  <section class="panel-3081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3081");
const base = ref(3081);
const total = computed(() => base.value * 2);

function incrementar3081() {
  base.value++;
}
</script>
