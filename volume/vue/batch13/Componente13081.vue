<template>
  <section class="panel-13081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13081");
const base = ref(13081);
const total = computed(() => base.value * 2);

function incrementar13081() {
  base.value++;
}
</script>
