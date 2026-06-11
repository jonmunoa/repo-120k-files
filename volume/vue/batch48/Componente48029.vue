<template>
  <section class="panel-48029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48029");
const base = ref(48029);
const total = computed(() => base.value * 2);

function incrementar48029() {
  base.value++;
}
</script>
