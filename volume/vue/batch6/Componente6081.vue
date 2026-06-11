<template>
  <section class="panel-6081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6081");
const base = ref(6081);
const total = computed(() => base.value * 2);

function incrementar6081() {
  base.value++;
}
</script>
