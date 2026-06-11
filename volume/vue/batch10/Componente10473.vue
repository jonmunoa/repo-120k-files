<template>
  <section class="panel-10473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10473");
const base = ref(10473);
const total = computed(() => base.value * 2);

function incrementar10473() {
  base.value++;
}
</script>
