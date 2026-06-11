<template>
  <section class="panel-1461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1461");
const base = ref(1461);
const total = computed(() => base.value * 2);

function incrementar1461() {
  base.value++;
}
</script>
