<template>
  <section class="panel-2473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2473");
const base = ref(2473);
const total = computed(() => base.value * 2);

function incrementar2473() {
  base.value++;
}
</script>
