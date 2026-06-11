<template>
  <section class="panel-42453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42453");
const base = ref(42453);
const total = computed(() => base.value * 2);

function incrementar42453() {
  base.value++;
}
</script>
