<template>
  <section class="panel-1029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1029");
const base = ref(1029);
const total = computed(() => base.value * 2);

function incrementar1029() {
  base.value++;
}
</script>
