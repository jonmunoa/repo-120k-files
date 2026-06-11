<template>
  <section class="panel-44069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44069");
const base = ref(44069);
const total = computed(() => base.value * 2);

function incrementar44069() {
  base.value++;
}
</script>
