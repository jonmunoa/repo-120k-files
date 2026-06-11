<template>
  <section class="panel-39461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39461");
const base = ref(39461);
const total = computed(() => base.value * 2);

function incrementar39461() {
  base.value++;
}
</script>
