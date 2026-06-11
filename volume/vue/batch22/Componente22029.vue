<template>
  <section class="panel-22029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22029");
const base = ref(22029);
const total = computed(() => base.value * 2);

function incrementar22029() {
  base.value++;
}
</script>
