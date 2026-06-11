<template>
  <section class="panel-42069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42069");
const base = ref(42069);
const total = computed(() => base.value * 2);

function incrementar42069() {
  base.value++;
}
</script>
