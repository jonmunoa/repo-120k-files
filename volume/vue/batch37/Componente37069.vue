<template>
  <section class="panel-37069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37069");
const base = ref(37069);
const total = computed(() => base.value * 2);

function incrementar37069() {
  base.value++;
}
</script>
