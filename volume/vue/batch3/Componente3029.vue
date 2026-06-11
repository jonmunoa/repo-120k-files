<template>
  <section class="panel-3029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3029");
const base = ref(3029);
const total = computed(() => base.value * 2);

function incrementar3029() {
  base.value++;
}
</script>
