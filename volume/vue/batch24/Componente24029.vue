<template>
  <section class="panel-24029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24029");
const base = ref(24029);
const total = computed(() => base.value * 2);

function incrementar24029() {
  base.value++;
}
</script>
