<template>
  <section class="panel-1273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1273");
const base = ref(1273);
const total = computed(() => base.value * 2);

function incrementar1273() {
  base.value++;
}
</script>
