<template>
  <section class="panel-16381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16381");
const base = ref(16381);
const total = computed(() => base.value * 2);

function incrementar16381() {
  base.value++;
}
</script>
