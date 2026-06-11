<template>
  <section class="panel-37613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37613");
const base = ref(37613);
const total = computed(() => base.value * 2);

function incrementar37613() {
  base.value++;
}
</script>
