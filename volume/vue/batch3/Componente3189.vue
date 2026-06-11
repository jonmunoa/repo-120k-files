<template>
  <section class="panel-3189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3189");
const base = ref(3189);
const total = computed(() => base.value * 2);

function incrementar3189() {
  base.value++;
}
</script>
