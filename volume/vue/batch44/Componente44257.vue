<template>
  <section class="panel-44257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44257");
const base = ref(44257);
const total = computed(() => base.value * 2);

function incrementar44257() {
  base.value++;
}
</script>
