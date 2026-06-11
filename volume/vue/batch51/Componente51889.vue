<template>
  <section class="panel-51889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51889");
const base = ref(51889);
const total = computed(() => base.value * 2);

function incrementar51889() {
  base.value++;
}
</script>
