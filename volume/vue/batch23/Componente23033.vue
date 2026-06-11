<template>
  <section class="panel-23033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23033");
const base = ref(23033);
const total = computed(() => base.value * 2);

function incrementar23033() {
  base.value++;
}
</script>
