<template>
  <section class="panel-15081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15081");
const base = ref(15081);
const total = computed(() => base.value * 2);

function incrementar15081() {
  base.value++;
}
</script>
