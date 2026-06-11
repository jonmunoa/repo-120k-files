<template>
  <section class="panel-38805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38805");
const base = ref(38805);
const total = computed(() => base.value * 2);

function incrementar38805() {
  base.value++;
}
</script>
