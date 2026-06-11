<template>
  <section class="panel-27585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27585");
const base = ref(27585);
const total = computed(() => base.value * 2);

function incrementar27585() {
  base.value++;
}
</script>
