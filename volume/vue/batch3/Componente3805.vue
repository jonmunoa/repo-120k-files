<template>
  <section class="panel-3805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3805");
const base = ref(3805);
const total = computed(() => base.value * 2);

function incrementar3805() {
  base.value++;
}
</script>
