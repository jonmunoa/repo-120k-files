<template>
  <section class="panel-3665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3665");
const base = ref(3665);
const total = computed(() => base.value * 2);

function incrementar3665() {
  base.value++;
}
</script>
