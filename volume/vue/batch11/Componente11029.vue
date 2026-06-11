<template>
  <section class="panel-11029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11029");
const base = ref(11029);
const total = computed(() => base.value * 2);

function incrementar11029() {
  base.value++;
}
</script>
