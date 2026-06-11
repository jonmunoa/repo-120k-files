<template>
  <section class="panel-42141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42141");
const base = ref(42141);
const total = computed(() => base.value * 2);

function incrementar42141() {
  base.value++;
}
</script>
