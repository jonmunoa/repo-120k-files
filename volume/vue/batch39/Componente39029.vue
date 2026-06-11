<template>
  <section class="panel-39029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39029");
const base = ref(39029);
const total = computed(() => base.value * 2);

function incrementar39029() {
  base.value++;
}
</script>
