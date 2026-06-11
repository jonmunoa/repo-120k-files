<template>
  <section class="panel-54029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54029");
const base = ref(54029);
const total = computed(() => base.value * 2);

function incrementar54029() {
  base.value++;
}
</script>
