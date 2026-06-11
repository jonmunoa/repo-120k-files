<template>
  <section class="panel-43725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43725");
const base = ref(43725);
const total = computed(() => base.value * 2);

function incrementar43725() {
  base.value++;
}
</script>
