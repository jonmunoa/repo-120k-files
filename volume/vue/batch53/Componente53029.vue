<template>
  <section class="panel-53029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53029");
const base = ref(53029);
const total = computed(() => base.value * 2);

function incrementar53029() {
  base.value++;
}
</script>
