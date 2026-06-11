<template>
  <section class="panel-21585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21585");
const base = ref(21585);
const total = computed(() => base.value * 2);

function incrementar21585() {
  base.value++;
}
</script>
