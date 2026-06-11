<template>
  <section class="panel-52069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52069");
const base = ref(52069);
const total = computed(() => base.value * 2);

function incrementar52069() {
  base.value++;
}
</script>
