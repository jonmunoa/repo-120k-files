<template>
  <section class="panel-37473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37473");
const base = ref(37473);
const total = computed(() => base.value * 2);

function incrementar37473() {
  base.value++;
}
</script>
