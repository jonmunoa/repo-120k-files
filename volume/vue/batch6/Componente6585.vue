<template>
  <section class="panel-6585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6585");
const base = ref(6585);
const total = computed(() => base.value * 2);

function incrementar6585() {
  base.value++;
}
</script>
