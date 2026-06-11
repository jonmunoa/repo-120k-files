<template>
  <section class="panel-31473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31473");
const base = ref(31473);
const total = computed(() => base.value * 2);

function incrementar31473() {
  base.value++;
}
</script>
