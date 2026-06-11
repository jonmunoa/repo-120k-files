<template>
  <section class="panel-585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 585");
const base = ref(585);
const total = computed(() => base.value * 2);

function incrementar585() {
  base.value++;
}
</script>
