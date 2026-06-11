<template>
  <section class="panel-51613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51613");
const base = ref(51613);
const total = computed(() => base.value * 2);

function incrementar51613() {
  base.value++;
}
</script>
