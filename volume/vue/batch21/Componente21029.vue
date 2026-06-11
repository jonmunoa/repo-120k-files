<template>
  <section class="panel-21029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21029");
const base = ref(21029);
const total = computed(() => base.value * 2);

function incrementar21029() {
  base.value++;
}
</script>
