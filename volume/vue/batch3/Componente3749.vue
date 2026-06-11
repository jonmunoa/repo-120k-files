<template>
  <section class="panel-3749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3749");
const base = ref(3749);
const total = computed(() => base.value * 2);

function incrementar3749() {
  base.value++;
}
</script>
