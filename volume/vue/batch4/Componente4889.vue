<template>
  <section class="panel-4889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4889");
const base = ref(4889);
const total = computed(() => base.value * 2);

function incrementar4889() {
  base.value++;
}
</script>
