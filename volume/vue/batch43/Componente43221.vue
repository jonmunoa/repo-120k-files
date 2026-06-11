<template>
  <section class="panel-43221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43221");
const base = ref(43221);
const total = computed(() => base.value * 2);

function incrementar43221() {
  base.value++;
}
</script>
