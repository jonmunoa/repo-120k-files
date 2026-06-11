<template>
  <section class="panel-6141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6141");
const base = ref(6141);
const total = computed(() => base.value * 2);

function incrementar6141() {
  base.value++;
}
</script>
