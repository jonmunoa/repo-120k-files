<template>
  <section class="panel-16261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16261");
const base = ref(16261);
const total = computed(() => base.value * 2);

function incrementar16261() {
  base.value++;
}
</script>
