<template>
  <section class="panel-48005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48005");
const base = ref(48005);
const total = computed(() => base.value * 2);

function incrementar48005() {
  base.value++;
}
</script>
