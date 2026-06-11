<template>
  <section class="panel-1805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1805");
const base = ref(1805);
const total = computed(() => base.value * 2);

function incrementar1805() {
  base.value++;
}
</script>
