<template>
  <section class="panel-30029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30029");
const base = ref(30029);
const total = computed(() => base.value * 2);

function incrementar30029() {
  base.value++;
}
</script>
