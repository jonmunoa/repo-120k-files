<template>
  <section class="panel-19081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19081");
const base = ref(19081);
const total = computed(() => base.value * 2);

function incrementar19081() {
  base.value++;
}
</script>
