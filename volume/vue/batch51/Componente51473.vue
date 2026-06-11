<template>
  <section class="panel-51473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51473");
const base = ref(51473);
const total = computed(() => base.value * 2);

function incrementar51473() {
  base.value++;
}
</script>
