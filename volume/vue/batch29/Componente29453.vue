<template>
  <section class="panel-29453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29453");
const base = ref(29453);
const total = computed(() => base.value * 2);

function incrementar29453() {
  base.value++;
}
</script>
