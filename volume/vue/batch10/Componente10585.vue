<template>
  <section class="panel-10585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10585");
const base = ref(10585);
const total = computed(() => base.value * 2);

function incrementar10585() {
  base.value++;
}
</script>
