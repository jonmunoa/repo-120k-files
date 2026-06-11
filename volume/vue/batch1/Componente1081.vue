<template>
  <section class="panel-1081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1081");
const base = ref(1081);
const total = computed(() => base.value * 2);

function incrementar1081() {
  base.value++;
}
</script>
