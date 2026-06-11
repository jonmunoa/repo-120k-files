<template>
  <section class="panel-45473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45473");
const base = ref(45473);
const total = computed(() => base.value * 2);

function incrementar45473() {
  base.value++;
}
</script>
