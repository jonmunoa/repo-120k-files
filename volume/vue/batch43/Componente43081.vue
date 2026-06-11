<template>
  <section class="panel-43081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43081");
const base = ref(43081);
const total = computed(() => base.value * 2);

function incrementar43081() {
  base.value++;
}
</script>
