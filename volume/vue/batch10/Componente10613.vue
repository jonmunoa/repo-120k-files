<template>
  <section class="panel-10613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10613");
const base = ref(10613);
const total = computed(() => base.value * 2);

function incrementar10613() {
  base.value++;
}
</script>
