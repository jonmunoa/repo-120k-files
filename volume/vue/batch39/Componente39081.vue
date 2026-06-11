<template>
  <section class="panel-39081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39081");
const base = ref(39081);
const total = computed(() => base.value * 2);

function incrementar39081() {
  base.value++;
}
</script>
