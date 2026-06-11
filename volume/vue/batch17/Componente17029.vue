<template>
  <section class="panel-17029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17029");
const base = ref(17029);
const total = computed(() => base.value * 2);

function incrementar17029() {
  base.value++;
}
</script>
