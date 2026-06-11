<template>
  <section class="panel-15029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15029");
const base = ref(15029);
const total = computed(() => base.value * 2);

function incrementar15029() {
  base.value++;
}
</script>
