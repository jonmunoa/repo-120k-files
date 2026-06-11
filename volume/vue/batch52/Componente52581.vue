<template>
  <section class="panel-52581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52581");
const base = ref(52581);
const total = computed(() => base.value * 2);

function incrementar52581() {
  base.value++;
}
</script>
