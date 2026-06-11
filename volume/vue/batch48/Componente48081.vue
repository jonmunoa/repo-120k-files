<template>
  <section class="panel-48081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48081");
const base = ref(48081);
const total = computed(() => base.value * 2);

function incrementar48081() {
  base.value++;
}
</script>
