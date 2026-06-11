<template>
  <section class="panel-41585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41585");
const base = ref(41585);
const total = computed(() => base.value * 2);

function incrementar41585() {
  base.value++;
}
</script>
