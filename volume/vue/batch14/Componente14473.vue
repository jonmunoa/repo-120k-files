<template>
  <section class="panel-14473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14473");
const base = ref(14473);
const total = computed(() => base.value * 2);

function incrementar14473() {
  base.value++;
}
</script>
