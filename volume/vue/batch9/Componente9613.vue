<template>
  <section class="panel-9613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9613");
const base = ref(9613);
const total = computed(() => base.value * 2);

function incrementar9613() {
  base.value++;
}
</script>
