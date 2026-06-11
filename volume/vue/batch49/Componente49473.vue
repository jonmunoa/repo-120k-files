<template>
  <section class="panel-49473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49473");
const base = ref(49473);
const total = computed(() => base.value * 2);

function incrementar49473() {
  base.value++;
}
</script>
