<template>
  <section class="panel-29029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29029");
const base = ref(29029);
const total = computed(() => base.value * 2);

function incrementar29029() {
  base.value++;
}
</script>
