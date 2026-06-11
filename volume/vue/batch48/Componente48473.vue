<template>
  <section class="panel-48473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48473");
const base = ref(48473);
const total = computed(() => base.value * 2);

function incrementar48473() {
  base.value++;
}
</script>
