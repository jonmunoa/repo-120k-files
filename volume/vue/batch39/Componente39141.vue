<template>
  <section class="panel-39141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39141");
const base = ref(39141);
const total = computed(() => base.value * 2);

function incrementar39141() {
  base.value++;
}
</script>
