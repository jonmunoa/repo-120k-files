<template>
  <section class="panel-42805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42805");
const base = ref(42805);
const total = computed(() => base.value * 2);

function incrementar42805() {
  base.value++;
}
</script>
