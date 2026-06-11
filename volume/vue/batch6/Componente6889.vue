<template>
  <section class="panel-6889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6889");
const base = ref(6889);
const total = computed(() => base.value * 2);

function incrementar6889() {
  base.value++;
}
</script>
