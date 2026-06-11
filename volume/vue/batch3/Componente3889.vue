<template>
  <section class="panel-3889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3889");
const base = ref(3889);
const total = computed(() => base.value * 2);

function incrementar3889() {
  base.value++;
}
</script>
