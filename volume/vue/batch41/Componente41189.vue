<template>
  <section class="panel-41189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41189");
const base = ref(41189);
const total = computed(() => base.value * 2);

function incrementar41189() {
  base.value++;
}
</script>
