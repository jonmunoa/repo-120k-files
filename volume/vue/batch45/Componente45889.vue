<template>
  <section class="panel-45889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45889");
const base = ref(45889);
const total = computed(() => base.value * 2);

function incrementar45889() {
  base.value++;
}
</script>
