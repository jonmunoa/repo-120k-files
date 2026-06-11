<template>
  <section class="panel-37585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37585");
const base = ref(37585);
const total = computed(() => base.value * 2);

function incrementar37585() {
  base.value++;
}
</script>
