<template>
  <section class="panel-42029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42029");
const base = ref(42029);
const total = computed(() => base.value * 2);

function incrementar42029() {
  base.value++;
}
</script>
