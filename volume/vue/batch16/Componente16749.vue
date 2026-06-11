<template>
  <section class="panel-16749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16749");
const base = ref(16749);
const total = computed(() => base.value * 2);

function incrementar16749() {
  base.value++;
}
</script>
