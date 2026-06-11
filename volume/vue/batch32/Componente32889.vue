<template>
  <section class="panel-32889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32889");
const base = ref(32889);
const total = computed(() => base.value * 2);

function incrementar32889() {
  base.value++;
}
</script>
